
#define _CRT_SECURE_NO_WARNINGS
#define NULL 0
#include <stdio.h>


void stringtono(char st[]) {


	int num[20] = { 0 };

	int j = 0;
	int i = 0;
	for (j = 0;st[j] != '\0';j++) {

		if (st[j] >= '0' && st[j] <= '9') {

			printf("%d\n", st[j]);
		}else if(st[i]>='a'||st[i]<='z') {
		
			printf("%d\n", st[j]);

		
		}
		else if (st[i] >= 'A' || st[i] <= 'Z') {

			printf("%d\n", st[j]);


		}
	}

	for (int j = 0;j < i;j++)
	{
		printf("the digit in the string are:%d", num[j]);


	}
}




int main() {

	char st[20];



	printf("enter a string:");
	gets(st);


	stringtono(st);



	return 0;
}
