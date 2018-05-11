/*
 * DEMO THE USE OF MACROS - USE IT TO COMPARE FIVE NUMBERS
 *	
 * Author: Divyanshu Dhruw
 * Email: divyanshudhruwcsit@gmail.com
 * Date: 11 May 2018
 *
 * @ A very basic program for teaching coding
 * @program prompts for five numbers
 * @returns the greatest of five numbers using a Macro
 */

#include<stdio.h>

#define GREATER(a,b) 	a>b?a:b

int main(void) {
	int i, greater = 0;
	int num[5];
	
	printf("Enter five numbers : \n");

	for( i = 0; i < 5; i++ )
	{
		scanf("%d", &num[i]);
		greater = GREATER( greater, num[i]);
	}

	printf("The greatest number of five is : %d \n", greater);

	return 0;
}
