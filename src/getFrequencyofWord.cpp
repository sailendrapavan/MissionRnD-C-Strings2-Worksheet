/*

Problem : Return the Count of how many times the word occurred in given string in two ways
Way1: Not using Recursion
Way2:Using Recursion [Optional]

Input : "Hello HelloAgain HelloAGAINAGAIN commonItsHelloagain","Hello"
Output : 4

Note: Dont modify original str or word,Just return count ,Spaces can also be part of words like "ab cd" in "ab cd ab cd" returns 2
*/

#include <stdlib.h>

int count_word_in_str_way_1(char *str, char *word){
	int i = 0,c=0,j=0,len=0,p=0;
	while (word[c] != '\0')
	{
		c++;
	}
	while (str[i] != '\0')
	{
		j = 0;
		while (word[j]!='\0')
		{
			if (str[i] == word[j])
			{
				len++;
			}
			j++;
		}
		if (len == c)
		{
			p++;
		}
		i++;
	}
	return p;
}

int count_word_int_str_way_2_recursion(char *str, char *word){
	int i = 0, c = 0, j = 0, len = 0, p = 0;
	while (word[c] != '\0')
	{
		c++;
	}
	while (str[i] != '\0')
	{
		j = 0;
		while (word[j] != '\0')
		{
			if (str[i] == word[j])
			{
				len++;
			}
			j++;
		}
		if (len == c)
		{
			p++;
		}
		i++;
	}
	return p;
}

