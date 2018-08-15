#include<iostream>
using namespace std;
#include<stdio.h>
#include<stdlib.h>
/////////////////////////////////////////
//题目一、在O(1)时间内删除链表节点
//    给定单向链表的头指针和一个节点指针，定义一个函数在O(1)
//    时间内删除该节点。链表节点与函数的定义如下
/////////////////////////////////////////

//链表节点的结构体
//struct ListNode{
//    int data;
//    ListNode* next;
//};
//
//ListNode* create(int x){
//    ListNode* new_node = (ListNode*)malloc(sizeof(ListNode));
//    new_node->data = x;
//    new_node->next = NULL;
//    return new_node;
//}

//二叉树节点的结构体
struct binaryTreeNode{
    int data;
    binaryTreeNode* left;//左节点
    binaryTreeNode* right;//右节点
};
binaryTreeNode* create(int x){
    binaryTreeNode* node = (binaryTreeNode*)malloc(sizeof(binaryTreeNode));
    node->data = x;
    node->left = NULL;
    node->right = NULL;
    return node;
}

//void DeleteNode(ListNode** head,ListNode* ToBeDeleted){
//    if(head == NULL || (*head)==NULL || ToBeDeleted == NULL){
//        return;
//    }
//    ListNode* cur;
//对于链表中节点的删除，最早想到的也许是先进行查询，如果查找到
//再进行删除操作，但是这种方法的时间复杂度为O(n)，不满足题中要
//求。故此，我们可以进行删除待删除节点的下一个节点，将待删除结
//点的值进行修改，就达到了删除指定元素的目的。但是 此种方法需要
//考虑带删除元素是否在链表中，如果需要进行判断，呢么时间复杂度
//不可以 达到指定要求，所有此处我们因该确定待删除元素一定在链表
//中，才能进行以下操作。
//分三种情况进行分析
//1.待删除节点为首结点
//    if(ToBeDeleted == *head){
//        ListNode* cur = *head;
//        *head = ToBeDeleted->next;
//        free(cur);
//    }
//    //2.待删除节点为中间节点
//    else if(ToBeDeleted->next != NULL){
//        ListNode* cur = ToBeDeleted->next;
//        ToBeDeleted->data = cur ->data;
//        ToBeDeleted->next = cur->next;
//        free(cur);
//    }
//    //待删除节点为尾节点
//    else{
//        ListNode* cur = (*head);
//        while(cur->next != ToBeDeleted){
//            cur = cur ->next;
//        }
//        cur ->next = NULL;
//        free(ToBeDeleted);
//    }
//    return;
//}
//
//void Test1(){
//    ListNode* head = create(1);
//    ListNode* x1 = create(2);
//    ListNode* x2 = create(3);
//    ListNode* x3 = create(4);
//    head->next = x1;
//    x1->next = x2;
//    x2->next = x3;
//    int i = 0;
//    ListNode* cur = head;
//    while( cur != NULL){
//        printf("i -> %d \n",i,cur->data);
//        cur = cur->next;
//        i++;
//    }
//    DeleteNode(&head,x1);
//    printf("\n**********删除中间节点***********************\n");
//    cur = head;
//    i = 0;
//    while( cur != NULL){
//        printf("%d -> %d \n",i,cur->data);
//        cur = cur->next;
//        i++;
//    }
//    DeleteNode(&head,head);
//    printf("\n**********删除头结点***********************\n");
//    cur = head;
//    i = 0;
//    while( cur != NULL){
//        printf("%d -> %d \n",i,cur->data);
//        cur = cur->next;
//        i++;
//    }
//    DeleteNode(&head,x3);
//    printf("\n**********删除尾节点***********************\n");
//    cur = head;
//    i = 0;
//    while( cur != NULL){
//        printf("%d -> %d \n",i,cur->data);
//        cur = cur->next;
//        i++;
//    }
//}

/////////////////////////////////////////////
//题目二、删除链表中重复的节点
//    在一个排序的链表中，如何删除重复的节点？
/////////////////////////////////////////////

