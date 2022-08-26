/*
 * selection_sort.c
 *
 *  Created on: Aug 8, 2022
 *      Author: Dell
 */
#include <stdio.h>
#include <stdbool.h>
void selection_sort (int * , int );
void swap_int (int * ,int *);
#define ARRAY_SIZE 10

int main(void)
{
int array[ARRAY_SIZE]={10,9,8,7,6,5, 4,3,2,1};

printf("array elements before sorting\n");
for(int i=0 ;i<ARRAY_SIZE ;i++)
{
	printf("%d ",array[i]);
}
printf("\n");
fflush(stdout);

selection_sort(array,ARRAY_SIZE);

printf("array elements after sorting\n");
for(int i=0 ;i<ARRAY_SIZE ;i++)
{
	printf("%d ",array[i]);
}
fflush(stdout);
return 0;
}

void selection_sort (int *arr , int size )
{
	int index_min ;
	for (int i=0; i<size ;i++)
	{
		index_min = i;              //initializing the minimum index to be i'th element
		for(int j=i+1; j<size; j++)//comparing all the following elements with the i th one
		{
		  if(arr[j]<arr[i])
			  index_min = j;
		  else
			  continue;
		}                //after this loop, I return with the least element relative to the ith one
		swap_int(&arr[i] ,&arr[index_min]);
	}  //swapping this least element with the ith element
    //then incrementing i and repeating the same algorithm
}


void swap_int (int *x ,int *y)
{
	int temp= *x;
	*x=*y;
	*y=temp;
}
