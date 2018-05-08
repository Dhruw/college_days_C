/*
 * FIND IF THREE NUMBERS ARE PYTHAGOREAN TRIPLETS OR NOT
 *	
 * Author: Divyanshu Dhruw
 * Email: divyanshudhruwcsit@gmail.com
 * Date: 08 May 2018
 *
 * @ A very basic program for teaching coding
 * @program prompts for three numbers
 * @returns response if the numbers are pythagorean or not
 *
 */

#include<stdio.h>

int main(void){
	int a=0, b=0, c=0;
	printf("Enter three numbers:\n");
	scanf("%d",&a);
	scanf("%d",&b);
	scanf("%d",&c);

	if( a*a == b*b + c*c || b*b == a*a + c*c || c*c == a*a + b*b )
		printf("These numbers are Pythagorean triplets\n");
	else
		printf("Not pythagorean triplets\n");
	return 0;
}
