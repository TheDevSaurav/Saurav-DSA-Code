// #include<iostream>
// using namespace std;

// class Queue {
// public:
//     int* arr;
//     int size;
//     int front;
//     int rear;

//     Queue(int size) {
//         arr = new int[size];
//         this->size = size;
//         front = -1;
//         rear = -1;
//     }

//     void push(int val) {
//         // Check full
//         if (rear == size - 1) {
//             cout << "Overflow" << endl;
//             return;
//         } else if (front == -1 && rear == -1) {
//             // Empty
//             front++;
//             rear++;
//             arr[rear] = val;
//         } else {
//             rear++;
//             arr[rear] = val;  // Corrected this line
//         }
//     }

//     void pop() {  // Removed unnecessary argument val
//         // Underflow
//         if (front == -1 && rear == -1) {
//             cout << "Underflow" << endl;
//             return;
//         } else if (front == rear) {
//             // Single element
//             arr[front] = -1;
//             front = -1;
//             rear = -1;
//         } else {
//             // Normal case
//             arr[front] = -1;
//             front++;
//         }
//     }

//     bool isEmpty() {
//         return (front == -1 && rear == -1);
//     }

//     int getSize() {
//         return (rear - front + 1);
//     }

//     int getFront() {
//         if (front == -1) {
//             cout << "No element in front" << endl;
//             return -1;
//         } else {
//             return arr[front];
//         }
//     }

//     void print() {
//         cout << "Printing queue" << endl;
//         for (int i = front; i <= rear; i++) {  // Corrected the loop range
//             cout << arr[i] << endl;
//         }
//         cout << endl;
//     }
// };

// int main() {
//     Queue q(5);
//     q.push(1);
//     q.push(2);
//     q.push(3);
//     q.print();

//     q.pop();
   
//     q.print();

//     cout << "Front element: " << q.getFront() << endl;
//     cout << "Queue size: " << q.getSize() << endl;

//     return 0;
// }












// class CircularQueue {
// public:
//     int* arr;
//     int size;
//     int front;
//     int rear;

//     CircularQueue(int size) {
//         arr = new int[size];
//         this->size = size;
//         front = -1;
//         rear = -1;
//     }
//     void push(int val){
//       //overflow
//       //empty
//       //circular
//       //normal
//       if(front==00 && rear==size-1 || (rear== front-1)){
//         cout<<"over flow"<<endl;
//       }  
//       else if(front=-1 && rear == -1){
//         front++;
//         rear++;
//         arr[rear]=val;
//       }
//       else if(rear==size-1 && front != 0){
//         rear=0;
//         arr[rear]=val;
//       }
//       else{
//         rear++;
//         arr[rear]=val;
//       }
//     }
//     void pop() {
//         if(front==-1 && rear== -1){
//             cout<<"underflow"<<endl;
//         }
//         else if(front==rear){
//             arr[front]=-1;
//             front=-1;
//             rear=-1;
//         }
//         else if(front== size-1){
//             arr[front]=-1;
//             front=0;
//         }
//         else{
//             arr[front]=-1;
//             front++;
//         }
//     }
//        void print() {
//         cout << "Printing queue" << endl;
//         for (int i = front; i <= rear; i++) {  // Corrected the loop range
//             cout << arr[i] << endl;
//         }
//         cout << endl;
//     }
// };
// int main() {
//     CircularQueue  q(5);
//     q.print(); 
//     q.push(10);
//     q.print();
//     q.push(20);
//     q.print();
//      q.push(30);
//     q.print();
//      q.push(40);
//     q.print();
//      q.push(50);
//     q.print();
//      q.push(60);
//     q.print();
//     q.pop();
//     q.print();
//     q.push(100);
//     q.print();

  
// }
















// // //deque
// // // #include<iostream>
// // // #include<deque>
// // // using namespace std;
// // // int main() {
// // //   deque<int> dq;
// // //   dq.push_back(10);
// // //   dq.push_front(20);

// // //   cout<<dq.size()<<endl;
// // //   cout<<dq.front()<<endl;
// // //   cout<<dq.back()<<endl;
// // //     dq.pop_back();
// // //   dq.pop_front();
// // // }





//implementation for deque from scratch
#include<iostream>
#include<deque>
using namespace std;
class CircularQueue {
public:
    int* arr;
    int size;
    int front;
    int rear;

