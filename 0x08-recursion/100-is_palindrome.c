#include "main.h"

int check_pal(char *s, int chez, int pro);
int _strlen_recursion(char *s);
/**
 * is_palindrome - Checks if a string is a palindrome
 * @s: a string to reverse
 *
 * Return: 1 if it is and 0 if it is not
 */
int is_palindrome(char *s)
{
	if (*s == 0)
		return (1);
	return (check_pal(s, 0, _strlen_recursion(s)));
}
/**
 * _strlen_recursion - returns the length of a string
 * @s: string to calculate the length of
 *
 * Return: length of the string
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	return (1 + _strlen_recursion(s + 1));

}
/**
 * check_pal - Checks the characters recursively for palindrome
 * @s: string to check
 * @chez: iterator
 * @pro: length of the string
 *
 * Return: 1 if palindrome and 0 if not
 */
int check_pal(char *s, int chez, int pro)
{
	if (*(s + chez) != *(s + pro - 1))
		return (0);
	if (chez >= pro)
		return (1);
	return (check_pal(s, chez + 1, pro - 1));

}
