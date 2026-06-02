#include <iostream>
using namespace std;
class treenode{
public:
char  data;
treenode* left;
treenode* right;
treenode(char value){
    data = value;
    left = nullptr;
    right = nullptr;
}
};
int main(){
    treenode root('R');
    treenode nodeA('A');
    treenode nodeB('B');
    treenode nodeC('C');
    treenode nodeD('D');
    treenode nodeE('E');
    treenode nodeF('F');
    treenode nodeG ('G');

    root.left = &nodeA;
    root.right = &nodeB;

    nodeA.left = &nodeC;
    nodeA.right = &nodeD;

    nodeB.left = &nodeE;
    nodeB.right = &nodeF;

    nodeF.left = &nodeG;

    cout<<"root.right.left.data :  "<< root.right->left->data <<endl;

}