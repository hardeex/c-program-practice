#include <stdio.h>
#include <math.h>

/**
* main - Entry Point
 * void print_numbers(void): A function that prints number from 0 to 9
 * followed by a new line
 * Return: 0
 */

int main(void)
{                       
        int number;

        for(number = 0; number <=9; number++)
         putchar((number % 10) + '0');
        putchar('\n');

}
                      
