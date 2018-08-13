/////////////////////////////////////
//基于链表的栈操作
/////////////////////////////////////
#include<iostream>
#include<stdio.h>
#include<stdlib.h>
using namespace std;

/////////////////////////////////////
//编程实现栈的入栈与出栈操作
/////////////////////////////////////
typedef struct student{
    int data;
    struct student* next;
}node;
typedef struct stackqueue{
    node *zhandi,*top;
}queue;

queue* Push(queue* Q,int x){
    if(Q == NULL){
        return NULL;
    }
    node *s = (node*)malloc(sizeof(node));
    s->data = x;
    s->next = NULL;
    if(Q->top == NULL){
        Q->top = s;
        Q->zhandi = s;
    }else{
        Q->top->next = s;
        Q->top = s;
    }
    return Q;
}

queue* Pop(queue* Q){
    if(Q == NULL){
        return NULL;
    }
    if(Q->zhandi == NULL){
        //表示没有元素 
        return Q;
    }else{
        node* p = Q->zhandi;
        if(Q->zhandi == Q->top){
            Q->zhandi = NULL;
            Q->top = NULL;
        }
        while(p->next != Q->top){
            p = p->next;
        }
        p->next = NULL;
        free(Q->top);
        Q->top = p;
    }
    return Q;
}

void print(queue* Q){
    if(Q == NULL){
        return;
    }
    node* cur = Q->zhandi;
    while(cur!= NULL){
        cout<<cur->data<<endl;
        cur = cur->next;
    }
}
void Test(){
    queue* Q = (queue*)malloc(sizeof(queue));
    Q = Push(Q,1);
    Q = Push(Q,2);
    Q = Push(Q,3);
    Q = Push(Q,4);
    printf("出栈前\n");
    print(Q);
    cout<<"出栈后\n"<<endl;
    Pop(Q);
    print(Q);
    return;
}

int main(){
    Test();
    return 0;
}
