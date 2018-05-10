/*
 * DEMO THE USE OF MACROS - USE IT TO COMPARE TWO NUMBERS
 *	
 * Author: Divyanshu Dhruw
 * Email: divyanshudhruwcsit@gmail.com
 * Date: 10 May 2018
 *
 * @ A very basic program for teaching coding
 * @program prompts for two numbers
 * @returns the greater of two using a Macro
 */


#include<stdio.h>
#define COMPARO(a,b)	a>b?a:b

int main(void) {
	int num1, num2;
	printf("Enter two numbers :\n");
	scanf("%d", &num1);
	scanf("%d", &num2);
	printf("%d is the greater number\n", COMPARO(num1, num2));

	return 0;
}
