// #include<iostream>
// #include<stack>
// using namespace std;
// int main() {
//     //creation
//     stack<int>st;
//     //inssertion
//     st.push(10);
//     st.push(20);
//     st.push(30);
//     // check size
//     cout<<"size of  stack is "<<st.size()<<endl;
//     //remove
//     st.pop();
//     //check empty
//     if(st.empty()) {
//         cout<<"stack is empty"<<endl;
//     }
//     else {
//         cout<<"stack is non empty"<<endl;
//     }
//     //top element
//     cout<<"top element"<<st.top()<<endl;   
// }





















// //stack implementation
// #include<iostream>
// using namespace std;

// class stack{
// public: 
//     int* arr;
//     int size;
//     int top;

//     // Constructor to initialize the stack
//     stack(int size) {
//         arr = new int[size];
//         this->size = size;
//         this->top = -1;
//     }

//     // Push function to add an element to the stack
//     void push(int data){
//         if(top == size - 1){
//             cout << "stack is overflow" << endl;
//             return;
//         }
//         else{
//             top++;
//             arr[top] = data;
//         }
//     }

//     // Pop function to remove the top element from the stack
//     void pop(){
//         if(top == -1){
//             cout << "stack is underflow" << endl;
//         }
//         else{
//             top--;
//         }
//     }

//     // Function to check if the stack is empty
//     bool isEmpty() {
//         return top == -1;
//     }

//     // Function to get the top element of the stack
//     int getTop(){
//         if(top == -1){
//             cout << "stack is empty" << endl;
//             return -1;
//         }
//         else{
//             return arr[top];
//         }
//     }

//     // Function to get the size of the stack
//     int getSize(){
//         return top + 1;
//     }

//     // Function to print the details of the stack
//     void Print(){
//         cout << "top:" << top << endl;
//         cout << "top element: " << getTop() << endl;
//         cout << "stack: ";
//         for(int i = 0; i < getSize(); i++){
//             cout << arr[i] << " ";
//         }
//         cout << endl;
//     }
// };

// int main() {
//     // Creation of stack
//     stack st(8);
//     // Pushing elements onto the stack
//     st.push(10);
//     st.Print();
//     st.push(20);
//     st.Print();
//     st.push(30);
//     st.Print();
//     st.push(40);
//     st.Print();
//     return 0;
//     st.pop();
//     st.Print();
//     cout<<"top element"<<st.getTop()<<endl;
//     cout<<"size of stack"<<st.getSize()<<endl;
// }






// reverse ordering
// #include<iostream>
// #include<stack>
// using namespace std;
// int main() {
//     string  str = "SAURAV";
//     stack<char>st;

//     for(int i=0;i<str.length();i++){
//         char ch = str[i];
//         st.push(ch);
//     }
//     cout<<endl;
//     while(!st.empty()){
//         cout<<st.top();
//         st.pop();
//     }
//     cout<<endl;

// }



















//middle element of a stack
// #include<iostream>
// #include<stack>
// using namespace std;

// void solve(stack<int> &st, int pos, int &ans) {
//     // base case
//     if (pos == 1) {
//         ans = st.top();
//         return;
//     }
//     // 1 case hum solve karenge
//     pos--;
//     int temp = st.top();
//     st.pop();
//     // recursion
//     solve(st, pos, ans);
//     // backtracking
//     st.push(temp);
// }
// int getMiddleElement(stack<int> &st) {
//     int size = st.size();
//     if (st.empty()) {
//         return -1;
//     } else {
//         // stack not empty
//         // odd
//         int pos = 0;
//         if (size % 2 == 1) {
//             pos = size / 2 + 1;
//         } else {
//             // even
//             pos = size / 2;
//         }
//         int ans = -1;
//         solve(st, pos, ans);
//         return ans;
//     }
// }

// int main() {
//     stack<int> st;
//     st.push(10);
//     st.push(20);
//     st.push(30);
//     st.push(40);
//     st.push(50);

//     int mid = getMiddleElement(st);
//     cout << "Middle element: " << mid << endl;
//     return 0; // Added return statement to main
// }









// //insert at bottom of stack
// #include<iostream>
// #include<stack>
// using namespace std;
// void insertAtBottom(stack<int> &st,int &element) {
//     //base case
//     if(st.empty()){
//         st.push(element);
//         return;
//     }
//     //1 case hum liknenga
//     int temp=st.top();
//     st.pop();
//     //baki recursion
//     insertAtBottom(st,element);
//     //backtracking
//     st.push(temp);
// }
// void reverseStack(stack<int> &st){
//     //base case
//     if(st.empty()) {
//         return;
//     }
//     //1case khud solve kro
//     int temp=st.top();
//     st.pop( );

//     //recursion
//     reverseStack(st);
//     //backtracking
//     insertAtBottom(st,temp);
// }

// void insertSorted(stack<int> &st,int &element) {
//     //base case
//     if(st.empty() || element>st.top()) {
//         st.push(element);
//         return; }
//         //1case khud solve kro
//     int temp=st.top();
//     st.pop( );
//     //recursion
//     insertSorted(st,element);
//     //backtracking
//     st.push(temp);

// }
// int main() {
//     stack<int>st;
//     st.push(10);
//     st.push(20);
//     st.push(30);

//     // int element=400;
//     // insertAtBottom(st,element);
//     // reverseStack(st);
//     insertSorted(st,25); 
//     while(!st.empty()) {
//         cout<<st.top()<<" ";
//         st.pop();
//     }

// }










#include<iostream>
#include<stack>
using namespace std;

void insertSorted(stack<int> &st, int &element) {
    // base case
    if (st.empty() || element > st.top()) {
        st.push(element);
        return;
    }
    // 1 case khud solve karo
    int temp = st.top();
    st.pop();
    // recursion
    insertSorted(st, element);
    // backtracking
    st.push(temp);
}

void sortStack(stack<int> &st) {
    // base case
    if (st.empty()) {
        return;
    }
    // 1 case khud solve karo
    int temp = st.top();
    st.pop();
    // recursion
    sortStack(st);
    // backtracking
    insertSorted(st, temp);
}

int main() {
    stack<int> st;
    st.push(10);
    st.push(50);
    st.push(30);
    st.push(60);
    st.push(90);

    sortStack(st);

    while (!st.empty()) {
        cout << st.top() << " ";
        st.pop();
    }

    return 0;
}
