#include "main.h"
/**
 * cap_string - Capitalizes words of a string
 * @str: Capitalize the string
 * Return: A pointer to the changed string
 */
char *cap_string(char *str)
{
	int art = 0;

	while (str[art])
	{
		while (!(str[art] >= 'a' && str[art] <= 'z'))
			art++;

		if (str[art - 1] == ' ' ||
		    str[art - 1] == '\t' ||
		    str[art - 1] == '\n' ||
		    str[art - 1] == ',' ||
		    str[art - 1] == ';' ||
		    str[art - 1] == '.' ||
		    str[art - 1] == '!' ||
		    str[art - 1] == '?' ||
		    str[art - 1] == '"' ||
		    str[art - 1] == '(' ||
		    str[art - 1] == ')' ||
		    str[art - 1] == '{' ||
		    str[art - 1] == '}' ||
		    art == 0)
			str[art] -= 32;
		art++;
	}
	return (str);
}
