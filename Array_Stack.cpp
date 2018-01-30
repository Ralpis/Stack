
#include <stack>
#define MAX_CAPACITY 100

char stack[MAX_CAPACITY];
int top = -1;  // top 은 취향에따라 0으로 설정하기도 함

void push(char ch) {
	if (is_full()) {
		return;
	}
	top++;
	stack[top] = ch;
}

char pop() {
	if (is_empty()) {
		char tmp = stack[top];
		top--;
		return tmp;
	}
	else {
		return;
	}
	
}

char peek() {
	return stack[top];
}

int is_empty() {
	return top == 1;
}

int is_full() {
	return top == MAX_CAPACITY - 1;
}
