

#define _CRT_SECURE_NO_WARNINGS
#define NULL 0
#include <stdio.h>
#include <string.h>

void *scpyWithpointer( char *s2, const char* s1,int a,char* st2,char*st,int c) {


	for (int i = 0;i < a;i++) {

		*(s2 + i) = *(s1 + i);
	}


	for (int i = 0;i < c;i++) {

		*(st2 + i) = *(st + i);
	}

	printf("\nstring copy with pointers:%s", s2);

	printf("\nstring 2 copy with pointers:%s", st2);

}

void scpyWithArray(char s2[], const char s1[], int a,char st2[],char st[],int c) {


	for (int i = 0;i < a;i++) {

		s2[i] = s1[i];
	}

	for (int i = 0;i < c;i++) {

		st2[i] = st[i];
	}



	printf(" \nstring 1 copy with array:%s", s2);

	printf(" \nstring 2 copy with array:%s", st2);

}
void concatWithPointer(char *s1,char*st,int b,int c,char *new) {
	int a=0 ;
	for (int i = 0;i < b;i++) {
		
		*(new + i) = *(s1 + i);
		a++;
	
	}
	int k=0;
	for (int j = a;st[k] !='\0';j++) {

		*(new + j) = *(st + k);
		k++;
	}st[k] != '\0';
	printf("\n cocatination with pointer:%s",new);
}

void concatWitharray(char s1[], char st[], int b, int c, char new[]) {
	int a = 0;
	for (int i = 0;i < b;i++) {

		new[i] = s1[i];
		a++;

	}
	int k = 0;
	for (int j = a;st[k] != '\0';j++) {


		new[j] = st[k];
		k++;
	}st[k] != '\0';
	printf("\n cocatination with array:%s", new);
}
int main() {


	//initailizing of string

	char s1[100] = { "good"};
	char st[100] = { "mornings" };
	char s2[100]={0};
	char st2[100] = {0};
	char new[200] = { 0 };


	//to check the lenght of string

	int b = strlen(s1);
	int c = strlen(st);

	//function call

	 scpyWithpointer(s2, s1,b,st2,st,c);


	 scpyWithArray(s2, s1, b,st2,st,b);

	 concatWithPointer(s1, st, b, c, new);

	 concatWitharray(s1, st, b, c, new);
	return 0;
}
