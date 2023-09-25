#include "main.h"
#include <stdlib.h>

int word_len(char *str);
int count_words(char *str);
char **strtow(char *str);

/**
 * word_len - s
 * @str: The string 
 * Return: s
 */
int word_len(char *str)
{
	int in = 0, len = 0;

	while (*(str + in) && *(str + in) != ' ')
	{
		len++;
		in++;
	}

	return (len);
}

/**
 * count_words - Counts the number 
 * @str: str
 * Return: s
 */
int count_words(char *str)
{
	int in = 0, words = 0, len = 0;

	for (in = 0; *(str + in); in++)
		len++;

	for (in = 0; in < len; in++)
	{
		if (*(str + in) != ' ')
		{
			words++;
			in += word_len(str + in);
		}
	}

	return (words);
}

/**
 * strtow - splits a string
 * @str: The string
 * Return: f
 */
char **strtow(char *str)
{
	char **strings;
	int in = 0, words, w, letters, l;

	if (str == NULL || str[0] == '\0')
		return (NULL);

	words = count_words(str);
	if (words == 0)
		return (NULL);

	strings = malloc(sizeof(char *) * (words + 1));
	if (strings == NULL)
		return (NULL);

	for (w = 0; w < words; w++)
	{
		while (str[in] == ' ')
			in++;

		letters = word_len(str + in);

		strings[w] = malloc(sizeof(char) * (letters + 1));

		if (strings[w] == NULL)
		{
			for (; w >= 0; w--)
				free(strings[w]);

			free(strings);
			return (NULL);
		}

		for (l = 0; l < letters; l++)
			strings[w][l] = str[in++];

		strings[w][l] = '\0';
	}
	strings[w] = NULL;

	return (strings);
}