//void DelereDuplication(ListNode** head){
//    //问题分析：对域删除链表中重复元素这个问题，我们首先应该考虑是否右重复元素，当发现
//    //重复元素的时候对其进行删除操作，对于单链表元素的删除，应该知道待删除元
//    //素的前一个元素，以便将待删除元素删除后将其前一个元素指向删除元素的下一
//    //个元素，完成删除元素的操作。
//    //解题思路：
//    //     1.定义一个指针prev使其指向待删除元素的前一个节点
//    if(head == NULL || (*head) == NULL){
//        //错误输入或者为链表中无元素
//        return;
//    }
//    ListNode* cur = *head;
//    ListNode* prev = NULL;
//    //     2.删除待删除元素，将prev->next指向删除元素的下一个元素
//    //2.1首元素是重复元素，需要序该head的指向
//    //2.2首元素不是重复元素，无需该比head的指向
//    while(cur != NULL){
//        ListNode* next = cur->next;
//        bool needDelete = false;
//        if(next!= NULL && next->data == cur->data){
//            needDelete = true;
//        }
//        if(!needDelete){
//            prev = cur;
//            cur = cur->next;
//        }else{
//            int value = cur->data;
//            ListNode* ToBeDel = cur;
//            while(ToBeDel != NULL && ToBeDel->data == value){
//                next = ToBeDel->next;
//                delete ToBeDel;
//                ToBeDel = NULL;
//                ToBeDel = next;
//            }
//            if(prev == NULL){
//                *head = next;
//            }else{
//                prev->next = next;
//            }
//            cur = next;
//        }
//    }
//    return;
//}
//
//void Test2(){
//    ListNode* head = create(1);
//    ListNode* x1 = create(2);
//    ListNode* x2 = create(3);
//    ListNode* x3 = create(3);
//    ListNode* x4 = create(4);
//    ListNode* x5 = create(4);
//    ListNode* x6 = create(5);
//    head->next = x1;
//    x1->next = x2;
//    x2->next = x3;
//    x3->next = x4;
//    x4->next = x5;
//    x5->next = x6;
//    int i = 0;
//    ListNode* cur = head;
//    while( cur != NULL){
//        printf("%d -> %d \n",i,cur->data);
//        cur = cur->next;
//        i++;
//    }
//    printf("\n**************去重后**********************\n");
//    DelereDuplication(&head);
//    cur = head;
//    i = 0;
//    while( cur != NULL){
//        printf("%d -> %d \n",i,cur->data);
//        cur = cur->next;
//        i++;
//    }
//    return;
//}


////////////////////////////////////////////
//题目三 、正则表达式匹配
//    请实现一个函数用来匹配包含'.'和'*'的正则表达式。
//    模式中的字符'.'表示任意一个字符，而'*'表示它前面的
//    字符可以出现任意次(包括零次)。在本题中，匹配的是
//    值字符串的所有字符匹配整个模式。例如：字符串"aaa"
//    与模式"a.a"和"ab*ac*a"匹配，但与"aa.a"和"ab*a"均
//    不匹配
////////////////////////////////////////////
//bool matchCore(char* str,char* patter);
//bool match(char* str,char* patter){
//    //进行模式匹配
//    //1.判断是否为空
//    if(str == NULL || patter == NULL){
//        return false;
//    }
//    return matchCore(str,patter);
//}
//bool matchCore(char* str,char* patter){
//    //进行分类判断
//    //1.将确定的结果先给定
//    //2.将不确定的结果分情况进行讨论
//    //    下一个值是否为'*'，作为情况的判断条件
//    if(*str == '\0' && *patter == '\0'){
//        return true;
//    }
//    if(*str == '\0'  && *patter != '\0'){
//        return false;
//    }
//    if(*str != '\0'  && *patter == '\0'){
//        return false;
//    }
//    //    2.1:下一个值为'*'，继续分情况进行讨论
//    if(*(patter + 1) == '*'){
//        if(    *str == *patter || (*patter == '.'&& *str != '\0') ) 
//                  return matchCore(str +1 ,patter)||matchCore(str , patter+2)
//                         ||matchCore(str + 1,patter+ 2);
//        else{
//            return matchCore(str,patter+2);
//        }
//    }
//    //    2.2:下一个值不为'*'，继续分析
//    if(*str == *patter ||(*patter == '.'&&*str!= '\0'))
//        return  matchCore(str+1,patter+1);
//    return false;
//}
//
//void Test3(){
//    char *str = "aaa";
//    char* patter = "a.a";
//    char* patter1 = "ab*ac*a";
//    char* patter2 = "aa.a";
//    char* patter3 = "ab*a";
//    bool ret = match(str,patter);
//    printf("patter:ret = %d\n",ret);
//    bool ret1 = match(str,patter1);
//    printf("patter1:ret = %d\n",ret1);
//    bool ret2 = match(str,patter2);
//    printf("patter2:ret = %d\n",ret2);
//    bool ret3 = match(str,patter3);
//    printf("patter3:ret = %d\n",ret3);
//}

