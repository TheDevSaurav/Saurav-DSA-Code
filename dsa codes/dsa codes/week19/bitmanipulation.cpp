#include<iostream>
using namespace std;
// void checkEvenOdd(int n){
//     if(n&1){
//         cout<<"odd"<<endl;
//     }
//     else{
//         cout<<"even"<<endl;
//     }
// }
// int main(){
//     int n=20;
//     checkEvenOdd(n);
// }


// void getIthBit(int n,int i){
//     int mask = (1<<i);
//     int ans = n & mask;
//     if(ans==0){
//         cout<<"i=>bit == 0"<<endl;
//     }
//     else{
//         cout<<"i=>bit==1"<<endl;
//     }
// }
// int main(){
//     int n=10;
//     int i=3;
//     getIthBit(n,i);
// }



// void setIthBit(int n,int i){
//     int mask = (1<<i);
//      n = n|mask;

//     cout<<"updated no. : "<<n<<endl;
// }
// int main(){
//     int n=10;
//     int i=2;
//     setIthBit(n,i);
// }


// void clearIthBit(int &n ,int i){
//     int mask = ~(1<<1);
//         n = n & mask;
//         // cout<<"updated no. : "<<n<<endl;
    
// }

// void updateIthBit(int n, int i, int target){
//     //clear ith bit
//     clearIthBit(n,i);
//     //create mask
//     int mask = (target<<i);
//     //update n'
//     n = n|mask;
//     cout<<"updated no. : "<<n<<endl;
// }
// int main(){
//     int n=10;
//     int i=2;
//     int target = 1;
//     // clearIthBit(n,i);
//     updateIthBit(n,i,target);
// }


// void clearLastIthBit(int n , int i){
//     int mask = (-1<<i);
//         n = n & mask;
//         cout<<"updated no :"<<n<<endl;
    
// }
// int main(){
//     int n=15;
//     int i=2;
//     clearLastIthBit(n,i);
// }



// bool checkPow2(int n){
//     //count set bit
//     int count =0;

//     while(n!=0){
//         int lastBit = n&1;
//         if(lastBit==1){
//             count++;
//         }
//             n=n>>1;
//     }
//     if(count==1){
//         return true;
//     }
//     else{
//         return false;
//     }
// }
// int main(){
//     int n =16;
//     cout<<checkPow2(n);
// }



// bool fastCheckPow2(int n){
//     if((n&(n-1))==0){
//         return true;
//     }
//     else{
//         return false;
//     }
// }
// int main(){
//     int n=16 ;
//     cout<<fastCheckPow2(n);
// }


// int fastCountSetBit(int n){
//     int count =0;
//     while(n!=0){
//         count++;
//         n = n & (n-1);
//     }
//     return count;
// }
// int main(){
//     int n = 15;
//     cout<<fastCountSetBit(n);
// }



void clearBitsInRange(int n, int i, int j){
    int a = (-1<<(i+1));
    int b = ~(-1<<j);
    int mask = a|b;
    n = n & mask;
    cout<<"updated no : "<<n<<endl;

}
int main(){
     int n = 1023;
     int i=8;
     int j=1;
     clearBitsInRange(n,i,j);
}