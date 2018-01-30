#include <stack>

struct node {
	char *data;
	struct node *next;
};
typedef struct node Node;

Node *top = NULL;

void push(char *item) {
	Node *p = (Node *)malloc(sizeof(Node));
	p->data = item;
	p->next = top;
	top = p;
}

char *pop() {
	if (is_empty()) { // 좋은 방법은 아니다. NULL을 리턴 할 경우 나중에 문제가 생길 수 있다.
		return NULL;
	}
	char *result = top->data;
	top = top->next;
	// 메모리 할당을 취소해야한다.
	return result;
}

char *peek() {
	if (is_empty()) {
		return NULL;
		return top->data;
	}
}

char is_empty() {
	return top == NULL;
}
