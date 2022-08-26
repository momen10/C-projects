/*
 ============================================================================
 Name        : freq_of_chars.c
 Author      : Mo'men
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#define max_size 255   //maximum number of characters
void freq_of_chars (char * st);

int main(void)
{
	char str[max_size];
	gets(str);            //taking the string as input
	freq_of_chars(str);   //array containing frequency of each character

}

void freq_of_chars (char * st)
{
	int freq[max_size] ={0};    //initializing all counters to zeroes

	for (int i=0;st[i]!='\0';i++)
	{
		freq[st[i]]++;      //the character whose ascii value is st[i]
		                    //its order in the array will increment by one
	}

	for (int i=0; i<max_size; i++)
	{
		if(freq[i]!=0)
			printf("frequency of character %c is %d \n",i,freq[i]);
	}

}
