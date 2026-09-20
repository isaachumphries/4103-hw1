# CSC 4103 - Operating Systems - Homework #1

## Question 1: Dynamic String Input and Sorting in C (2 points)

### Write a C program named `prog1.c` that prompts the user for an integer n and then accepts n strings from standard input, one string per line.

Your program must satisfy the following requirements:

    1. Use `fgets()` to read each string.
    2. If an input string is longer than 512 characters, truncate it to 512 characters.
    3. Remove the newline character appended by `fgets()`, unless the newline has already been removed as a result of truncation.
    4. Store all strings in a dynamically allocated array containing exactly n elements.
    5. Each element must contain exactly the required number of characters to hold the corresponding string and its terminating null character ('\0').
    6. Use `malloc()` to dynamically allocate the array of strings.
    7. After processing all input strings, use the standard C library function `qsort()` to sort the strings.
    8. Output the sorted list using `printf()`.

### Compilation

Compile your program under Linux using:

```bash
gcc -Wall -o prog1 prog1.c
```

Your program should compile without warnings.

## Question 2: Structures and Function Pointers in C (3 points)

Consider the following type definition:

```c
typedef struct funcs {
    int (*openit)(char *name, int prot);
    void (*closeit)(void);
} funcs;
```

### Write a C program named `prog2.c` that satisfies the following requirements:

Part (a): Functions and Function Prototypes

    • Write a function named `my_openit()` that matches the type of the openit function pointer.
    • Write a function named `my_closeit()` that matches the type of the closeit function pointer.
    • The functions do not need to perform complex operations; a single `printf()` statement in each function is sufficient.
    • Include appropriate function prototypes for `my_openit()` and `my_closeit()`.

Part (b): Static Initialization

    • Declare a variable of type funcs.
    • Statically initialize the openit field with the address of `my_openit()`.
    • Statically initialize the closeit field with the address of `my_closeit()`.

Part (c): Initialization Using a Function

Declare another variable of type funcs.
Write a function `f()` that initializes the openit and closeit fields.
Pass the address of the funcs variable to `f()`, for example: `f(&var_of_type_funcs)`;

### Compilation

Compile the program under Linux using:

```bash
gcc -Wall -o prog2 prog2.c
```

The program should compile successfully without warnings.

### Execution

Run the program using:

```bash
./prog2
```

Verify that the program correctly demonstrates the initialization and use of the function pointers.

## Question 3: Code Size Optimization in C (3 Points)

In this task, you will write a C program that produces a specific output pattern and then optimize the program to minimize the size of the source code.

Consider the following output. The lines with the leftmost X's are against the left margin of the screen, the other lines begin with a single space, and there are single spaces between the X's:

```
 X X X X X
X X X X X
 X X X X X
X X X X X
 X X X X X
```

First, write a C program that outputs the pattern above exactly.

Then, modify your program to satisfy the following rules:

    • Rule #1: Your program should be as small as possible in terms of the number of characters in the source file. Although minimizing source-code size is not generally considered good programming practice, this exercise will help you explore C language features and use them creatively.

    • Rule #2: You cannot use a C statement that outputs more than a single character at a time. Hint: Use `putchar()`.


    • Rule #3: Your entire source code must reside in a single file called `small.c`. Your final solution may either use no header files or use ONLY standard C header files. Custom header files are not allowed.

    • Rule #4: All code must be contained in the single source file. You may not pipe code into gcc or use similar techniques.

For this question only, warnings during compilation are acceptable. Your program must work correctly and should be as small as possible.

### Compilation

Evaluate your solution under Linux using:

```bash
wc -c small.c
gcc -o small small.c
./small
```

Smaller than 75 characters is good. Smaller than 50 characters is world class.
