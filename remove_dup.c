/*
 * remove_dup.c
 *
 *  Created on: Aug 21, 2022
 *      Author: Dell
 */
#include <stdio.h>
#include <stdbool.h>
#define old_size 6
bool  remove_dup (int * ,int, int * , int*);
int main(void)
{
	int sorted_arr[old_size];
	for (int i= 0 ;i<old_size; i++) //taking sorted array as input
	{
		scanf(" %d",&sorted_arr[i]);
	}

	int new_arr[old_size];
	int new_size =0;

	if(remove_dup(sorted_arr,old_size,&new_size,new_arr))
	{
		for (int i=0;i<new_size; i++)
		{
			printf("%d ",new_arr[i]);
		}
	}
	else
		printf("failed\n");
}

bool remove_dup (int * old_arr ,int OldSize, int * new_size , int* new_arr)
{
  if (OldSize==0)
	  return false;
  else
  {
	  int i=0;
	  for (; i<OldSize-1;i++)     //comparing each element in sorted array
	  {                                  //with its post element if they are different
		  if(old_arr[i]!= old_arr[i+1])  //this element is unique so I'll put it
		  {
			  new_arr[*new_size]=old_arr[i]; //if they are equal it is not unique
			  (*new_size)++;
		  }
	  }
	  new_arr[*new_size]=old_arr[i]; //putting the last element in the new array
	  (*new_size)++;                //after adding the last elemet, increment the size
	  return true;
  }
}
