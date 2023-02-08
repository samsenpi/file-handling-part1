#define _CERT_SECURE_NO_WARNINGS

#define SIZE 60

#include<stdio.h>
#include<string.h>

int main()
{
	char sr1[SIZE], sr2[SIZE];

	printf("Enter First string: ");
	gets(sr1);

	printf("\nEnter Second string(to find): ");
	gets(sr2);

	char* searchPtr1 = strstr(sr1, sr2);
	char* searchPtr2 = strstr(searchPtr1 + 1, sr2);


	printf("Remaining String after 1st Occurence = %s", searchPtr1);
	
	printf("\nRemaining String after 2nd Occurence = %s", searchPtr2);
	


	return 0;
}