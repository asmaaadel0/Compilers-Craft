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
  
def save_file():
    file_path = filedialog.asksaveasfilename(defaultextension=".txt", filetypes=[("Text Files", "*.txt"), ("All Files", "*.*")])
    if file_path:
        with open(file_path, 'w') as file:
            file.write(code_editor.get(1.0, tk.END))
            
def compile_code():
    code = code_editor.get(1.0, tk.END)
    file_path = "./output/temp.txt"
    with open(file_path, "w") as file:
        file.write(code)
    
    status_bar.config(text="Compiling...", fg="white", bg="blue")
   
    compiler = "..\src\out.exe ./output/temp.txt"
    process = subprocess.Popen(compiler, stdout=subprocess.PIPE, stderr=subprocess.PIPE, shell=True)
    out, _ = process.communicate()

    with open('./output/error_file.txt') as f:
        contents = f.read()
    
    output_panel.delete(1.0, tk.END)
    if contents:    
        output_panel.insert(tk.END, out.decode("utf-8"))
        status_bar.config(text="Error", fg="white", bg="red")
    else: 
        with open('./output/quadruples.txt') as f:
            quadruples = f.read()
        output_panel.insert(tk.END, quadruples)
        status_bar.config(text="Compiled Successfully!", fg="white", bg="green")


root = tk.Tk()
root.title("Simple Programming Language IDE")
root.geometry("1200x600")

menu_bar = tk.Menu(root)
file_menu = tk.Menu(menu_bar, tearoff=0)
file_menu.add_command(label="Open", command=open_file)
file_menu.add_command(label="Save", command=save_file)
file_menu.add_separator()
file_menu.add_command(label="Exit", command=root.quit)
menu_bar.add_cascade(label="File", menu=file_menu)
root.config(menu=menu_bar)
code_editor = tk.Text(root, wrap=tk.WORD)
code_editor.pack(expand=True, fill=tk.BOTH)

compile_button = tk.Button(root, text="Compile", command=compile_code, fg="white", bg="blue")
compile_button.pack()

status_bar = tk.Label(root, text="Ready", bd=1, relief=tk.SUNKEN, anchor=tk.W)
status_bar.pack(side=tk.BOTTOM, fill=tk.X)

output_panel = tk.Text(root, wrap=tk.WORD)
output_panel.pack(expand=True, fill=tk.BOTH)

root.mainloop()