////////////////////////////////////////////
//题目四：请完成一个函数用来判断字符串是否表示数值（包括整数和小数）
//。例如，字符串"+100","5e2","-123","3.13"及"-1E-16"都表示数值，但(
// "21e","1a3.12","1.1.2","+-1"即"12e+5.4"都不是)
////////////////////////////////////////////


//注意：整数是可以有符号的；，小数是无符号的；指数是可以有符号的
//bool scanUnsigned(const char** str){
//    const char* before = *str; 
//    while(**str != '\0' && **str < '9' && **str > '0'){
//        ++(*str);
//    }
//    return *str > before;
//}
//
//bool scanInteger(const char** str){
//    if(**str == '+'|| **str == '-')
//        ++(*str);
//    return scanUnsigned(str);
//}
//
//bool isNumeric(const char* str){
//    //判断是否为空
//    if( str == NULL ){
//        return NULL;
//    }
//    bool numeric = scanInteger(&str);
//    if(*str == '.'){
//        ++str;
//        numeric = scanUnsigned(&str) || numeric;
//    }
//    if(*str == 'e' || *str == 'E'){
//        ++str;
//        numeric = scanInteger(&str) || numeric;
//    }
//    return numeric && *str == '\0';
//}
//
//void Test4(){
//    char *str = "123";
//    char *str1 = "123e0.3";
//    char *str2 = "123e12";
//    char *str3 = "123.+1e12";
//    bool ret = isNumeric(str);
//    printf("ret = %d\n",ret);
//    bool ret1 = isNumeric(str1);
//    printf("ret1 = %d\n",ret1);
//    bool ret2 = isNumeric(str2);
//    printf("ret2 = %d\n",ret2);
//    bool ret3 = isNumeric(str3);
//    printf("ret3 = %d\n",ret3);
//}


///////////////////////////////////////
//题目五：调整数组顺序将基数位于偶数前面
//   输入一个整数数组，实现一个函数来调整该数组中的顺序
//   ，使得所有基数 位于该数组的前半部分，所有的偶数位于
//   该数组的后半部分。
///////////////////////////////////////

//提示：为了使得代码的复用性(可扩展性)加强，可以引入函数指针，使得判断条件改变，
//      不需要堆整体代码进行改动。
//void sort(int *arr,unsigned int length){
//    if(arr == NULL || length == 0){
//        return;
//    }
//    int * begin = arr;
//    int * end = arr+ length-1;
//    while(begin < end){
//        //从前往后找一个偶数
//        while(begin < end && (*begin % 2 != 0)){
//            begin++;
//        }
//        //从后往前找一个基数
//        while(begin < end && (*end % 2 == 0)){
//            end--;
//        }
//        if(begin < end){
//            int tmp = *begin;
//            *begin = *end;
//            *end =tmp;
//        }
//    }
//}
//
//void Test5(){
//    int arr[] = {1,2,3,4,5,6,7,8,9};
//    int i = 0;
//    for(;i<9;++i){
//        printf("%d ",arr[i]);
//    }
//    printf("\n");
//    sort(arr,9);
//    printf("交换后：\n");
//    i = 0;
//    for(;i<9;++i){
//        printf("%d ",arr[i]);
//    }
//    printf("\n");
//}

///////////////////////////////////////////////
//题目六：链表中倒数第k个节点
//     题目：输入一个链表，输出该链表的倒数第K个节点。为了符合大多数
//     人的习惯，本题以1开始计数，，即链表的尾结点 是倒数第一个节点。
//     例如，一个链表右6个节点，从头结点开始，它们的值依次是1、2、...6
//     。这个链表的倒数第三个节点的值为4的节点。链表节点定义如下：
///////////////////////////////////////////////

