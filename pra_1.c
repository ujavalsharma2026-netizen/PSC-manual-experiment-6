/* MADE BY - UJAVAL ASHOK SHARMA
   DDU - IT - F3
   ROLL NO - 131
   DATE - 02/08/2026*/

// This is PSC lab manual's 6th experiment 1st practical//

/* Program: To check two strings are same or not
   Description: user will enter two strings and code will
		check whether these two strings are same 
		or not without using 'strcmp()' function
*/
#include<stdio.h>
int main()
{
	char str1[100],str2[100];
	int i=0,flag=0;

/* here i've used 'fgets()' function insted of 'gets()' function 
   because it was always safer to use 'fgets()' function and 'gets()'
    function give me a warning
*/

	printf("Enter first string: "); // User will enter 1st string //
	fgets(str1, sizeof(str1), stdin); // 'fgets()' function needs these arguements //

	printf("Enter second string: "); // User will enter 2nd string //
	fgets(str2, sizeof(str2),stdin); // 'fgets()' function needs these arguements //

	/* For loop used below will stop when str1[]
	   and str2[] both get their null character */

	for(i=0;str1[i] != '\0' || str2[i] != '\0';i++) 
	{
		if (str1[i] != str2[i]) // If condition will check if the characters in both strings are different or not //
		{
			flag = 1; // As soon as it will find a character different in both string flag will be changed to 1 //
			break;
		}
	}
 
	if(flag == 0) // If the flag remains 0 it means no character is different in both strings //
		printf("Given strings are same\n");

	else // If the flag is changed it means some characters are different in both strings //
		printf("Given strings are not same\n");

	return 0;
}