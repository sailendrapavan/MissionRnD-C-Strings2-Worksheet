/*
OVERVIEW: Given a string, Count the number of consonants and vowels and copy them to 'consonants' and 'vowels' respectively
Notes : Neglect Space and Other Symbols .Consider Capital Letters too

E.g.: Input: "aB c" , Output: consonants should contain 2 and vowels 1

INPUTS: A string and two int pointers

OUTPUT: Modify the consonants and vowels pointers accordingly with their counts (*consonants=?? ;*vowels=??)

INPUT2: Dont Forget they are pointers ;consonants and vowels are addresses of two variables .

Output: consonants should be ??,vowels should be ??

??:Count them :)

NOTES: Don't create new string , Dont return anything ,you have been given two pointers ,copy values into those .
*/

#include <stddef.h>
#include<stdio.h>
#include<math.h>

void count_vowels_and_consonants(char *str,int *consonants, int *vowels){
	int i = 0, j = 0, k = 0;
	if (str == NULL)
	{
		*consonants = 0;
		*vowels = 0;
	}
	else
	{

		while (str[i] != '\0')
		{
			if (str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u' || str[i] == 'A' || str[i] == 'E' || str[i] == 'I' || str[i] == 'O' || str[i] == 'U')
			{
				j++;
			}
			else if (str[i] == ' ' || str[i] == '.' || str[i] == '?' || (str[i] - '0') >= 0 && (str[i] - '0') <= 9)
			{
			}
			else
			{
				k++;
			}
			i++;
		}
		*consonants = k;
		*vowels = j;
	}
}
