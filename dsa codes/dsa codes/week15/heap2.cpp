// #include<iostream>
// #include<queue>
// using namespace std;

// int main(){
// // //create max heap
// // priority_queue<int> pq;
// // //insertion
// // pq.push(10);
// // pq.push(20);
// // pq.push(30);
// // pq.push(40);
// // pq.push(50);

// // cout<<"top element of max heap : "<<pq.top()<<endl;
// // pq.pop();
// // cout<<"top element of max heap : "<<pq.top()<<endl;

// // cout<<"size of max heap: "<<pq.size()<<endl;

// // if(pq.empty()){
// //     cout<<"empty"<<endl;
// // }
// // else{
// //     cout<<"non empty"<<endl;
// // }



// //create min-heap

// priority_queue<int,vector<int>,greater<int> > pq;
//  //insertion
// pq.push(10);
// pq.push(20);
// pq.push(30);
// pq.push(40);
// pq.push(50);

// cout<<"top element of min heap : "<<pq.top()<<endl;
// pq.pop();
// cout<<"top element of min heap : "<<pq.top()<<endl;

// cout<<"size of min  heap: "<<pq.size()<<endl;

// if(pq.empty()){
//     cout<<"empty"<<endl;
// }
// else{
//     cout<<"non empty"<<endl;
// }

// }



// #include<iostream>
// #include<queue>
// using namespace std;

// int getKthSmallestElement(int arr[],int n,int k){
//     priority_queue<int> pq;
//     //first k element ko process kro
//     for(int i =0; i<k;i++){
//         int element = arr[i];
//         pq.push(element);
//     }
//     //remaining element ko tabhi insert krenga jab wo root se chota hoon
//     for(int i =k;i<n;i++){
//         int element = arr[i];
//         if(element<pq.top()){
//             pq.pop();
//             pq.push(element);
//         }
//     }
//     int ans = pq.top();
//     return ans;

// }
// int getKthGreatestElement(int arr[],int n,int k){
//     priority_queue<int,vector<int>,greater<int> > pq;
//     //first k element ko process kro
//     for(int i =0; i<k;i++){
//         int element = arr[i];
//         pq.push(element);
//     }
//     //remaining element ko tabhi insert krenga jab wo root se bada hoon
//     for(int i =k;i<n;i++){
//         int element = arr[i];
//         if(element>pq.top()){
//             pq.pop();
//             pq.push(element);
//         }
//     }
//     int ans = pq.top();
//     return ans;

// }



// int main(){
//     int arr[] = { 3,5,4,6,9,8,7};
//     int n  =7;
//     int k = 3 ;
//     cout<<"kth smallest element : "<<getKthSmallestElement(arr,n,k)<<endl;
//     cout<<"kth  greastest element : "<<getKthGreatestElement(arr,n,k)<<endl;
//     return 0;
// }




// #include<iostream>
// #include<limits.h>
// #include<queue>
// using namespace std;

// class Info{
//     public:
//     int maxVal;
//     bool isHeap;

//     Info(int a ,bool b){
//         this->maxVal=a;
//         this->isHeap=b;
//     }
// };

// Info checkMaxHeap(Node* root){
//     //base case
//     if(root==NULL){
//         Info temp;
//         temp.maxVal = INT_MIN;
//         temp.isHeap = true;
//         return temp;
//     }
//     if(root->left==NULL && root->right==NULL){
//         Info temp;
//         temp.maxVal = root->data;
//         temp.isHeap = true;
//         return temp;
//     }

//     //recursion
//     Info leftAns = checkMaxHeap(root->left);
//     Info rightAns = checkMaxHeap(root->right);
//     //1case solve kro
//     if(root->data>leftAns.maxVal && root->data>rightAns.maxVal &&leftAns.isHeap && rightAns.isHeap){
//         Info ans;
//         ans.maxVal = root->data;
//         ans.isHeap = true;
//         return ans;
//     }
//     else{
//         Info ans;
//         ans.maxVal = max(root->data,max(leftAns.MaxVal,rightAns.maxVal));
//         ans.isheap = false;
//         return ans;    
//     }
// }










//cbt + bst convert into max heap

void StoreInOrderTraversal(Node* root,vector<int>& in){
    if(root==NULL){
        return;
    }
    //LNR
    storeInOrderTraversal(root->left,in,index);
    in.push_back(root->data);
    storeInOrderTraversal(root->right,in,index);
}

void  replaceUsingPostOrder(Node* root,vector<int>in,int &index){
    if(root==NULL){
        return;
    }
    //LRN
    replaceUsingPostOrder(root->left,in);
    replaceUsingPostOrder(root->right,in);
    root->data = in[index];
    index++;

}

Node* convertBSTIntoMaxHeap(Node* root){
    //step 1 store in order
    vector<int> inorder;
    StoreInOrderTraversal(root,inorder);
    //replace the nodes values with sorted inorder values ,using post order traversal
     int index =0;
    replaceUsingPostOrder(root,inorder,index);
    return root;

}












