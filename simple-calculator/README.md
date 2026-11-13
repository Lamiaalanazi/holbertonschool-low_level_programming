# Simple Calculator

A C program that displays a calculator menu and exits when the user selects 0.

## Compile
gcc -Wall -Werror -Wextra -pedantic -std=gnu89 calculator.c -o calculator

## Run
./calculator

## Menu
1. Add
2. Subtract
3. Multiply
4. Divide
0. Quit

## Numeric behavior
The menu choice is read as an integer. This skeleton does not read operands yet.

## Known limitations
The menu is displayed, but the arithmetic operations are not implemented yet.