    CircularQueue(int size) {
        arr = new int[size];
        this->size = size;
        front = -1;
        rear = -1;
    }
    void pushBack(int val){
      //overflow
      //empty
      //circular
      //normal
      if(front==0 && rear==size-1 || (rear== front-1)){
        cout<<"over flow"<<endl;
      }  
      else if(front=-1 && rear == -1){
        front++;
        rear++;
        arr[rear]=val;
      }
      else if(rear==size-1 && front != 0){
        rear=0;
        arr[rear]=val;
      }
      else{
        rear++;
        arr[rear]=val;
      }
    }
    void pushFront(int val){
      //overflow
      //empty
      //circular
      //normal
      if(front==0 && rear==size-1 || (rear== front-1)){
        cout<<"over flow"<<endl;
      } 
        else if(front=-1 && rear == -1){
        front++;
        rear++;
        arr[front]=val;
      }
      else if(front==0 && rear != size-1){
        rear=0;
        arr[rear]=val;
      }
      else{
        rear++;
        arr[rear]=val;
      }
    }  
    void popfront() {
      //underflow
      //single element
      //circular
      //normal flow 
        if(front==-1 && rear== -1){
            cout<<"underflow"<<endl;
        }
        else if(front==rear){
            arr[front]=-1;
            front=-1;
            rear=-1;
        }
        else if(front== size-1){
            arr[front]=-1;
            front=0;
        }
        else{
            arr[front]=-1;
            front++;
        }
    }
     void popBack() {
      //underflow
      //single element
      //circular
      //normal flow 
        if(front==-1 && rear== -1){
            cout<<"underflow"<<endl;
        }
        else if(front==rear){
            arr[front]=-1;
            front=-1;
            rear=-1;
        }
        else if(rear==0){
            arr[rear]=-1;
            rear=size-1;
        }
        else{
            arr[rear]=-1;
            rear++;
        }
    }
       void print() {
        cout << "Printing queue" << endl;
        for (int i = front; i <= rear; i++) {  // Corrected the loop range
            cout << arr[i] << endl;
        }
        cout << endl;
    }
};
int main() {
}














//dq class notes
class Dq
{
public:
    int *arr;
    int size;
    int front;
    int rear;
    Dq(int size)
    {
        this->size = size;
        arr = new int[size];
        front = -1;
        rear = -1;
    }
    void pushFront(int val)
    {
        /* // overFlow
         if (front == 0)
         {
             cout << "OverFlow" << endl;
             return;
         }
         // empty case
         else if (front == -1 && rear == -1)
         {
             front++;
             rear++;
             arr[front] = val;
         }
         // normal case
         else
         {
             front--;
             arr[front] = val;
         }
         */
        if ((front == 0 && rear == size - 1) || (rear == front - 1)) // imp condition
        {
            cout << "OverFlow" << endl;
            return;
        }
        else if (front == -1 && rear == -1)
        {
            front++;
            rear++;
            arr[front] = val;
        }
        else if (front == 0 && rear != size - 1)
        {
            front = size - 1;
            arr[front] = val;
        }
        else
        {
            front--;
            arr[front] = val;
        }
    }
    void pushBack(int val)
    {
        /* // overflow
         if (rear == size - 1)
         {
             cout << "OverFlow" << endl;
             return;
         }
         // empty case
         else if (front == -1 && rear == -1)
         {
             front++;
             rear++;
             arr[rear] = val;
         }
         // normal case
         else
         {
             rear++;
             arr[rear] = val;
         }
         */
        // The above code is garbage as humme Circular Nature maintain krna he padega
        // over flow
        if ((front == 0 && rear == size - 1) || (rear == front - 1)) // imp condition
        {
            cout << "OverFlow" << endl;
            return;
        }
        // first Ele
        else if (front == -1 && rear == -1)
        {
            front++;
            rear++;
            arr[rear] = val;
        }
        // circular Nature
        else if (rear == size - 1 & front != 0)
        {
            rear = 0;
            arr[rear] = val;
        }
        // normal pushing
        else
        {
            rear++;
            arr[rear] = val;
        }
    }
    void popFront()
    {
        if (rear == -1 && front == -1)
        {
            cout << "Queue underFlow" << endl;
            return;
        }
        else if (front == size - 1)
        {
            // single element
            arr[front] = -1;
            front = 0;
        }
        else
        {
            arr[front] = -1;
            front++;
        }
    }
    void popBack()
    {
        // undeflow
        if (front == -1 && rear == -1)
        {
            cout << "UnderFlow" << endl;
            return;
        }
        // single element
        else if (front == rear)
        {
            arr[rear] = -1;
            front = -1;
            rear = -1;
        }
        // circular Nature
        else if (rear == 0)
        {
            arr[rear] = -1;
            rear = size - 1;
        }
        // normal Flow
        else
        {
            arr[rear] = -1;
            rear--;
        }
    }
};



  