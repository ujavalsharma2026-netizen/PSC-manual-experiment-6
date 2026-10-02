/* MADE BY - UJAVAL ASHOK SHARMA
   DDU - IT - F3
   ROLL NO - 131
   DATE - 02/08/2026*/

// This is PSC lab manual's 6th experiment 2nd practical//

/* Program: To convert upper-case letters into lower-case and 
	    lower-case letters into upper-case and to count the
	    number of characters
   Description: This program will get a string from user and it 
		will find lower case letters and will turn them
		into upper case letters and it will convert upper
		case letters into lower case letters and will count 
		the number of characters
*/

#include<stdio.h>
#include<ctype.h>

int main()
{
	char str[100];
	int count = 0;
	printf("Enter a string: ");
	fgets(str,sizeof(str),stdin);
	
	for(int i=0;str[i] != '\0';i++)
	{
		if(str[i] >= 'A' && str[i] <= 'Z')
			str[i] = tolower(str[i]); // I've not calculated anything i just used 'tolower()' function for upper-case letters //

		else if(str[i] >= 'a' && str[i] <= 'z')
			str[i] = toupper(str[i]); // I've not calculated anything i just used 'toupper()' function for lower-case letters //

		count++; // it is for counting characters //
	}
	puts("\nModified string: ");
	puts(str); // i've used 'puts()' function instead of 'printf()' you can use any //

	printf("\nTotal number of characters: %d\n",count);

	return 0;
}