/*

Problem : Return the Last word in a string

Input : I will do this without using String Library
Output : Library

Note:Dont modify original string Neglect Spaces at the right end and at left end if required .
->Create a new string and return it , Use dynamic memory allocation .
*/
#include <stdlib.h>

char * get_last_word(char * str){
	int  i = 0, j = 0;
	char *p = (char*)malloc(sizeof(str));
		while (str[i] != '\0')
		{
			if (str[i] == ' ')
			{
				j = i;
			}
			i++;
		}

		if (j == 0)
		{
			p = str;
		}
		else
		{
			p = &str[j + 1];
			return p;
		}
}
