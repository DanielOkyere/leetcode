#include "main.h"

/**
 * checkIsomorphic - checks isomorphic strings
 * checks if two strings are isomorphic
 * @s: first string
 * @t: second string
 * Return: Int
 */
int checkIsomorphic(char *s, char *t)
{
	size_t i = 0;
	char *c1 = malloc(sizeof(char) * 128);
	char *c2 = malloc(sizeof(char) * 128);

	if (s == NULL || t == NULL)
		return (0);

	for (i = 0; i < strlen(s); i++)
	{
		if (c1[s[i]] != c2[t[i]])
		{
			return (0);
		}
		else
		{
			c1[s[i]] = i + 1;
			c2[t[i]] = i + 1;
		}
	}
	return (1);
}

/**
 * main - main function
 * Return: Always true
 *
 */
int main(void)
{
	char *s = "egg";
	char *t = "add";

	printf("%d", checkIsomorphic(s, t));

	return (0);
}
