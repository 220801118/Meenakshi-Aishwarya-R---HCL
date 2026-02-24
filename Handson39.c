#include <stdio.h>
#include <string.h>

#define MAX 100

struct Stack {
    char arr[MAX];
    int top;
};

void initStack(struct Stack *s) {
    s->top=-1;
}

int isEmpty(struct Stack *s) {
    return s->top==-1;
}

void push(struct Stack *s, char ch) {
    if (s->top<MAX-1) {
        s->arr[++s->top]=ch;
    }
}

char pop(struct Stack *s) {
    if (!isEmpty(s)) {
        return s->arr[s->top--];
    }
    return '\0';
}

int isMatchingPair(char open, char close) {
    if (open == '(' && close == ')') return 1;
    if (open == '{' && close == '}') return 1;
    if (open == '[' && close == ']') return 1;
    return 0;
}

int areBracketsBalanced(char expr[]) {
    struct Stack s;
    initStack(&s);

    for (int i=0; expr[i]!='\0'; i++) {
        char ch=expr[i];

        if (ch=='(' || ch=='{' || ch=='[') {
            push(&s, ch);
        }
        else if (ch==')' || ch=='}' || ch==']') {
            if (isEmpty(&s)) {
                return 0;
            }

            char topChar=pop(&s);

            if (!isMatchingPair(topChar, ch)) {
                return 0;
            }
        }
    }

    return isEmpty(&s);
}

int main() {
    char expr[MAX];

    printf("Enter an expression: ");
    scanf("%s", expr);

    if (areBracketsBalanced(expr)) {
        printf("The expression has BALANCED brackets.\n");
    } else {
        printf("The expression has NOT BALANCED brackets.\n");
    }

    return 0;
}