//ListNode* findK(ListNode*head,unsigned int k){
//    //此处注意输入的K值是否为0,由于K为无符号整型，所以如果此时的K为0，再
//    //对其进行--操作时，将会编程特别大的整整数。
//    if(head == NULL || k == 0){
//        return NULL;
//    }
//    ListNode* fast = head;
//    ListNode* slow = head;
//    while(fast != NULL && k != 0){
//        fast = fast->next;
//        k--;
//    }
//    if(k != 0){
//        return NULL;
//    }
//    if(fast == NULL){
//        return slow;
//    }else{
//        while(fast!= NULL){
//            fast = fast->next;
//            slow = slow->next;
//        }
//        return slow;
//    }
//}
//
//void Test6(){
//    ListNode* head = create(1);
//    ListNode* l2 = create(2);
//    ListNode* l3 = create(3);
//    ListNode* l4 = create(4);
//    ListNode* l5 = create(5);
//    ListNode* l6 = create(6);
//    head->next = l2;
//    l2->next = l3;
//    l3->next = l4;
//    l4->next = l5;
//    l5->next = l6;
//    ListNode* ret = findK(head,0);
//    if (ret != NULL)
//        printf("ret ->value = %d\n",ret ->data);
//    else{
//        printf("未找到\n");
//    }
//}

////////////////////////////////////////////////
//题目七：链表中环的入口节点
///////////////////////////////////////////////
//
//ListNode* meetingNode(ListNode* head){
//    if(head == NULL){
//        return NULL;
//    }
//    ListNode* fast = head;
//    ListNode* slow = head;
//    int flag = 0;
//    while(fast != NULL &&fast->next != NULL){
//        flag = 1;
//        fast = fast->next->next;
//        slow = slow->next;
//        if(fast == slow){
//            return fast;
//        }
//    }
//    return NULL;
//}
//
//ListNode* enterNodeOfLoop(ListNode* head){
//    ListNode* meet = meetingNode(head);
//    if(meet == NULL) {
//        printf("未找到\n");
//    }else{
//        printf("ret ->data = %d\n",meet ->data);
//    }
//    if(meet ==NULL){
//        return NULL;
//    }
//    ListNode* cur = head;
//    while(cur != meet){
//        cur = cur->next;
//        meet = meet->next;
//    }
//    return meet;
//}
//
//void Test7(){
//    ListNode* head = create(1);
//    ListNode* l2 = create(2);
//    ListNode* l3 = create(3);
//    ListNode* l4 = create(4);
//    ListNode* l5 = create(5);
//    ListNode* l6 = create(6);
//    ListNode* l7 = create(7);
//    head->next = l2;
//    l2->next = l3;
//    l3->next = l4;
//    l4->next = l5;
//    l5->next = l6;
//    l6->next = l7;
//    l7->next = l5;
//    ListNode* ret  = enterNodeOfLoop(head);
//    if(ret == NULL) {
//        printf("未找到\n");
//    }else{
//        printf("ret ->data = %d\n",ret ->data);
//    }
//    return ;
//}
//

/////////////////////////////////////////////////
//题目八：反转链表
//    题目：定义一个函数，，输入一个链表的头节点，反转该链表，
//    并输出反转后的头节点。
/////////////////////////////////////////////////

//ListNode* reverseList(ListNode* head){
//    //如果链表为空或者只有一个节点，则不需要进行逆序处理
//    if(head == NULL || head->next == NULL){
//        return head;
//    }
//    //链表中的元素多余一个元素的时候，需要进行链表的逆序处理
//    printf("\n*******************************\n");
//    ListNode* before = NULL;
//    ListNode* cur = head;
//    ListNode* next = NULL;
//    while(cur!= NULL){
//        next = cur->next;
//        if(cur == head){
//            cur->next = NULL;
//        }else{
//            cur ->next = before;
//        }
//        before = cur;
//        cur = next;
//    }
//    head = before;
//    return head;
//}
//
//void Test8(){
//    ListNode* head = create(1);
//    //ListNode* l2 = create(2);
//    //ListNode* l3 = create(3);
//    //ListNode* l4 = create(4);
//    //ListNode* l5 = create(5);
//    //head ->next = l2;
//    //l2->next = l3;
//    //l3->next = l4;
//    //l4->next = l5;
//    head = reverseList(head);
//    while(head!= NULL){
//        printf("%d ",head->data);
//        head = head->next;
//    }
//    printf("\n");
//}

////////////////////////////////////////////
//题目九：合并两个排序的链表
//     题目：输入两个递增排序的链表，合并这两个链表并使新
//     链表中的节点仍然是递增序列的。
////////////////////////////////////////////

