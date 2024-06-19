#include<iostream>
#include<queue>
#include<stack>
using namespace std;

void reverseQueue(queue<int> &q){
    stack<int> s;
    //one  by one queue  se element stack  me daalo
    while(!q.empty()) {
        int FrontElement= q.front();
        q.pop();
        s.push(FrontElement);
    }
    //one by one stack se lo queue mai daalo
    while(!s.empty()){
        int  element= s.top();
        s.pop();
        q.push(element);
    }
}

void  reverse(queue<int> &q){
    //base case
    if(!q.empty()){
        return;
    }
    int element = q.front();
    q.pop();
     
     reverse(q);
     q.push(element);
}
void reverseFirstK(queue<int> &q,int k){
    stack<int> s;
    int n=q.size();
    //push first k element into stack
    for(int i=0;i<k;i++){
        int temp=q.front();
        q.pop();
        s.push(temp);
    }
    //push k element into queue
    while(!s.empty()) {
        int temp=s.top();
        s.pop();
        q.push(temp);
    }
    //pop and push first(n-k)  elememt into queue again
    for(int i=0;i<(n-k);i++){
        int temp =q.front();
        q.pop();
        q.push(temp);
    }
} 
void interLeaveQueue(queue<int> &first) {
    queue<int> second;
    //push first half of first queue in second queue
    int size= first.size();
    for(int i=0;i<size/2;i++){
        int temp = first.front();
        first.pop();
        second.push(temp); 
    }
    //merge both th half
    //intp orgignal queue - named as first
    for(int i=0;i<size/2;i++){
        int temp =  second.front();
        second.pop();

        first.push(temp);


        temp = first.front();
        first.pop();
        first.push(temp);
    }

}
void printFirstNegative(int *arr,int n, int k){
    deque<int> dq;
    //process first k element -first window
    for(int index=0;index<k;index++){
        int element=arr[index];
        if(element<0){
            dq.push_back(index);
        }
    }
    //process remaining window -> removal and addition
    for(int index=k;index<n;index++){
        //aaGE BADhne se phle purani window ka anwer nikal do
         if(dq.empty()){
        cout<<"0"<<endl;
    }
    else{
        cout<<arr[dq.front()]<<" ";
    }
       
        //removal-> jo bhi index out of range hai use queue mai se remove krdo
    if(index-dq.front()>=k){
        dq.pop_front();
    }
    //additon
    if(arr[index]<0){
        dq.push_back(index);
    }
    }
    //last window
    if(dq.empty()){
        cout<<"0"<<endl;
    }
    else{
        cout<<arr[dq.front()]<<" ";
    }
}
int main() {
//     queue<int> q;
//     q.push(10);
//     q.push(20);
//     q.push(30);
//     q.push(40);
//     q.push(50);
//     q.push(60);
//     reverse(q);

//     // reverseQueue(q);
//     // reverseFirstK(q,4);
//     interLeaveQueue(q);
//     cout<<"printing queue"<<endl;
//     while(!q.empty()){
//         int element=q.front();
//         q.pop();
//         cout<<element<<" ";
//     }


int arr[]={2,-5,4,-1,-2,0,5};
int size=7;
int k=3;
printFirstNegative(arr,size,k);

}