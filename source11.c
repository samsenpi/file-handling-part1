#define _CERT_SECURE_NO_WARNINGS

#define SIZE 60

#include<stdio.h>
#include<string.h>

int main()
{
	char arr1[SIZE], arr2[SIZE];

	printf("Enter First string: ");
	gets(arr1);

	printf("\nEnter Second string(to find): ");
	gets(arr2);

	char* searchPtr1 = strstr(arr1, arr2);
	char* searchPtr2 = strstr(searchPtr1 + 1, arr2);
	//char* searchPtr3 = strstr(searchPtr2 + 1, arr2);

	printf("Remaining String after 1st Occurence = %s", searchPtr1);
	printf("\nRemaining String after 2nd Occurence = %s", searchPtr2);
	//printf("\nRemaining String after 3rd Occurence = %s", searchPtr3);



	return 0;
}