///////////////////////////////////////////
//双链表的操作
///////////////////////////////////////////
#include<iostream>
#include<stdio.h>
#include<stdlib.h>
using namespace std;
///////////////////////////////////////////
//编程实现双链表的建立
///////////////////////////////////////////
typedef struct student{
    int data;
    struct student *next;
    struct student *prev;
}node;

node* creat(){
    int x;
    node* head = (node*)malloc(sizeof(node));
    head->next = head;
    head->prev = head;
    while(1){
        node* cur = head->prev;
        cout<<"please input the data"<<endl;
        cin>>x;
        if(x == 0){
            break;
        }
        node* s;
        s = (node*)malloc(sizeof(node));
        s->data = x;
        s->next = head;
        head->prev = s;
        cur->next = s;
        s->prev = cur;
    }
    return head;
}

void print(node* head){
    if(head->next == NULL){
        return;
    }
    int i = 0;
    node *cur = head->next;
    while(cur != head){
        cout<<i<<"->"<<cur->data<<endl;
        cur = cur->next;
        i++;
    }
    return;
}
void Test1(){
    node* head = creat();
    print(head);
    return;
}
//////////////////////////////////////////
//编程 实现双链表的插入与删除结点
//////////////////////////////////////////
node*  del(node* head,int  num){
    if((head == NULL) || (head->next == NULL)){
        return NULL;
    }
    node *cur = head->next;
    while((cur!= head) &&( cur->data != num)){
       cur = cur->next; 
    }
    if(cur->data == num){
        node *prev = cur->prev;
        prev->next = cur->next;
        free(cur);
        cur = NULL;
    }
    return head;
}

node* insert(node *head,int num){
    if(head == NULL){
        return NULL;
    }
    //采用头插的方式完成双向链表元素的插入
    node* s = (node*)malloc(sizeof(node));
    s->data = num;
    node* next = head->next;
    head->next = s;
    s->prev = head;
    s->next = next;
    next->prev = s;
    return head;
}

void Test2(){
    node* head = creat();
    cout<<"插入前"<<endl;
    print(head);
    head = insert(head,9);
    cout<<"插入后"<<endl;
    print(head);
    cout<<"删除前"<<endl;
    print(head);
    head = del(head,1);
    cout<<"删除后"<<endl;
    print(head);
}
//主函数
int main(){
//    Test1();
    Test2();
    return 0;
}