//ListNode* merge(ListNode* head1,ListNode* head2){
//    if(head1 == NULL){
//        return head2;
//    }
//    if(head2 == NULL){
//        return head1;
//    }
//    ListNode* new_head = NULL;
//    ListNode* cur = NULL;
//    while(head1 != NULL && head2 != NULL){
//        //表示两节点都不为空
//        if(head1->data < head2->data){
//            if(cur == NULL) {
//                cur = head1;
//                new_head = head1;
//            }else{
//                cur->next = head1;
//                cur = cur->next;
//            }
//            head1 = head1->next;
//        }else{
//            if(cur == NULL) {
//                cur = head2;
//                new_head = head2;
//            }else{
//                cur->next = head2;
//                cur = cur ->next;
//            }
//            head2 = head2->next;
//        }
//    }
//    if(head1 == NULL){
//        cur->next == head2;
//        head2 = head2->next;
//    }else{
//        cur->next == head1;
//        head1 = head1->next;
//    }
//    return new_head;
//}
//
//void Test9(){
//    ListNode* head1 = create(1);
//    ListNode* head2 = create(2);
//    ListNode* l3 = create(3);
//    ListNode* l4 = create(4);
//    ListNode* l5 = create(5);
//    ListNode* l6 = create(6);
//    ListNode* l7 = create(7);
//    ListNode* l8 = create(8);
//    head1->next = l3;
//    l3->next = l5;
//    l5->next = l7;
//    head2->next = l4;
//    l4->next = l6;
//    l6->next = l8;
//    printf("打印：\n");
//    ListNode* cur1 = head1;
//    ListNode* cur2 = head2;
//    printf("head1:");
//    while(cur1 != NULL){
//        printf("%d ",cur1->data);
//        cur1 = cur1->next;
//    }
//    printf("\n");
//    printf("head2:");
//    while(cur2 != NULL){
//        printf("%d ",cur2->data);
//        cur2 = cur2->next;
//    }
//    printf("\n");
//    printf("new_head:");
//    ListNode* new_head = merge(head1,head2);
//    while(new_head!= NULL){
//        printf("%d ",new_head->data);
//        new_head = new_head->next;
//    }
//    printf("\n");
//    return;
//}

///////////////////////////////////////////////
//题目十：树的子结构
//    题目：输入两棵二叉树A和B，判断B是不是A的子结构。二叉树的节点的
//    定义如下：
///////////////////////////////////////////////

//bool equal(double num1,double num2){
//    if((num1-num2<0.0000001)
//            &&(num1-num2>-0.0000001)){
//        return true;
//    }
//    return false;
//}
//
//bool doesTree1HasTree2(binaryTreeNode* root1,binaryTreeNode* root2){
//    //进行分析绝对结果
//    if(root2 == NULL){
//        return true;
//    }
//    if(root1 == NULL){
//        return false;
//    }
//    if(!equal(root1->data,root2->data)){
//        return false;
//    }
//    return doesTree1HasTree2(root1->left,root2->left)
//        && doesTree1HasTree2(root1->right,root2->right);
//}
//
//bool hasSubtree(binaryTreeNode* root1,binaryTreeNode* root2){
//    //判断着两个根节点是否为空
//    bool result = false;
//    //在这里直接对两个根节点不为空进行判断
//    if(root1 != NULL && root2 != NULL){
//        if(root1->data == root2->data){
//            result = doesTree1HasTree2(root1,root2);
//        }
//        if(!result){
//            result = hasSubtree(root1->left,root2);
//        }
//        if(!result){
//            result = hasSubtree(root1->right,root2);
//        }
//    }
//    return result;
//}
//
//void Test10(){
//    binaryTreeNode* root1 = create(1);
//    binaryTreeNode* r2 = create(2);
//    binaryTreeNode* r3 = create(3);
//    binaryTreeNode* r4 = create(4);
//    binaryTreeNode* r5 = create(5);
//    root1->left = r2;
//    root1->right = r3;
//    r3->left = r4;
//    r3->right = r5;
//    binaryTreeNode* root2 = create(3);
//    binaryTreeNode* r6 = create(4);
//    binaryTreeNode* r7 = create(5);
//    root2->left = r6;
//    root2->right = r7;
//    bool ret = hasSubtree(root1,root2);
//    printf("ret = %d\n",ret);
//    return;
//}

