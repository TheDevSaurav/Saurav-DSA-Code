#include<iostream>
#include<queue>
using namespace std;
class Node{
public:
int data;
Node* left;
Node* right;

Node(int val){
    this->data=val;
    this->left=NULL;
    this->right=NULL;
}
};

//it return the root of the tree
Node* createTree(){
    cout<<"enter the value for node: "<<endl;
    int data;
    cin>>data;

    if(data == -1){
        return NULL;
    } 

    //step1 create node
    Node* root= new Node(data);
    
    //step 2 create left subtree
    cout<<"left of node"<<root->data<<endl;
    root->left=createTree();
   
    //step 3 create right subtree
    cout<<"right of node"<<root->data<<endl;
    root->right = createTree();
   
    return root; 
}

void preOrderTraversal(Node* root){
    //base case
    if(root==NULL){
        return;
    }
    //NLR
    //N
    cout<<root->data<<" ";
    //L
    preOrderTraversal(root->left);
    //R
    preOrderTraversal(root->right);
}

void inOrderTraversal(Node* root){
    //base case
    if(root==NULL){
        return;
    }
    //LNR
 
    //L
    inOrderTraversal(root->left);
    //N
    cout<<root->data<<" ";
    //R
    inOrderTraversal(root->right);
}

void postOrderTraversal(Node* root){
    //base case
    if(root==NULL){
        return;
    }
    //LNR
 
    //L
    postOrderTraversal(root->left);

    //R
    postOrderTraversal(root->right);

       //N
    cout<<root->data<<" ";
}

void levelOrderTraversal(Node* root){
    queue<Node*> q;
    q.push(root);
    q.push(NULL);

    //asli traversal
    while(!q.empty()) {
          Node* front=q.front();
        q.pop();

       if(front==NULL){
        cout<<endl;
        if(!q.empty()){
        q.push(NULL);
        }
        
       }
       else{
        //valid
       
        cout<<front->data<<" ";
        if(front->left != NULL){
            q.push(front->left);
        }
        if(front->right != NULL){
            q.push(front->right);
        }
       }
    }
}  

// int main() {
// Node* root = createTree();
// // cout<<root->data<<endl;
// cout<<"printing preorder : ";
// preOrderTraversal(root);
// cout<<endl;
// cout<<"printing inorder : ";
// inOrderTraversal(root);
// cout<<endl;

// cout<<"printing postorder : ";
// postOrderTraversal(root);
// cout<<endl;

// cout<<"level order traversal : ";
// levelOrderTraversal(root);
// cout<<endl;

// }



#include<iostream>
#include<queue>
using namespace std;
int searchInorder(int inorder[],int size,int target){
    for(int i=0;i<size;i++){
        if(inorder[i]==target){
            return i;
    }
    }
    return -1;
    
}
Node* constructTreeFromInorderAndPostOrder(int preOrder[],int inOrder[],int &preIndex,int inOrderStart[],int inOrderEnd[],int size){
    //base case
    if(preIndex>=size || inOrderStart> inOrderEnd){
        return NULL;
    }
    ///1 case mai solve krta hoon
    int element = preOrder[preIndex];
    preIndex++;
    Node* root = int new(element);
    //element search krna padega inorder main
    int position=searchInorder(inorder,size,element);

    //baki recursion
    root->left=constructTreeFromInorderAndPostOrder(preOrder,inOrder,preIndex,inOrderStart,position-1,size);
    root->right=constructTreeFromInorderAndPostOrder(preOrder,inOrder,preIndex,position+1,inOrderEnd,size);
    return root;
}
int main() {
   int inOrder[]={10,8,6,2,4,12};
   int preOrder[]={2,8,10,6,4,12};
    int size=6;
    int preOrderIndex=0;
    int inOrderStart=0;
    int inOrderEnd=5;
    Node* root = constructTreeFromInorderAndPostOrder(inOrder,preOrder,preOrderIndex,inOrderStart,inOrderEnd,size);
    cout<<"printing the entire tree"<<endl;
    levelOrderTraversal(root);
}