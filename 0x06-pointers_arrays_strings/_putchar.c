#include "main.h"
#include <unistd.h>

/**
 * _putchar - writes the character red to stdout
 * @red: The character to print
 *
 * Return: On success 1
 * On error -1 is returned and errno is set appropriately
 */
int _putchar(char red)
{
        return (write(1, &red, 1));
}
