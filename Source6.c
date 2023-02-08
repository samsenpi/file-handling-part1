

#define _CRT_SECURE_NO_WARNINGS
#define NULL 0
#include <stdio.h>
#include <string.h>
#define S 100

void blank(char str[],int b)
{
	
	int count = 0;

	for (int i = 0;i < b;i++)
	{
		if (str[i] == ' ')
		{
			count++;
		}
	
	
	}

	printf(" total blank  are:%d", count);
	printf("\n");

}


void digit(char str[],int b)
{


	int dig[S] = { 0 };
	int count = 0;
	for (int i = 0;i < b;i++)
	{
		if (str[i] >= '0'&& str[i]<='9')
		{
			dig[count] = str[i]-47;
			count++;
		}


	}
	printf(" Digits are:");

	for (int i = 0;i < count;i++) {

		printf(" %d", dig[i]);

	}
	printf("\n");

}


void alpha(char str[], int b)
{


	char ch[S] ;
	int count = 0;
	for (int i = 0;i < b;i++)
	{
		if (str[i] >= 'a' &&  str[i] <= 'z'|| str[i] >= 'A' &&  str[i] <= 'Z')
		{
			ch[count] = str[i];
			count++;
		}


	}
	printf(" letters are:");

	for (int i = 0;i < count;i++) {

		printf(" %c", ch[i]);

	}
	printf("\n");

}

void alumn(char str[],int b)
{


	char ch[S]={0};
	int count = 0;
	for (int i = 0;i < b;i++)
	{
		if (str[i] >= 'a' &&  str[i] <= 'z' || str[i] >= 'A' &&  str[i] <= 'Z'|| str[i] >= '0' &&  str[i] <= '9')
		{
			ch[count] = str[i];
			count++;
		}


	}

	printf(" letters and digit are:%s\n", ch);


}


void lower(char str[], int b)
{


	char ch[S];
	int count = 0;
	for (int i = 0;i < b;i++)
	{
		if (str[i] >= 'a' &&  str[i] <= 'z' )
		{
			ch[count] = str[i];
			count++;
		}


	}
	printf("The lower letters are:");

	for (int i = 0;i < count;i++) {

		printf(":%c", ch[i]);

	}
	printf("\n");

}
void upper(char str[], int b)
{


	char ch[S];
	int count = 0;
	for (int i = 0;i < b;i++)
	{
		if ( str[i] >= 'A' &&  str[i] <= 'Z')
		{
			ch[count] = str[i];
			count++;
		}


	}
	printf("The upper letters are:");

	for (int i = 0;i < count;i++) {

		printf(":%c", ch[i]);

	}
	printf("\n");

}

void islower(char str[], int b)
{

	
	char ch[S];
	int count = 0;
	for (int i = 0;i < b;i++)
	{
		if ( str[i] >= 'A' &&  str[i] <= 'Z')
		{
			ch[count] = str[i]+32;
			count++;
		}


	}

	printf(" convert UPPER to LOWER letters are:");

	for (int i = 0;i < count;i++) {

		printf(" %c", ch[i]);

	}
	printf("\n");

}

void isupper(char str[], int b)
{

	
	char ch[S];
	int count = 0;
	for (int i = 0;i < b;i++)
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			ch[count] = str[i] - 32;
			count++;
		}


	}

	printf(" convert  LOWER to UPPER  letters are:");

	for (int i = 0;i < count;i++) {

		printf(" %c", ch[i]);

	}
	printf("\n");

}

void space(char str[], int b)
{

	//char let[S];
	char ch[S]={0};
	int count = 0;
	for (int i = 0;i < b;i++)
	{
		if (str[i] == ' ' || str[i] == '\n'|| str[i] == '\f'|| str[i] == '\t')
		{
			ch[count] = str[i] ;
			count++;
		}


	}

	printf(" the white space letter are:|");

	for (int i = 0;i < count;i++) {

		printf("  %s, ",ch[i]);

	}
	printf("\n");

}

void punct(char str[], int b)
{

	//int let[S];
	char ch[S];
	int count = 0;
	for (int i = 0;i < b;i++)
	{

		if (str[i] == ';' || str[i] == '#' || str[i] == '$' || str[i] == ':' || str[i] == '.' || str[i] == ',')
		{
			ch[count] = str[i];
			count++;
		}


	}

	printf(" the  letter  that are, puntuation,  are:");

	for (int i = 0;i < count;i++) {

		printf(" %c", ch[i]);

	}
	printf("\n");

}




void graph(char str[], int b)
{


	char ch[S];
	int count = 0;

	//str[i] == 'A' && str[i] == 'Z'|| str[i] == 'A' && str[i] == 'z'
	
	for (int i = 0;i < b;i++)
	{
		if (str[i]!=' ')
		{
			ch[count] = str[i];
			count++;
		}


	}

	printf("The  letters other than space are:");

	for (int i = 0;i < count;i++) {

		printf("%c\n", ch[i]);

	}

}
int main() {


	//initailizing of string

	char str[S];

	int a = 0;;

	

	printf("enter a string:");
	fgets(str, S, stdin);
	
	int s = strlen(str);

	blank(str, s);


	digit(str, s);

	alpha(str, s);

	alumn(str, s);


	lower(str, s);


	upper(str, s);


	islower(str, s);


	isupper(str, s);


	space(str, s);


	punct(str, s);


	graph(str, s);


	return 0;
}
 