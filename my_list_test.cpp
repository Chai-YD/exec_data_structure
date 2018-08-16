//////////////////////////////////////
//编程实现一个链表的建立、测长、打印
//////////////////////////////////////

#include<iostream>
#include<stdio.h>
#include<unistd.h>
#include<stdlib.h>
using namespace std;

//结点结构体
typedef struct student{
    int data;
    struct student *next;
}node;
//链表的创建
node* creat(){  //使用尾插进行链表的创建
    node* head,*p;
    head = (node*)malloc(sizeof(node));
    p = head;
    int x;
    while(1){
        printf("\nplease input the date\n");
        scanf("%d",&x);
        if(x != 0){
            node* tmp;
            tmp = (node*)malloc(sizeof(node));
            tmp->data = x;
            p->next = tmp;
            p = tmp;
        }else{
            break;
        }
    }
    return head;
}
//单链表测长
int length(node* head){
     int n = 0;
     node* p = head;
     while(p != NULL){
         ++n;
         p = p->next;
     }
     return n;
}
//单链表打印
void print(node* head){
    int i = 0;
    node* p = head->next;
    while(p!= NULL){
        printf("%d->%d\n",i,p->data);
        i++;
        p = p->next;
    }
    return;
}

void Test1(){
    node *head = creat();
    int ret = length(head);
    cout<<ret<<endl;
    print(head);
    return;
}
///////////////////////////////////////////////
//编程实现单链表删除结点
///////////////////////////////////////////////

node* del(node* head,int num){
    node* cur = head;
    node *before;
    while((cur->data!=num) &&(cur->next!=NULL)){
        before = cur;
        cur = cur ->next;
    }
    if(cur->data == num){
        if(cur != head){
            before->next = cur->next;
        }else{
            head = cur->next;
        }
        //释放空间，防止内存泄漏
        free(cur);
        cur = NULL;
    }
    return head;
}
void Test2(){
    node* head = creat();
    print(head);
    printf("删除后：\n");
    del(head,6);
    print(head);
}
////////////////////////////////////////////////////
//编程实现单链表的逆置
///////////////////////////////////////////////////

node* reverse(node* head){
    node *before = head;
    node *cur = head->next;
    node *next;
    if(head->next ==NULL || head->next->next ==NULL){
        return head;
    }
    while(cur!=NULL){
        next = cur->next;
        if(cur == head->next)
            cur->next = NULL;
        else
            cur->next = before;
        before = cur;
        cur = next;
    }
    head->next = before;
    return head;
}
void Test3(){
    node *head = creat();
    print(head);
    printf("逆置后\n");
    reverse(head);
    print(head);
    return;
}
//////////////////////////////////////////////
//有一个 C语言用来删除单链表的头元素的函数
//////////////////////////////////////////////

node* removeHead(node *head){   //使用头删的方式完成链表删除的操作
    node* cur = head->next;
    head->next = cur->next;
    free(cur);
    cur = NULL;
    return head;
}
void Test4(){  
    node* head = creat();
    printf("删除前：\n");
    print(head);
    printf("删除后：\n");
    removeHead(head);
    print(head);
    return;//表示结束
}
//主函数
int main(){
    //Test1();
    //Test2();
    //Test3();
    Test4();
    return 0;
}
