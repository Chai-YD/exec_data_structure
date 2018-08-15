/////////////////////////////////////////
//基于链表的队列操作
/////////////////////////////////////////
#include<iostream>
#include<stdio.h>
#include<stdlib.h>
using namespace std;

/////////////////////////////////////////
//编程实现队列的入队与出对操作
/////////////////////////////////////////

typedef struct student{
    int data;
    struct student *next;
}node;

typedef struct linkqueue{
    node *first,*rear;
}queue;

queue* insert(queue *Q,int x){
    if(Q == NULL){
        return NULL;
    }
    node* s;
    s = (node*)malloc(sizeof(node));
    s->data = x;
    s->next = NULL;
    if(Q->rear == NULL){
        //表示队列中没有元素
        Q->rear = s;
        Q->first = s;
    }else{
        Q->rear->next = s;
        Q->rear = s;
    }
    return Q;
}

queue* del(queue *Q){
    if((Q == NULL) || (Q->first == NULL) ){
        return NULL;
    }
    node *cur = Q->first;
    Q->first = Q->first->next;
    free(cur);
    cur = NULL;
    return Q;
}

void print(queue* Q){
    if(Q==NULL || Q->rear ==NULL){
        return;
    }
    //到达此处，说明队列中包含元素
    node *cur = Q->first;
    while(cur!=NULL){
        cout<<cur->data<<endl;
        cur = cur->next;
    }
    return;
}
void Test(){
    queue* Q = (queue*)malloc(sizeof(queue));
    Q = insert(Q,1);
    Q = insert(Q,2);
    Q = insert(Q,3);
    Q = insert(Q,4);
    printf("插入后：\n");
    print(Q);
    del(Q);
    printf("删除后：\n");
    print(Q);
}

//主函数
int main(){
    Test();
    return 0;
}









