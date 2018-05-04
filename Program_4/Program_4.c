/*
 * FIND THE PRIME NUMBERS BETWEEN THE GIVEN RANGE
 *
 * Author: Divyanshu Dhruw
 * Email: divyanshudhruwcsit@gmail.com
 * Date: 04 May 2018
 *
 * @ A very basic program for teaching coding
 * @program prompts for starting number and ending number
 * @returns all the numbers which are prime 
 */

#include<stdio.h>
#include<stdlib.h>

int main(void) {
	int startNum, endNum, i;
	printf("Enter the starting number : ");
	scanf("%d", &startNum);
	printf("Enter the second number : ");
	scanf("%d", &endNum);

	if( endNum <= startNum ) {
		printf("The starting number cannot be more than or equal to the ending number!!");
		exit(0);
	}

	for( i = startNum; i < endNum; i++ ) {
		int j;
		int flag = 1;

		for( j = 2; j < i - 1; j++  )
		{
			if( i%j == 0 )
			{
				flag = 0;
				break;
			}
		}
		if( flag == 1 )
			printf("%d\n", i);
	}

	return 0;
}
