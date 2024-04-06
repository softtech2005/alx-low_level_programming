#include "main.h"
#include <unistd.h>  /* Include the header file for the write function */

/**
 * _putchar - Writes a character to the standard output
 * @c: The character to print
 *
 * Return: On success, 1. On error, -1.
 */
int _putchar(char c)
{
    return write(1, &c, 1);
}
