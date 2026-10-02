/* MADE BY - UJAVAL ASHOK SHARMA
   DDU - IT - F3
   ROLL NO - 131
   DATE - 02/08/2026*/

// This is PSC lab manual's 6th experiment 5th practical//

/* Program: To reverse a string
   Description: This program will take a input string by user 
		and will reverse the given string
*/
#include<stdio.h>
#include<string.h>
int main()
{
	char str[100],rev[100];
	int i,len;

	printf("Enter a string: "); // Taking input string //
	fgets(str,sizeof(str),stdin); // input string i am taking in fgets cause scanf is bringing new problems for me if you know very it very well so you can use it //
	str[strcspn(str,"\n")] = '\0'; // in this line i am eliminating new line character in reversing //

	len = 0;
	while(str[len] !='\0') // calculating length of string //
	{
		len++;
	}

	for(i=0;i<len;i++)
		rev[i] = str[len-1-i]; // saving string's characters into reverse string's characters by reversing them and eliminating null character //

	rev[len] = '\0'; // addinng null character in reversed string at end //

	printf("Reversed string: %s",rev);
		
	return 0;
}