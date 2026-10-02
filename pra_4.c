/* MADE BY - UJAVAL ASHOK SHARMA
   DDU - IT - F3
   ROLL NO - 131
   DATE - 02/08/2026*/

// This is PSC lab manual's 6th experiment 4th practical//

/* Program: To check if the entered string is palindrome or not
   Description: This program will take a input string by user 
		and will compare it's 1st character with last 
		character , 2nd character with 2nd last char.
		and so on.. and will report if the string is 
		palindrome or not
*/

#include<stdio.h>
#include<string.h>
int main()
{
	char str[100];
	int i,len,is_palindrome = 1;

	printf("Enter a string: ");
	scanf("%s",str);

	len = strlen(str); // finding length of string //

	for(i=0;i < len/2;i++)
	{
		if(str[i] != str[len-1-i]) // comparing 1st char to last char but -1 is for eliminating null char //
		{
			is_palindrome = 0; 
			break;
		}
	}	

	if(is_palindrome==1)
		printf("\nGiven string is palindrome\n");

	else
		printf("\nGiven string is not palindrome\n");
	return 0;
}