# Printf project


------------




### Background Context: 
Write your own printf function.


![](https://s3.amazonaws.com/intranet-projects-files/holbertonschool-low_level_programming/228/printf.png)


In this picture, [Kris](https://twitter.com/krisbredemeier "Kris"), and [Jul](https://twitter.com/cyrjulien "Jul")

------------


## Presentation
**Creating our printf function that produces output according to a format:**
- This work was guided and proposed by Holberton School
- This repository is created during our academic process, you will probably find things to improve, our intention is to contribute to the academic growth of software development for many people, if you have any concerns, do not hesitate to write to our emails
- Here we apply what we learned during the academic process in C language with the printf function
- This project is run by students from Holberton School
## Definition
**C standard output (printf(), puts() and putchar())**:

![](https://ars.els-cdn.com/content/image/3-s2.0-B9780340700143500475-u02-06-9780340700143.jpg)

(*https://ars.els-cdn.com/content/image/3-s2.0-B9780340700143500475-u02-06-9780340700143.jpg*)


The printf() function sends a formatted string to the standard output (the display). This string can display formatted variables and special control characters, such as new lines (‘\n’), backspaces (‘\b’) and tabspaces (‘\t’), its roots are in the C programming language.
the parameters passed to printf() we know as arguments and we recognize them with separated commas. Statements are named as message strings and is always the first argument to printff(). It can also have special control characters and/or parameter conversion control characters.(*William J. Buchanan BSc, CEng, PhD , en desarrollo de software para ingenieros , 1997*)


## Main conversion control characters
|operator|format|operator|format|
| ------------ | ------------ | ------------ | ------------ |
| %c | single character | %i | print same as "d", integer in base 10 |
| %r  | Prints a string in reverse  | %b | Convert an unsigned number to binary |
| %d  | signed decimal integer | %s | string of characters |


## Example Use

**Simple program where we use %d, %i, %c and %s:**

![](https://i.ibb.co/tXRP9tY/forredm.png)

**The result on the screen is:**

![](https://i.ibb.co/Wf9dgv6/forredm1.png)

**Simple program where we use %b ():**

![](https://i.ibb.co/hskbMLW/Sbinry1.png)

**The result on the screen is:**

![](https://i.ibb.co/wBMpcMs/Sbinry.png)

## Prototype
This _printf function produces output according to a format:

`int _printf(const char *format, ...);`

## Compilation
To compile a file that contains the printf() function, we must include all the .c files involved with the program as functions, main and others. In the following way:

`gcc -Wall -Werror -Wextra -pedantic *.c -o name_of_executable`

to execute:  `./name_of_executable`

## Files Description

| file  | description  |
| ------------ | ------------ |
|_printf.c   | Contain the main function of the _printf  |
| Map.jpg  | Contain the printf project flowchart  |
| _putchar.c  | Contains the function that allows directing the output to the terminal  |
|  digits.c | Contains the function that print a decimal integer, the function that prints an integer, and the function that converts an unsigned number to binary  |
| letters.c  | Contains the function that prints a character, the function that prints a string, and the function that prints a string backwards  |
| main.h  |  Contain the struct and prototypes to the _printf function |
| man_3_printf  |  Contain the man page of the _printf function with all its specifications |


## _printf By
- [Manuela Espinosa](https://github.com/Canel420/ "Manuela Espinosa") - 4521@holbertonschool.com
- [Eduardo Zúñiga ](https://github.com/edwardzuniga/ "Eduardo Zúñiga ") - 4593@holbertonschool.com