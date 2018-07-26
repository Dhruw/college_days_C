/*
 * BUBBLE SORT
 *	
 * Author: Divyanshu Dhruw
 * Email: divyanshudhruwcsit@gmail.com
 * Date: 26 July 2018
 *
 * @ A program to demonstrate the mist basic sorting algorith - Bubble Sort
 * @program prompts for 5 integers
 * @prints the numbers in ascending order
 */

/*
 * THEORY:
 * 
 * The algorithm compares the adjacent numbers and swaps them accordingly
 * 
 * Worst Case Complexity: O(n^2)
 * Average Case Complexity: O(n^2)
 * Best Case Complexith O(n)
 * 
 * It is not a practical sorting algorithm for real life use case
 * 
 */


#include<stdio.h>

int main(void){
	int series[5];
	int temp;

	printf("Enter five numbers: \n");

	for(int i = 0; i < 5; i++)
		scanf("%d", &series[i]);
	
	for(int i = 0; i < 4; i++)
	{
		for(int j = 0; j < 4; j++)
		{
			if( series[j] > series[j+1] )
			{
				temp = series[j];
				series[j] = series[j+1];
				series[j+1] = temp;
			}
		}
	}

	printf("The sorted sequence is : \n");

	for(int i = 0; i < 5; i++)
		printf("%d\n", series[i]);

	return 0;
}