////////////////////////////////////////////////
//题目十一：二叉树的镜像
//    题目：请完成一个函数，输入一个二叉树 ，该函数输出它的
//    镜像。二叉树节点的定义如下：
////////////////////////////////////////////////

//void MirrorRecursively(binaryTreeNode* root){
//    if(root == NULL){
//        return;
//    }
//    if((root->left ==NULL) && (root->right == NULL)){
//        return;
//    }
//    //交换该节点的左右子树
//    binaryTreeNode* temp = root->left;
//    root->left = root->right;
//    root->right = temp;
//    //对该节点的左右子树递归的执行交换操作
//    if(root->right){
//        MirrorRecursively(root->right);
//    }
//    if(root->left){
//        mirrorrecursively(root->left);
//    }
//}
////层序遍历
//void binarytreenode_print(binarytreenode* root){
//    if(root == null){
//        return;
//    }
//    //处理数据
//    printf("%d ",root->data);
//    binarytreenode_print(root->left);
//    binarytreenode_print(root->right);
//    return;
//}
//
//void test11(){
//    binarytreenode* root = create(1);
//    binarytreenode* r2 = create(2);
//    binarytreenode* r3 = create(3);
//    binarytreenode* r4 = create(4);
//    binarytreenode* r5 = create(5);
//    binarytreenode* r6 = create(6);
//    binarytreenode* r7 = create(7);
//    binarytreenode* r8 = create(8);
//    binarytreenode* r9 = create(9);
//    root->left = r2;
//    root->right = r3;
//    r2->left = r4;
//    r2->right = r5;
//    r3->left = r6;
//    r3->right = r7;
//    r4->left = r8;
//    r4->right = r9;
//    binarytreenode_print(root);
//    printf("\n");
//    mirrorrecursively(root);
//    binarytreenode_print(root);
//    printf("\n");
//}

/////////////////////////////////////////////
//题目十二：对称的二叉树
//    题目：请实现一个函数，用来判断二叉树是不是对称的。
//    如果一个二叉树和它的镜像一样，那么它就是对称的。
/////////////////////////////////////////////
//1.对确定的结果作出返回值
//2.对不确定的结果，递归进行左子树的右孩子与右子树的左孩子比较和
//  左子树的左孩子与右子树的右孩子比较，并返回与结果。

//bool isSymmertical(binaryTreeNode* root1,binaryTreeNode* root2){
//    if(root1 == NULL&& root2 == NULL){
//        return true;
//    }
//    if(root1 == NULL || root2 == NULL){
//        return false;
//    }
//    if(root1->data != root2->data){
//        return false;
//    }
//    return isSymmertical(root1->left,root2->right)
//        &&isSymmertical(root1->right,root2->left);
//}
//
//bool isSymmertical(binaryTreeNode* root){
//    return isSymmertical(root->left,root->right);
//}
//void Test12(){
//    binaryTreeNode* r1 = create(1);
//    binaryTreeNode* r2 = create(2);
//    binaryTreeNode* r3 = create(2);
//    binaryTreeNode* r4 = create(3);
//    binaryTreeNode* r5 = create(4);
//    binaryTreeNode* r6 = create(4);
//    binaryTreeNode* r7 = create(3);
//    r1->left = r2;
//    r1->right = r3;
//    r2->left = r4;
//    r2->right = r5;
//    r3->left = r6;
//    r3->right = r7;
//    bool ret = isSymmertical(r1);
//    if(ret){
//        printf("对称\n");
//    }else{
//        printf("不对称\n");
//    }
//}

///////////////////////////////////////////////
//题目十三：顺时针打印矩阵
//    题目：输入一个矩阵，按照从外到里顺时针的顺序打印出
//    每个数字。
///////////////////////////////////////////////

//关于本题中要求矩阵元素从外到内打印问题，首先我们应该对
//矩阵行和列与打印权的次数进行分析，进行稍加分析后，我们发现
//，如果最外圈的打印称为第0圈的话，那么打印圈的个数小于行数与
//列数最小值的一半。

