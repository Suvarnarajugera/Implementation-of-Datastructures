#include<stdio.h>
struct stack{
	int st[100];
	int top = -1;
}stk;
 
/* Insertion --> O(1) */

void push(struct stack &stk,int val){
	if(stk.top == 1000){
		printf("overflow\n");
	return;
	}
	else{
		stk.st[++stk.top] = val;
	}
}
/* Deletion --> O(1) */
void pop(struct stack &stk){
	if(stk.top == -1){
		printf("underflow\n");
		return;
	}
	else{
		stk.top--;
		stk.st[stk.top];
	}
}

/* Printing of values */

void print(struct stack stk){
	while(stk.top != -1){
		if(stk.top != -1){
			printf("%d ",stk.st[stk.top--]);
		}
	}
	printf("\n");
}
int main(){
	push(stk,10);
	push(stk,20);
	push(stk,30);
	push(stk,40);
	print(stk);
	pop(stk);
	print(stk);
	pop(stk);
	print(stk);
}