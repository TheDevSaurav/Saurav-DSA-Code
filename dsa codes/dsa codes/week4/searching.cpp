#include<iostream>
using namespace std;

// int binarySearch(int arr[],int n, int target){
//     int start =0;
//     int end= n-1;
//     int mid =(start+end)/2;

//     while(start<=end){
//         if(arr[mid]==target){
//             return mid;
//         }
//         if(target > arr[mid]){
//             start = mid+1;
//         }
//         if(target<arr[mid]){
//             end=mid-1;
//         }

//         mid=(start+end)/2;
//     }
//     return -1;
// }
// int main() {
//     int arr[] = {10,20,30,40,50,60,70,80,90};
//     int target =90; 
//     int n=9;
//     int ansIndex = binarySearch(arr,n,target);

//     if(ansIndex == -1){
//         cout<<"element not found"<<endl;
//     }
//     else{
//         cout<<"element found at index : "<<ansIndex<<endl;
//     }

// }




// int findFirstOccurence(int arr[],int n, int target){
//     int s=0;
//     int e=n-1;
//     int mid=(s+e)/2;
//     int ans =-1;

//     while(s<=e) {
//         if(target == arr[mid]) {
//             ans=mid;
//             e=mid-1;
//         }
//         else if(target>arr[mid]) {
//             s=mid+1;
//         }
//         else if(target < arr[mid]){
//             e=mid-1;
//         }
//         mid=(s+e)/2;
//     }
//     return ans;

// }

// int main() {
//     int arr[]={10,20,30,30,30,40,50,60};
//     int n =8;
//     int target = 30;
//      int ansIndex= findFirstOccurence(arr,n,target);

//      if(ansIndex == -1){
//         cout<<"element not found"<<endl;

//      }
//      else{
//         cout<<"element found at index : " <<ansIndex<<endl;;
//      }
// }








// int findLastOccurence(int arr[],int n, int target){
//     int s=0;
//     int e=n-1;
//     int mid=(s+e)/2;
//     int ans =-1;

//     while(s<=e) {
//         if(target == arr[mid]) {
//             ans=mid;
//             s=mid+1;
//         }
//         else if(target>arr[mid]) {
//             s=mid+1;
//         }
//         else if(target < arr[mid]){
//             e=mid-1;
//         }
//         mid=(s+e)/2;
//     }
//     return ans;

// }

// int main() {
//     int arr[]={10,20,30,30,30,40,50,60};
//     int n =8;
//     int target = 30;
//      int ansIndex= findLastOccurence(arr,n,target);

//      if(ansIndex == -1){
//         cout<<"element not found"<<endl;

//      }
//      else{
//         cout<<"element found at index : " <<ansIndex<<endl;;
//      }
// }








// int findTotalOccurence(int arr[],int n, int target){
//     int firstOcc=findFirstOccurence(arr,n,target);
//     int lastOcc=findLastOccurence(arr,n,target);
//     int total = lastOcc-firstOcc+1;
//     return total;
// }    
// int main() {
//     int arr[]={10,20,30,30,30,40,50,60};
//     int n =8;
//     int target = 30;

//     int ans = findTotalOccurence(arr,n,target);
//     cout<< "total occ is: "<<ans<<endl; 
// }







// int findMissingElement(int arr[], int n) {
//     int s=0;
//     int e=n-1;
//     int mid=s +  (e-s)/2;

//     int ans =-1;

//     while(s<=e){
//     int diff = arr[mid]-mid;

//     if(diff==1){
//         s=mid+1;
//     }
//     else{
//         ans=mid;
//         e=mid-1;
//     }
//     mid=s+  (e-s)/2;
//     }
//     if(ans+1==0)
//     return n+1;
//     return ans+1;

// }
// int main () {
// int arr[] = {1,2,3,4,6,7,8,9,10};
// int n=9;
// cout<<"missing element is : "<<findMissingElement(arr,n);
// }







// int getQuotient(int divisor, int dividend){
//     int s=0;
//     int e=dividend;
//     int mid= s+(e-s)/2;
//     int ans=-1;

//     while(s<=e){
//         if(mid*divisor==dividend){
//             return mid;
//         }
//         else if(mid*divisor<dividend){
//             //store ans then right
//             ans =mid;
//             s=mid+1;
//         }
//         else{
//             e=mid-1;
//         }
//         mid= s+(e-s)/2;
//     }
//     return ans;
// }
// int main() {
//     int divisor =7;
//     int dividend =-29 ;

//     int ans = getQuotient(abs(divisor),abs(dividend));

//     if((divisor>0 && dividend <0) || (divisor<0 && dividend >0)) {
//         ans=0-ans;
//     }
//     cout<<"final ans is : "<<ans<<endl;

// }







// int searchNearlySorted(int arr[],int n, int target) {
//     int s=0;
//     int e=n-1;
//     int mid=s+(e-s)/2;

//     while(s<=e){
//         if(mid-1>=0 && arr[mid-1]==target){
//             return mid-1;
//         }
//         if(arr[mid]==target){
//             return mid;
//         }
//         if(mid+1<n &&arr[mid+1]==target){
//             return mid+1;
//         }
//         if(target> arr[mid]){
//             s=mid+2;
//         }
//         else{
//             e=mid-2;
//         }
//         mid=s+(e-s)/2;
//     }
//     return -1;
// }
// int main() {
//     int arr[]={20,10,30,50,40,70,60};
//     int n=7;
//     int target=60;

//     int targetIndex = searchNearlySorted(arr,n,target);

//     if(targetIndex==-1){
//         cout<<"element not found"<<endl;
//     }
//     else{
//         cout<<"element found at index:"<<targetIndex<<endl;
//     }
// }






// int findOccuringElement(int arr[],int n) {
//     int s=0;
//     int e=n-1;
//     int mid=s+(e-s)/2;

//     while(s<=e) {
//         //single element
//         if(s==e) {
//             return s;
//         }
//         //even or odd

//         if(mid & 1) { //mid&1 ->true -> odd
//         if(mid-1 >=0 && arr[mid-1]==arr[mid]) {
//             s=mid+1;
//         }
//         else{
//             e=mid-1;
//         }

//         }
//         else{
//             //even
//             if(mid+1<n && arr[mid]==arr[mid+1]) {
//                 s=mid+2;
//             }
//             else{
//                 //ans/left
//                 e=mid;
//             }

//         }
//         mid=s+(e-s)/2;
//     }
//     return -1;
// }
// int main() {
//     int arr[]= {10,10,2,2,3,3,2,5,5,6,6,7,7};
//     int n=13;
//     int ansIndex = findOccuringElement(arr,n);
//     cout<<"final ans is : "<<ansIndex<<endl;
// }