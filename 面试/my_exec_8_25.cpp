#include<iostream>
#include<algorithm>
using namespace std;


struct TreeNode {
    int val;
    struct TreeNode *left;
    struct TreeNode *right;
    TreeNode(int x) :
        val(x), left(NULL), right(NULL) {

        }
};
typedef struct TreeNode BinaryTreeNode;
//分行从上往下打印二叉树
void Print(BinaryTreeNode* pRoot){
    if(pRoot == NULL){
        return;
    }
    //使用列表存储结点
    queue<BinaryTreeNode*> nodes;
    nodes.push(pRoot);
    //定义俩个变量，一个表示当前层没有打印的点数；
    //另一个表示下一层需要打印的点数。
    int nextPrint = 0;
    int toBePrint = 1;
    while(!nodes.empty()){
        //打印
        BinaryTreeNode* pNode = nodes.front();
        cout<< pNode.val<< " ";
        //左结点入队列
        if(pNode->left != NULL){
            nodes.push(pNode->left);
            nextPrint++;
        }
        //右结点入队列
        if(pNode->right != NULL){
            nodes.push(pNode->right);
            nextPrint++;
        }
        //处理队列中已经使用过的结点，与本行需要打印的结点数；
        //当本行需要打印的结点数已结束时，打印换行
        toBePrint--;
        if(toBePrint == 0){
            cout<<endl;
            toBePrint = nextPrint;
            nextPrint = 0;
        }
    }
}

int main(){
    //树的创建

}
