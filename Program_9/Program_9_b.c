/*
 * SUM OF FIRST N EVEN NUMBERS USING RECURSION
 *	
 * Author: Divyanshu Dhruw
 * Email: divyanshudhruwcsit@gmail.com
 * Date: 25 July 2018
 *
 * @ A very basic program for teaching coding
 * @program prompts for the number of event numbers to be added
 * @returns the sum of first n even numbers
 */

#include<stdio.h>

int summation(int n){
	if( n > 0 )
		return n * 2 + summation( n -1 );
	else
		return 0;
}

int main(void) {
	int n;
	printf("Enter the count of event numbers to be added : ");
	scanf("%d", &n);

	printf("The sum of first %d even numbers is %d\n", n, summation(n-1));
	return 0;
}