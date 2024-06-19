// //impliment 2 stack in an array
// #include<iostream>
// using namespace std;

// class stack {
// public:
//     int* arr;
//     int size;
//     int top1;
//     int top2;

//     stack(int size) {
//         arr = new int[size];
//         this->size = size;
//         top1 = -1;
//         top2 = size;
//     }

//     // void push1(int data) {
//         if (top2 - top1 == 1) {
//             // no space available
//             cout << "overflow" << endl;
//         }
//         else {
//             top1++;
//             arr[top1] = data;
//         }
//     }

//     void push2(int data) {
//         if (top2 - top1 == 1) {
//             // no space available
//             cout << "overflow" << endl;
//         }
//         else {
//             top2--;
//             arr[top2] = data;
//         }
//     }

//     void pop1() {
//         if (top1 == -1) {
//             // stack is empty
//             cout << "underflow" << endl;
//         }
//         else {
//             arr[top1] = 0;
//             top1--;
//         }
//     }

//     void pop2() {
//         if (top2 == size) {
//             // stack is empty
//             cout << "underflow" << endl;
//         }
//         else {
//             arr[top2] = 0;
//             top2++;
//         }
//     }

//     void print() {
//         cout << endl;
//         cout << "top1 " << top1 << endl;
//         cout << "top2 " << top2 << endl;
//         for (int i = 0; i < size; i++) {
//             cout << arr[i] << " ";
//         }
//         cout << endl;
//     }
// };

// int main() {
//     stack st(6);
//     st.print();
//     st.push1(10);
//     st.push1(20);
//     st.push1(30);
//     st.push2(100);
//     st.push2(200);
//     st.push2(300);
//     st.push2(4 00);
//     st.print();
//     return 0;
// }








//remove redundant bracket
#include<iostream>
#include<stack>
using namespace std;
bool checkRedundant(string &str){
    stack<char>st;
    for(int i=0;i<str.length();i++){
        char ch=str[i];

        if(ch=='('||ch=='+'||ch=='-'||ch=='*'||ch=='/'){
            st.push(ch);
        }
        else if(ch==')'){
            int operatorCount=0;
            while(!st.empty() && st.top()!='('){
                char temp=st.top();
                if(temp=='+'||temp=='-'||temp=='*'||temp=='/'){
                    operatorCount++;
                }
                st.pop();
            }
            //yah pr aap tabhi pochoge jab
            //apke stack k top pr ek opening bracket hoga
            st.pop();
            if(operatorCount==0){
                return true;
            }
        }
        
    }
    //agr mai yaha tak pcoha hu to har 1 bracket ke bich mai oprator pkka mila hoga
    return false;

}
int main() {
    string str= "(((a+b)*(c+d)))";
    bool ans= checkRedundant(str);
    if(ans==true){
        cout<<"redeundant brackets present"<<endl;
    }
    else if(ans==false){
        cout<<"redeundant  brackets not present"<<endl;
    }
}
