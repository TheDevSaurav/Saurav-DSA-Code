#include<iostream>
using namespace std;

// int main() {
//   int arr[5];
//   int n=5;
//   for(int i=0;i<n;i++) {
//     cout<<"ENTER THE VALUE FOR INDEX"<<i<<" "<<endl;
//     cin>>arr[i];
//     cout<<endl;
//   }
//   cout<<"PRINTING THE ARRAY"<<endl;
//   for(int i=0;i<n;i++){
//     cout<<arr[i]<<" ";
//   }
// }



// int main() {
//     int arr[5];
//     int n=5;
//     for(int i=0; i<n;i++) {
//       cin>>arr[i];
//     }
//     int sum=0;
//     for(int i=0;i<n;i++){
//         sum = sum + arr[i];
//     }
//     cout<<"sum is : "<<sum<<endl;
    
// }


//  int main() {
//     int arr[5];
//     int n=5;
//     for(int i=0;i<n;i++) {
//           cout<<"enter array :"<<i<<" "<<endl;
//     cin>>arr[i];
//     }
//     int target=10;
//     bool flag = 0;

//     for(int i=0;i<n;i++){
//         if(arr[i]==target){
//             flag=1;
//             break;
//         }
//     }
//     if(flag == 1) {
//         cout<<"target found"<<endl;
//     }
//     else {
//         cout<<"target not found"<<endl;
//     }
//  }



// void printArray(int arr[], int size) {
//     for(int i=0; i<0;i++) {
//         cout<<arr[i]<<" ";
//     }
//     cout<<endl;
// }

// int main() {
//     int arr[5] = {6,8,9,6,3};
//     int size =5;
//     printArray(arr,size);
// }



// bool linearSearch(int arr[], int size,int target){
//     for(int i=0;i<size;i++) {
//         if(arr[i]==target) {
//             return true;
//         }
//         else {
//             return false;
//         }
//     }
// }
// int main() {
//     int arr[5] = {8,6,9,2,5};
//     int size = 5;
//     int target = 5;

//     bool ans = linearSearch(arr,size,target);
//     if(ans==1){
//         cout<<"target found"<<endl;
//     }
//     else{
//         cout<<"Target not found"<<endl;
//     }
// }



// void countZeroONe(int arr[] , int size) {
//     int zerocount = 0;
//     int onecount =0;
//     for(int i=0; i<size; i++) {
//         if(arr[i]==0) {
//             zercount++;
//         }
//     else if (arr[i]==1){
//         onecount++;
// }
//     }
//   cout<<"zerocount"<<zercount<<endl;
//   cout<<"onecount"<<onecount<<endl;
// }

// int main() {
//     int arr[]= {0,0,1,0,1,0,1,0,1,0,1,0,0,1};
//     int size = 14;

//     countZeroONe(arr,size);
// }



// #include<limits.h>
// int findMiniumArray(int arr[],int size) {
//     int minAns = INT_MAX;

//     for(int i=0; i<size;i++) {
//         if(arr[i]<minAns){
//             minAns = arr[i];
//         }
//     }
//     return minAns;
// }

// int main() {
//     int arr[] = {2,6,5,2,8,9,3};
//     int size =15;

//     int minimum = findMiniumArray(arr,size);
//     cout<<"minumum no. is : "<<minimum<<endl;
// }


// void reverseArray(int arr[],int size) {
//     int left =0;
//     int right = size-1;

//     while(left<=right) {
//         swap(arr[left],arr[right]);
//         left++;
//         right--;
//     }
//       for(int i=0;i<size;i++) {
//         cout<<arr[i]<<" ";
//       }
// }
// int main() {
//     int arr[] = {1,2,3,4,5,6};
//     int size = 6;
//     reverseArray(arr,size);
// }


// void extremePrint(int arr[],int size) {
//     int left =0;
//     int right = size-1;
//     while(left<=right) {
//     if(left==right) {
//         cout<<arr[left]<<endl;
//     }
//     else{
//         cout<<arr[left]<<endl;
//         cout<<arr[right]<<endl;
//     }
//     left++;
//     right--;
// }
// }
// int main() {
//     int arr[6] = {1,5,3,6,4,9  };
//     int size = 6;
//     extremePrint(arr,size);
// }


// int getUniqueElement(int arr[], int size) {
//     int ans =0;
//     for(int i=0;i<size;i++) {
//         ans = ans^arr[i];
//     }
//     return ans;
// }

// int main() {
//     int arr[] = {2,10,11,10,2,13,15,13,15};
//     int size= 9;
//     int finalans = getUniqueElement(arr,size);
//     cout<<"final answer is : "<<finalans<<endl;
// }


// int main() {
//     int arr[] ={2,5,2,6};
//     int n=5;
//     for(int i=0; i<n; i++){
//         for(int j=0; j<n;j++){
//             cout<<arr[i]<<","<<arr[j]<<" "<<endl;
//         }
//     }
// }


// int main() {
//     int arr[] ={2,5,2,6};
//     int n=5;
//     for(int i=0; i<n; i++){
//         for(int j=0; j<n;j++){
//             for(int k=0;k<n;k++){
//  cout<<arr[i]<<","<<arr[j]<<","<<arr[k]<<" "<<endl;
//             }
           
//         }
//     }
// }



// void sortZeroOnes(int arr[],int size) {
//     int zerocount = 0;
//     int onecount =0;
//     for(int i=0;i<size;i++) {
//         if(arr[i]==0){
//             zerocount++;  
//         }
//         else if (arr[i]==1){

//             onecount++;
//         }
//     }
//     int index=0;
//         while(zerocount--){
//             arr[index]=0;
//             index++;
//         }
//         while(onecount--) {
//             arr[index] = 1;
//             index++;
//         }
// }
// int main() {
//     int arr[]= {1,0,1,0,1,0,1,1,0,1,0,1,0,1,0,0,1,0};
//     int size =18;
//     sortZeroOnes(arr,size);
//     for(int i=0;i<size;i++){
//         cout<<arr[i]<<endl;
//     }
// }