#include "main.h"
#include <stdio.h>

/**
 * wildcmp - check the code for main School students.
 * @s1: string
 * @s2: string
 * Return: Always 0.
 */

int wildcmp(char *s1, char *s2)
{
return (checker(s1, s2, 0, 0, -1));
}

/**
 * checkLast - check last char of s2 when s1 ends
 * @s: string
 * @i: int
 * Return: 0 or 1
 */
int checkLast(char *s, int i)
{
if (s[i] == '*')
	return (checkLast(s, i + 1));
else if (s[i] == '\0')
	return (1);

return (0);

}
/**
 * checker - helper
 * @s1: string
 * @s2: string
 * @a: int
 * @b: int
 * @wildUsed: int
 * Return: Always 0.
 */
int checker(char *s1, char *s2, int a, int b, int wildUsed)
{

if (s1[a] != '\0')
{
	if (s2[b] == '\0')
		return (0);
	else if (s2[b] == '*')
	{
		if (s2[b + 1] == '*')
			return (checker(s1, s2, a, b + 1, b));
		else if (s2[b + 1] == s1[a])
			return (checker(s1, s2, a, b + 1, b));
		else if (s1[a + 1] != s2[b + 1])
			return (checker(s1, s2, a + 1, b, b));
		else if (s1[a + 1] == s2[b + 1])
			return (checker(s1, s2, a + 1, b + 1, b));
	}
	else i#include "holberton.h"

/**
 * wildcmp - Compare strings
 * @s1: pointer to string params
 * @s2: pointer to string params
 * Return: 0
 */

int wildcmp(char *s1, char *s2)
{
	if (*s1 == '\0')
	{
		if (*s2 != '\0' && *s2 == '*')
		{
			return (wildcmp(s1, s2 + 1));
		}
		return (*s2 == '\0');
	}

	if (*s2 == '*')
	{
		return (wildcmp(s1 + 1, s2) || wildcmp(s1, s2 + 1));
	}
	else if (*s1 == *s2)
	{
		return (wildcmp(s1 + 1, s2 + 1));
	}
	return (0);
}
