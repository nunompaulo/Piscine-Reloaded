# Piscine Reloaded

This folder contains the exercises from Piscine Reloaded at 42 School, a refresher program for C programming.

## Knowledge Acquired

Through this Piscine Reloaded journey, I have:

- **Strengthened Shell Scripting Fundamentals:** Mastered command-line operations and learned to work with special characters and complex filenames in shell environments. Key commands include:
  - **File Manipulation:** `touch`, `truncate`, `chmod`, `ln` for modifying file properties, sizes, permissions, and creating symbolic links
  - **File Searching:** `find` for recursive directory traversal and pattern matching
  - **Text Processing:** `grep` for pattern searching, `sed` for text substitution, `awk` for field extraction and data processing
  - **System Information:** `ifconfig` for network configuration inspection
  - **Piping & Redirection:** Combining commands with `|`, `cut`, and other stream processing tools
  - **Special Characters:** Proper escaping and quoting techniques for handling complex filenames

- **Reinforced Core C Concepts:** Refreshed my understanding of basic C programming including variables, loops, conditionals, and the fundamental syntax required for more advanced projects.

- **Deepened Pointer Expertise:** Solidified knowledge of pointer dereferencing, pass-by-reference techniques, and memory manipulation—critical concepts for the Common Core.

- **Mastered String Handling:** Developed proficiency in string operations, including iteration, comparison, manipulation, and duplication, which are fundamental in systems programming.

- **Understood Memory Management:** Gained hands-on experience with dynamic memory allocation using `malloc`, understanding memory responsibility and preventing leaks—essential for building robust C applications.

- **Learned Recursion Patterns:** Comprehended recursive function design, base cases, and call stack behavior through factorial and other recursive exercises.

- **Grasped Higher-Order Programming:** Understood function pointers, callbacks, and the ability to pass functions as parameters, enabling flexible and reusable code patterns.

- **Practiced Algorithm Design:** Implemented sorting algorithms, search logic, and optimization techniques that form the foundation for more complex algorithmic problems.

- **Mastered Build Systems:** Learned how to organize code into libraries using Makefiles and the `ar` archiver, preparing me for multi-file projects in the Common Core.

These foundational skills have equipped me with the necessary knowledge and confidence to tackle the more advanced challenges of the Common Core, where I will build larger systems and more sophisticated applications.

## Shell Exercises (ex00 - ex05)

### ex00 — File and Folder Properties Manipulation
**Purpose:** Teaches manipulation and alteration of file and folder properties using commands like `truncate`, `touch`, and `chmod`. Students learn to modify file dates, sizes, symbolic links, and permissions.

### ex01 — Special Filenames
**File:** `z` (containing "Z")  
**Purpose:** Teaches handling of unusual filenames. Students learn that files can have unconventional names and practice navigating them.

### ex02 — Shell Script: File Cleanup
**File:** `clean` (shell script)  
**Purpose:** Introduces shell scripting. The script finds and deletes backup files (ending in `~` or `#*#`) from the current directory using the `find` command.

### ex03 — Shell Scripts: Finding .sh Files
**Files:** `find_sh.sh`, `file1.sh`, `file2.sh`, `file3.sh`  
**Purpose:** Teaches file searching with shell scripts. The main script `find_sh.sh` recursively finds all shell files and prints their names without the `.sh` extension.

### ex04 — Shell Script: MAC Address Extraction
**Files:** `mac.sh`, `MAC.sh`  
**Purpose:** Teaches shell command piping and text processing. Extracts MAC addresses from network interface configuration using `ifconfig` and `awk`.

### ex05 — Special Characters in Filenames
**File:** `"\?$*'MaRViN'*$?\"` (complex name with special characters)  
**Purpose:** Teaches handling of shell special characters. Students learn how to work with files that have quotes, backslashes, wildcards, and other special characters.

## C Programming Exercises (ex06 - ex27)

