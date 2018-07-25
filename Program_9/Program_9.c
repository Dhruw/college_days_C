/*
 * SUM OF FIRST N EVEN NUMBERS
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

int main(void) {
	int n,i, sum = 0;
	printf("Enter the quantity of even numbers which need to be added : ");
	scanf("%d", &n);
	for( i = 0; i < n; i++ )
		sum+= (i*2);
	printf("The sum of %d even numbers is %d\n", n, sum);
	return 0;
}