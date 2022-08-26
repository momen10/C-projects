/*
 * bubble_sort.c
 *
 *  Created on: Aug 8, 2022
 *      Author: Mo'men
 */
#include <stdio.h>
#include <stdbool.h>
void bubble_sort (int * , int );
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

bubble_sort(array,ARRAY_SIZE);

printf("array elements after sorting\n");
for(int i=0 ;i<ARRAY_SIZE ;i++)
{
	printf("%d ",array[i]);
}
fflush(stdout);
return 0;
}


void bubble_sort (int * arr, int size)
{
 bool swapped ;
 do
 {
   swapped =false;               //initial value of swapped, there is still no
	for (int i=0 ; i<size-1;i++) //swapping done
	{
 		if (arr[i]>arr[i+1])     //comparing each element with the next one
		{
			swap_int(&arr[i], &arr[i+1]);
			swapped = true;               //if swapping happened, change it to true
		}
		else
			continue;
	}
 }while(swapped);     //while there is at least one swapping operation happened,
}                 //the array is not completely sorted, if the for loop finishes
          //without doing swapping at least one time, then the array is sorted

void swap_int (int *x ,int *y)
{
	int temp= *x;
	*x=*y;
	*y=temp;
}