### ex06 — Print Alphabet Function
**File:** `ft_print_alphabet.c`  
**Purpose:** First C programming exercise. Creates a function that prints all lowercase letters from 'a' to 'z'.  
**Learned:** Basic for loops, character iteration, function design.  
**Logic:** Iterates from character 'a' (ASCII 97) to 'z' (ASCII 122), printing each character incrementally.

### ex07 — Print Numbers Function
**Files:** `ft_print_number.c`, `ft_print_numbers.c`  
**Purpose:** Prints digits 0-9 using character output.  
**Learned:** Character casting, digit representation, loop iteration with numeric values.  
**Logic:** Iterates from 0 to 9, casting each digit to its ASCII character equivalent (48-57) for printing.

### ex08 — Check Negative Number
**File:** `ft_is_negative.c`  
**Purpose:** Checks if a number is negative and outputs a character accordingly.  
**Learned:** If/else conditionals, comparison operators, character output based on conditions.  
**Logic:** Uses ternary operator or if statement to determine sign: negative numbers output 'N', non-negative output 'P'.

### ex09 — Pointer Manipulation Basics
**File:** `ft_ft.c`  
**Purpose:** Modifies an integer through a pointer.  
**Learned:** Pointer dereferencing (*), accessing and modifying data through memory addresses.  
**Logic:** Receives a pointer parameter, dereferences it with *, and assigns value 42 to the memory location it points to.

### ex10 — Swap Two Values
**File:** `ft_swap.c`  
**Purpose:** Exchanges the values of two integers using pointers.  
**Learned:** Pass-by-reference pattern, temporary variables, pointer dereferencing for modifications.  
**Logic:** Uses a temporary variable to hold one value while swapping: temp=*a, *a=*b, *b=temp. Requires three assignments.

### ex11 — Division and Modulo
**File:** `ft_div_mod.c`  
**Purpose:** Calculates and stores division and modulo results via pointers.  
**Learned:** Multiple pointer parameters for output, pointer dereferencing for assignments, mathematical operators.  
**Logic:** Receives two values and two pointers; calculates a/b and a%b, storing results in memory locations pointed to by the pointers.

### ex12 — Iterative Factorial
**File:** `ft_iterative_factorial.c`  
**Purpose:** Calculates factorial using a loop-based approach.  
**Learned:** While/for loops, conditional error handling, mathematical iterations, boundary checking.  
**Logic:** Validates input (n >= 0), then multiplies result from 1 up to n: result = 1×2×3×...×n. Returns 1 for n=0.

### ex13 — Recursive Factorial
**File:** `ft_recursive_factorial.c`  
**Purpose:** Calculates factorial using recursion.  
**Learned:** Recursive function calls, base case design, call stack management, function self-reference.  
**Logic:** Base case: n ≤ 1 returns 1. Recursive case: n! = n × (n-1)!. Each call reduces n until base case is reached.

### ex14 — Square Root Calculation
**File:** `ft_sqrt.c`  
**Purpose:** Finds the integer square root of a number.  
**Learned:** Loop-based algorithms, conditional logic, return values for special cases.  
**Logic:** Iterates from 1 to n, checking if i×i equals n. If found, returns i; otherwise returns 0. Optimized versions stop at n/2.

### ex15 — Print String Function
**File:** `ft_putstr.c`  
**Purpose:** Prints an entire string character by character.  
**Learned:** String iteration, null terminator recognition, function abstraction, helper function calls.  
**Logic:** Loops through string until null terminator ('\0'), calling a print function for each character to output the string.

### ex16 — String Length Function
**File:** `ft_strlen.c`  
**Purpose:** Calculates the number of characters in a string.  
**Learned:** String structure (null-terminated arrays), counter variables, loop termination conditions.  
**Logic:** Iterates through string incrementing counter until null terminator is found. Returns the total count.

