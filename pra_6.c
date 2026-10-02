/* MADE BY - UJAVAL ASHOK SHARMA
   DDU - IT - F3
   ROLL NO - 131
   DATE - 02/08/2026*/

// This is PSC lab manual's 6th experiment 5th practical//

/* Program: To sorting strings
   Description: This program will take input n strings by user 
		and will sort the given strings in the 
		alphabetical order
*/
#include<stdio.h>
#include<string.h>
int main()
{
	int n;
	// taking number of strings to input strings //
	printf("Enter the number of strings: "); 
	scanf("%d",&n);
	//consuming the newline character left by scanf //
	getchar();
	
	char str[n][100]; // array to store 'n' strings of max length 99 //
	char temp[100]; // temporary variable for swapping //
	// Input strings //
	printf("Enter %d strings: \n",n);
	for(int i=0;i<n;i++)
	{
		fgets(str[i],sizeof(str[i]),stdin); // as i told in previous code i am tired of scanf problems //
		str[i][strcspn(str[i], "\n")] = '\0'; // eliminating new line character //
	}
	// Bubble sort algorithm to sort strings alphabetically //
	for(int i=0;i<n-1;i++)
	{
		for(int j=0;j<n-i;j++)
		{
			// compare adjacent strings //
			if(strcmp(str[j], str[j+1]) >0)
			{
				// swap str[j] and str[j+1]//
				strcpy(temp,str[j]);
				strcpy(str[j],str[j+1]);
				strcpy(str[j+1],temp);
			}
		
		}

	}
	// Display the sorted strings //
	printf("\nStrings in alphabetical order: \n");
	for(int i=0;i<n;i++)
		printf("%s\n",str[i]);

	return 0;
}