#include <stdio.h>
#include <string.h>
#include "stack.h"


char OPEN[] = "[{(";
char CLOSE[] = "]})";

int is_balance(char *expr);
int is_open(char ch);
int is_close(char ch);


int main() {
	char expr[100];
	scanf("%s", expr);
	
	if (is_balance(expr)) {
		printf("Balance.");
	}
	else {
		printf("Unbalance");
	}
}

int is_balance(char *expr) {
	int balanced = 1;
	int index = 0;
	while (balanced &&index < strlen(expr)) {
		char ch = expr[index];
		if (is_open(ch) > -1) {
			pop(ch);
		}
		else if(is_close(ch)>-1){
			if (is_empty()) {
				balanced = 0;
				break;
			}
			char top_ch = pop();
			if (is_open(top_ch) != is_close(ch)) {
				balanced = 0;
			}
		}
		index++;
	}
	return (balanced == 1 && empty() == 1);

}

int is_open(char ch) {
	for (int i = 0; i < strlen(OPEN); i++) {
		if (ch==OPEN[i]) {
			return i;
		}
	}
	return -1;
}
int is_close(char ch) {
	for (int i = 0; i < strlen(CLOSE); i++) {
		if (ch == CLOSE[i]) {
			return i;
		}
	}
	return -1;
}