### ex17 — String Comparison
**File:** `ft_strcmp.c`  
**Purpose:** Compares two strings lexicographically.  
**Learned:** Character-by-character comparison, difference calculation, early exit on mismatch, return value conventions.  
**Logic:** Compares characters at same positions; returns 0 if equal, negative if first < second, positive if first > second.

### ex18 — Print Command Line Arguments
**File:** `ft_print_params.c`  
**Purpose:** Accesses and displays all program command-line arguments.  
**Learned:** `argc` (argument count) and `argv` (argument vector), array of strings, main function parameters.  
**Logic:** Iterates from 1 to argc-1 (skipping program name at argv[0]), printing each argument string on separate lines.

### ex19 — Sort Command Line Arguments
**File:** `ft_sort_params.c`  
**Purpose:** Sorts and displays command-line arguments in alphabetical order.  
**Learned:** Bubble sort algorithm, string comparison, nested loops for sorting, argument manipulation.  
**Logic:** Uses bubble sort comparing adjacent arguments with `strcmp`; swaps if out of order. Repeats until fully sorted, then prints.

### ex20 — String Duplication
**File:** `ft_strdup.c`  
**Purpose:** Creates an independent copy of a string in dynamically allocated memory.  
**Learned:** Dynamic memory allocation with `malloc`, memory size calculation, string copying, memory responsibility.  
**Logic:** Calculates string length, allocates length+1 bytes (for null terminator), copies each character, returns pointer to new string.

### ex21 — Create Integer Range
**File:** `ft_range.c`  
**Purpose:** Generates a dynamically allocated array containing consecutive integers.  
**Learned:** Multidimensional array allocation, array population, loop-based initialization, pointer arithmetic.  
**Logic:** Allocates array sized for (max-min+1) integers, fills array with values from min to max, returns pointer to array.

### ex22 — Absolute Value Macro
**File:** `ft_abs.h`  
**Purpose:** Defines a preprocessor macro for calculating absolute values.  
**Learned:** `#define` preprocessor directives, ternary operator (?:), macro syntax without function overhead.  
**Logic:** Uses ternary operator: (x < 0) ? -x : x to return negative as positive or keep positive values unchanged.

### ex23 — Point Structure
**File:** `ft_point.h`  
**Purpose:** Defines a data structure for 2D points.  
**Learned:** Struct definition and member organization, typedef usage, header file design, composite data types.  
**Logic:** Defines `t_point` struct containing two integer members (x, y) to represent a single point in 2D space.

### ex24 — Building a Library
**Files:** `Makefile`, source files (`ft_putchar.c`, `ft_putstr.c`, `ft_strcmp.c`, `ft_strlen.c`, `ft_swap.c`)  
**Purpose:** Creates a reusable static library from multiple source files.  
**Learned:** Makefile syntax and rules, compilation process, object file creation, library archiving with `ar`.  
**Logic:** Makefile compiles each .c file to .o object files, then archives them into a .a static library using `ar rcs` command.

### ex25 — Apply Function to Array
**File:** `ft_foreach.c`  
**Purpose:** Applies a callback function to each element of an array.  
**Learned:** Function pointers, callback pattern, higher-order functions, array iteration with dynamic behavior.  
**Logic:** Accepts array, size, and function pointer; loops through array calling the function on each element for flexible processing.

### ex26 — Count Elements with Condition
**File:** `ft_count_if.c`  
**Purpose:** Counts array elements satisfying a custom condition via callback.  
**Learned:** Function pointers for conditional logic, filtering logic, counter patterns, dynamic test functions.  
**Logic:** Iterates array of strings, calling condition function on each; increments counter when function returns non-zero.

### ex27 — Display File Contents
**File:** `ft_display_file.c`  
**Purpose:** Reads and displays the complete contents of a file.  
**Learned:** File I/O operations (open, read, close), error handling, argc validation, buffer management.  
**Logic:** Validates exactly one argument, opens file, reads content in chunks, displays to stdout, handles errors (file not found, permission denied).