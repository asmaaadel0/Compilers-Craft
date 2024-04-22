import tkinter as tk
from tkinter import filedialog
import subprocess
import os
def open_file():
    file_path = filedialog.askopenfilename(filetypes=[("Text Files", "*.txt"), ("All Files", "*.*")])
    if file_path:
        with open(file_path, 'r') as file:
            code_editor.delete(1.0, tk.END)
            code_editor.insert(tk.END, file.read())
            
def compile_code():
    code = code_editor.get(1.0, tk.END)
    file_path = "./temp.txt"
    with open(file_path, "w") as file:
        file.write(code)
    
    status_bar.config(text="Compiling...", fg="white", bg="blue")
    compiler = "..\src\out.exe temp.txt"
    process = subprocess.Popen(compiler, stdout=subprocess.PIPE, stderr=subprocess.PIPE, shell=True)
    out, err = process.communicate()
    
    if err:
        # Display syntax errors in output panel
        output_panel.delete(1.0, tk.END)
        output_panel.insert(tk.END, err.decode("utf-8"), "error")  # Apply error formatting
        
        # Change status bar color to indicate error
        status_bar.config(text="Syntax Error", fg="white", bg="red")
    else:
        # Clear the output panel
        output_panel.delete(1.0, tk.END)
        
        # Insert TerminalOutput into the output panel
        output_panel.insert(tk.END, out.decode("utf-8"))
        
        # Change status bar color to indicate successful compilation
        status_bar.config(text="Compiled!", fg="white", bg="green")
    # Delete the temporary file
    os.remove(file_path)    


root = tk.Tk()
root.title("Simple Programming Language IDE")
root.geometry("800x600")

# Menu
menu_bar = tk.Menu(root)
file_menu = tk.Menu(menu_bar, tearoff=0)
file_menu.add_command(label="Open", command=open_file)
file_menu.add_separator()
file_menu.add_command(label="Exit", command=root.quit)
menu_bar.add_cascade(label="File", menu=file_menu)
root.config(menu=menu_bar)

# Code Editor
code_editor = tk.Text(root, wrap=tk.WORD)
code_editor.pack(expand=True, fill=tk.BOTH)

# Compile Button
compile_button = tk.Button(root, text="Compile", command=compile_code)
compile_button.pack()

# Status Bar
status_bar = tk.Label(root, text="Ready", bd=1, relief=tk.SUNKEN, anchor=tk.W)
status_bar.pack(side=tk.BOTTOM, fill=tk.X)

# Output Panel
output_panel = tk.Text(root, wrap=tk.WORD)
output_panel.pack(expand=True, fill=tk.BOTH)


root.mainloop()
