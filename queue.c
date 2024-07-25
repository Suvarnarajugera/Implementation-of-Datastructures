#include<stdio.h>
struct queue{
    int front = -1;
    int rear = -1;
    int q[100];
}qu;

/*   Insertion */
void push(struct queue &qu,int val){
    if(qu.rear == 100){
        printf("overflow\n");
    }
    else if(qu.rear == -1 && qu.front == -1){
        qu.rear++;
        qu.front++;
        qu.q[qu.rear] = val;

    }
    else{
        qu.rear++;
        qu.q[qu.rear] = val;
    }
}


/* Deletion */

void pop(struct queue &qu){
    if(qu.front == qu.rear){
        qu.front = -1;
        qu.rear = -1;
        printf("underflow\n");
    }
    else{
        printf("popped element %d\n",qu.q[qu.front]);
        qu.front++;
    }
}
/* printing */

void print(struct queue qu){
    if(qu.front > qu.rear || (qu.front == -1 && qu.rear == -1)){
        printf("Queue is Empty\n");
        return;
    }
    for(int i=qu.front; i<=qu.rear; i++){
        printf("%d ",qu.q[i]);
    }
    printf("\n");

}
int main(){
    print(qu);
    push(qu,10);
    push(qu,20);
    print(qu);
    pop(qu);
    print(qu);
}