%token INT FLOAT DOUBLE BOOL STRING ENUM CONST
%token PRINT VOID RETURN 
%token FOR WHILE DO IF ELSE SWITCH CASE DEFAULT BREAK
%token BOOL_LITERAL EQUALITY DEC INC NEG_EQUALITY GT GTE LT LTE EQ SEMICOLON MODULO PLUS MINUS MUL DIV POW STRING_LITERAL    
%token NOT AND  OR
%token IDENTIFIER DIGIT FLOAT_DIGIT
%left AND OR
%right LOGIC_NOT
%left EQUALITY NEG_EQUALITY
%right POW
%left PLUS INC DEC MODULO
%left MINUS
%left MUL
%left DIV
%right EQUALITY
%right GT
%right LT
%left '{'
%left '}'

%type <str> INT FLOAT BOOL STRING VOID CONSTANT IDENTIFIER TYPE STRING_LITERAL ENUM PLUS
%type <float_val> FLOAT_DIGIT
%type <num> DIGIT
%type <bool_val> BOOL_LITERAL