//void printMatrixInCircle(int** arr, int rows,int cols,int start){
//    //对数组的外层进行打印
//    int endX = cols-start-1;
//    int endY = rows-start-1;
//    //从左往右
//     int i = start; //表示行
//     int j = start; //表示列
//     for(;j<=endX;j++){
//         printf("%d ",arr[i][j]);
//     }
//    //从上往下
//    if(i+1<=endY){
//        i++;
//        for(;i<=endY;i++){
//            printf("%d ",arr[i][j]);
//        }
//    }
//    //从右到左
//    if(j-1>= start){
//        j--;
//        for(;j>=start;--j){
//            printf("%d ",arr[i][j]);
//        }
//    }
//    //从下到上
//    if(i-1>start){
//        i--;
//        for(;i>start;--i){
//            printf("%d ",arr[i][j]);
//        }
//    }
//}
//
//void printMatrixClockWisely(int** arr,int rows,int cols){
//    if(arr ==NULL || rows < 0 || cols < 0){
//        return;
//    }
//    int start = 0;//对打印圈数的描述,也打印开始的描述
//    while(start*2 < cols  && start*2 <rows){
//        //对所描述圈进行打印
//        printMatrixInCircle(arr,rows,cols,start);
//        ++start;
//    }
//    printf("\n");
//}
//void Test13(){
//    int arr[4][4] ={
//        1,2,3,4,
//        5,6,7,8,
//        9,10,11,12,
//        13,14,15,16
//    };
//    printMatrixClockWisely(&arr,4,4);
//    return;
//}

////////////////////////////////////////
//题目十四：包含min函数的栈
//    题目：定义栈的数据结构，请在该类型中实现一个
//    能够得到栈的最小元素的min函数。在该栈中，调用
//    min、push及pop的时间复杂度都是O(1)。
////////////////////////////////////////

//对于这个问题，我们可以借助一个辅助栈来解决，也可以
//通过在一个栈中，同时入栈两个元素（或同时出栈两个元素）
//，两个元素（一个为需要入栈的元素，另一个为当前最小元
//素）。栈的操作包括入栈、出栈、取栈顶元素

//template<class T>
//void StackWithMin<T>::push(const T& value){
//    m_data.push(value);
//    if(m_min.size() == 0 || value<m_min.top())
//        m_min.push(value);
//    else
//        m_min.push(m_min.top());
//}
//template<T>
//void StackWithMin<T>::pop(){
//    assert(m_data.size() > 0 &&m_min.size() > 0);
//    m_data.pop();
//    m_min.pop();
//}
//template<T>
//const T& StackWithMin<T>::min()const{
//    assert(m_data.size() > 0&& m_min.size()>0);
//    return m_min.top();
//}

////////////////////////////////////////////
//题目十六：栈的压入、弹出序列
//     题目：输入两个整数序列，一个序列表示栈的压入顺序，
//     判断第二个序列是否为该栈的弹出顺序。假设压入栈的
//     所有数字均不相等。例如，序列{1,2,3,4,5}是某栈的压
//     栈序列，序列{4,5,3,2,1}是该压栈序列对应的一个弹出
//     序列，但{4,3,5,1,2}就不可能是该压栈序列的弹出序列。
////////////////////////////////////////////

bool isPopOrder(const int* Push,const int* Pop,int length){
    //压栈操作，如果压栈序列进行压栈过程中，发现栈顶元素和
    //出栈序列中的当前元素中相等，此时堆栈中相应元素作出栈
    //操作，如果不相等，继续压栈操作，直到无压栈元素时，栈顶
    //元素与指定出栈序列的当前元素值仍不相等，表示出栈序列不
    //可能为压栈序列的弹出序列。
    bool possible = false;
    if(Push != NULL && Pop != NULL && length > 0){
        const int* nextPush = Push;
        const int* nextPop = Pop;
        std::stack<int>stackData;
        while(nextPop-Pop < length){
            while(stackData.empty()|| stackData.top() != *nextPop){
                if(nextPush-Push == length){
                    break;
                }
                stackData.push(*nextPush);
                nextPush++;
            }
            if(stackData.top() != *nextPop){
                break;
            }
            stackData.pop();
            nextPop++;
        }
        if(stackData.empty() && nextPop-Pop == length){
            possible = true;
        }
    }
    return possible;
}
void Test16(){
    char* push = "12345";
    char* pop = "45321";
    bool ret = isPopOrder(push,pop,5);
    if(ret){
        printf("是\n");
    }else{
        printf("不是\n");
    }
}
int main(){
    //Test1();
    //Test2();
    //Test3();
    //Test4();
    //Test5();
    //Test6();
    //Test7();
    //Test8();
    //Test9();
    //Test10();
    //Test11();
    //Test12();
    //Test13();
    Test16();
    return 0;
}
