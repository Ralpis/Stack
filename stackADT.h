#ifndef STACKADT_H
#define STACKADT_H

#include <stdbool.h> // C99 only

typedef int Item; // 재사용을 위해 int 를 Item으로 변경함 

typedef struct stack_type *Stack; // struct stack_type * 이다.


Stack create();
void destroy(Stack s);
void make_empty(Stack s);
bool is_empty(Stack s);
void push(Stack s, Item i);
Item pop(Stack s);
Item peek(Stack s);

#endif
