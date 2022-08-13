/*
 * 2nd_max.c
 *
 *  Created on: Aug 13, 2022
 *      Author: Mo'men
 */
#include <stdio.h>
#include <limits.h>     //including limits library to use "INT_MIN"
#define arr_size 5
int sec_max (int * , int size);

int main(void)
{
 int array[arr_size];

 for(int i=0 ;i<arr_size ;i++)    //taking the array as input from user
 {
	 scanf("%d",&array[i]);
 }

 printf("the second max number of array is %d \n",sec_max(array,arr_size));
}

int sec_max (int * arr ,int size)
{
	int max_index=0 , sec_max=0 ;  //initializing the maximum index to first place;
	int max_number;

	for (int i=1 ;i<size ;i++)     //loop for getting the maximum index
	{
      if (arr[i]>arr[max_index])
    	  max_index=i;
	}

	max_number=arr[max_index];    //saving the maximum number in a variable
	printf("the max number is %d \n",max_number);

	arr[max_index]=INT_MIN;     //changing the maximum number to be the minimum
	                              // possible integer number

	for (int i=1 ;i<size ;i++) // repeating the same loop so that I get the second
		                       //maximum number
	{
      if (arr[i]>arr[sec_max] && arr[i]!= max_number) //this condition handles the case
    	                                              //of repeating the maximum number
    	  sec_max=i;
	}
	return arr[sec_max];
}
