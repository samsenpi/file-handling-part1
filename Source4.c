

#define _CRT_SECURE_NO_WARNINGS
#define NULL 0
#include <stdio.h>
int match(char* st) {


	for (int i = 0;i < 5;i++) {



		if (*(st + 3) == 'e' && *(st + 4) == 'd') {
		
			return 1;
		}
		else {
			return 0;
		}

	}


}

int main() {

	char* st[5] ={"hamed","imama","saeed"};

	
		
	printf("the match ");

	for (int i = 0;i < 5;i++) {

		int ans = match(st[i]);

		if (ans==1) {
			printf("%s\n", *(st + i));
		}

	}



	return 0;
}
