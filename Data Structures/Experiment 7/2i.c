#include<stdio.h>
#include<stdlib.h>
#include<string.h>
typedef struct Stack{
    int size, top;
    char *s;
}stack;
void push(stack *st, char data){
    if(st->top == st->size-1)
        printf("Stack Overflown\n");
    else{
        st->top++;
        st->s[st->top] = data;
    }
}

int pop(stack *st){
    int x = -1;
    if(st->top == -1)
        printf("Stack Underflown\n");
    else{
        x = st->s[st->top];
        st->top--;
    }
    return x;
}
int isEmpty(stack st){
    if(st.top == -1)
        return 1;
    else
        return 0;
}
int palindrome(char str[]){
    stack st;
    st.top = -1;
    st.size = strlen(str);
    st.s = (char *)malloc(sizeof(char)*st.size);
    int i=0;
    while(i<strlen(str)/2){
        push(&st, str[i]);
        i++;
    }
    if(strlen(str)&1)
        i++;
    while(str[i]!=0){
        if(str[i]==st.s[st.top])
            pop(&st);
        else
            break;
        i++;
    }
    return isEmpty(st);
}
void main(){
    char str[20];
    printf("Enter a string: ");
    gets(str);
    printf("String: ");
    puts(str);
    if(palindrome(str))
        printf("String you entered is a Palindrome\n");
    else
        printf("String you entered is not a Palindrome\n");
}