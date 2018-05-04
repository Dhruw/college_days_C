/*
 * FIND SUM OF A NUMBER
 *
 * Author: Divyanshu Dhruw
 * Email: divyanshudhruwcsit@gmail.com
 * Date: 04 May 2018
 *
 * @ A very basic program for teaching coding
 * @program prompts for a number
 * @returns the sum of all digits of the supplied number
 */

#include<stdio.h>

int main(){
	int num = 0, sum = 0, tempNum = 0;
	printf("Enter a 5 digit number : ");
	scanf("%d", &num);

	while( num > 0 ) {
		tempNum = num % 10;
		sum += tempNum;
		num = num / 10;
	}

	printf("The sum of all digits is : %d\n", sum);

	return 0;
}
