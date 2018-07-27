/*
 * FIND THE LONGEST STRING
 *	
 * Author: Divyanshu Dhruw
 * Email: divyanshudhruwcsit@gmail.com
 * Date: 26 July 2018
 *
 * @ A program to find out the longest string 
 * @program prompts for 5 names
 * @prints the longest name from the input
 */

/*
 * Theory:
 * 
 * String in C is just an array of Characters
 * 
 * Common string functions in C  --> With work with string.h:
 * 
 * strlen()
 * strcpy()
 * strcat()
 * strcmp()
 * strlwr()
 * strupr()
 * 
 * I/O methods:
 * 
 * gets()
 * puts()
 * 
 * getc()
 * putc()
 * 																																																						
 */

#include<stdio.h>
#include<string.h>

int main(void) {
	char names[5][20];
	int maxIndex = 0, maxLength = 0;
	
	printf("Enter five names : \n");

	for(int i = 0; i < 5; i++)
	{
		scanf("%s", names[i]);
		if( strlen(names[i]) > maxLength ) 
		{
			maxLength = strlen(names[i]);
			maxIndex = i;
		}

	}

	printf("The longest name is %s with length %d\n", names[maxIndex], maxLength);

	return 0;
}