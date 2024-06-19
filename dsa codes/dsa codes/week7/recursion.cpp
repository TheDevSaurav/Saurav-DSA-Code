#include<iostream>
#include<limits.h>
#include<vector>
using namespace std;
//  int factorial(int n) {
//     //base case
//     if(n==1){
//         return 1;
//     }
//     if(n==0){
//         return 1;
//     }
//     //recursion call

//     int recursionKaAnswer=factorial(n-1);
// // processing
//     int finalAns=n*recursionKaAnswer;
//     return finalAns;
//  }
//  int main(){
//     cout<<factorial(5)<<endl;
//  }


  

// void print(int n){
//     //base case
//     if(n==1){
//         cout<<1<< " ";
//          return;
//     }
//     //processing
//     cout<<n<<" ";
   
//     //recursion call
//      print(n-1);

// }
// int main(){
//     print(5);
// }





// int pow(int n){
//     //base call
//     if(n==0){
//         return 1;
//     }

//     int ans = 2 * pow(n-1);
//     return  ans;
//     }
//     int main() {
//         cout<<pow(10)<<" ";
//     }






// int fib(int n) {
//     //base case
//     if(n==0){
//         return 0;
//     }
//     if(n==1){
//         return 1;
//     }

//     int ans = fib(n-1)+fib(n-2);
//     return ans;
// }
// int main(){
//     cout<<fib(7)<<' ';
// }







// int sum(int n) {
//     if(n==1){
//         return 1;
//     }

//     int ans=n + sum(n-1);
//     return ans;
// }
// int main(){
//     cout<<sum(4)<<" ";
// }










// void printArray(int arr[],int size, int index){
//     //base case
//     if(index>=size){
//         return;
//     }
//   //processing
//     cout<<arr[index]<<" ";

//     //recursive call

//     printArray(arr,size,index+1);
    
// }
// int main() {
//     int arr[] = { 10,20,30,40,50};
//     int size = 5;
//     int index = 0;
//     printArray(arr,size,index);
// }






// bool searchArray(int arr[],int size, int target,int index) {
//     //base case
//    if(index>=size){
//         return false;  
// }

// if(arr[index]==target){
//     return true;
// }
// //recursive call
// bool ans = searchArray(arr,size,target,index+1);
// return ans;
// }
// int main() {
//     int arr[] = {10,20,30,40,50};
//     int size = 5;
//     int index = 0;
//     int target = 50;
//     cout<<searchArray(arr,size,target,index)<<endl;
// }




// void findMin(int *arr,int size, int index, int &mini){
//     //base case
//     if(index>=size){
//         return;
//     }
//     //processing
//     mini = min(mini,arr[index]);
//     //recursive call
//     findMin(arr,size,index+1,mini);
// }
// int main(){
//       int arr[] = {10,20,30,40,50};
//     int size = 5;
//     int index = 0;
//     int mini =INT_MAX;
//     findMin(arr,size,index,mini);
//     cout<<mini<<endl;
// }





// //solve=>stores even no of array into vector
// void solve(int arr[],int size, int index, vector<int> &ans){
//     //base case
//     if(index>=size){
//         return;
//     }

//     //processing
//     if(arr[index]%2==0){
//         ans.push_back(arr[index]);
//     }
//     //recursive call
//     solve(arr,size,index+1,ans);
// }
// int main() {
//     int arr[]={2,1,6,4,8,};
//     int size=5;
//     int index=0;
//     vector<int>ans;
//     solve(arr,size,index,ans);
//     //priting vector
// //     for(int num: ans){
// //         cout<<num<<" "; 
//  for(int i=0;i<ans.size();i++){
//         cout<<ans[i]<<" ";
//     }
//     }



//     //hw max no. im array using recursion
//     void findMax(int *arr,int size, int index, int &maxi){
//     //base case
//     if(index>=size){
//         return;
//     }
//     //processing
//     maxi = max(maxi,arr[index]);
//     //recursive call
//     findMax(arr,size,index+1,maxi);
// }
// int main(){
//       int arr[] = {10,20,30,40,50};
//     int size = 5;
//     int index = 0;
//     int maxi =INT_MIN;
//     findMax(arr,size,index,maxi);
//     cout<<maxi<<endl;
// }
   







// void doubleArray(int arr[],int size, int index){
//     //base case
//     if(index>=size){
//         return;
//     }
//     //processing
//     arr[index]=2*arr[index];
//     //recursive call
//     doubleArray(arr,size,index+1);
// }
// int main(){
//       int arr[] = {10,20,30,40,50};
//     int size = 5;
//     int index = 0;
    
//     }






////find all the occurence
// bool searchArray(int arr[],int size, int target,int index) {
//     //base case
//    if(index>=size){
//         return;  
// }

// if(arr[index]==target){
//     return index;
// }
// //recursive call
// bool ans = searchArray(arr,size,target,index+1);
// return ans;
// }
// int main() {
//     int arr[] = {10,20,30,40,50};
//     int size = 5;
//     int index = 0;
//     int target = 50;
//     cout<<searchArray(arr,size,target,index)<<endl;
// }




// void printDigit(int num){
//     //base call
//     if(num==0){
//         return;
//     }
//     //processing
//     int digit = num % 10;
//     //update num
//     num = num/10;  
//     //recursive call
//     printDigit(num);
//     //processing
//     cout<<digit<<endl;
// }
// int main() {
//     int num=4215;
//     printDigit(num);
// }







// void printDigit(int num,vector<int>&ans){
//     //base call
//     if(num==0){
//         return;
//     }
//     //processing
//     int digit = num % 10;
//     //update num
//     num = num/10;  
//     //recursive call
//     printDigit(num,ans);
//     //processing
//    ans.push_back(digit);
// }
// int main() {
//     int num=4215;
//     vector<int>ans;
//     printDigit(num,ans);
//     for(int num: ans) {
//         cout<<num<<endl;
//     }
// }










//class3








// bool checkSorted(int arr[],int size,int index){
//     //base case
//     if(index>=size){
//         return true;
//     }

//     //processing
//     if(arr[index]>arr[index-1]){
//         //aage pass kr denga
//         //ab recursion sambhal lega
//       int ans = checkSorted(arr,size,index+1);
//       return ans;
//     }
//     else{
//         return false;
//     }
// }
// int main() {
//     int arr[] = {10,20,30,40,50,60};
//     int size =6;
//     int index=1;
//     bool isSorted = checkSorted(arr,size,index);
//     if(isSorted) {
//         cout<<"array is sorted";
//     }
//     else{
//         cout<<"not sorted";
//     }
// }






// int binarySearch(int arr[], int s , int e, int target){
//     //base call
//     if(s>e){
//         //element not found
//         return -1;
//     }
//     //processing
//     int mid= s+(e-s)/2;
//     if(arr[mid]==target){
//         return mid;
//     }
//     //baki recusion sambhal lega
//     if(arr[mid]<target) {
//         //rigth mai jao
//         return binarySearch(arr,mid+1,e,target);
//     }
//     else{
//         return binarySearch(arr,s,mid-1,target);
//     }
// }
// int main() {
//     int arr[]={10,20,30,40,50,60,70,80};
//     int size=8;
//     int start=0;
//     int end=size-1;
//     int target=80;

//     int foundindex = binarySearch(arr,start,end,target);
//     if(foundindex != 0){
//         cout<<"target found at : "<<foundindex<<endl;
//     }
//     else{
//         cout<<"target not found";
//     }
// }









// void findSubsequences(string str, string output, int index){
//     //base case
//     if(index>=str.length()){
//         //ans jo hai wo output string mai built ho chuka hai
//         //print krdo
//         cout<<"->"<<output<<endl;
//         return;
//     }
//     char ch = str[index];
//     //exclude
//     findSubsequences(str,output,index+1);
//     //include
//     output.push_back(ch);
//     findSubsequences(str,output,index+1);
// }
// int main() {
//     string str = "abc";
//     string output = " ";
//     int index = 0;
//     findSubsequences(str,output,index);

// }










// //coin change
// class Solution {
// public:

//     int solve(vector<int>& coins, int amount) {
//         //base case
//         if(amount == 0 ) {
//             return 0;
//         }

//         if(amount < 0 )
//             return INT_MAX;

//         int mini = INT_MAX;
        
//         for(int i=0; i<coins.size(); i++) {
//             int coin = coins[i];

//             //current coin ko sir tabhi use krenge 
//             //jab uski value <= amount hogi 
//             if(coin <= amount) {
//                 int recAns = solve(coins, amount - coin);
//                 if(recAns != INT_MAX){
//                     int ans = 1 + recAns;
//                     mini = min(mini, ans);
//                 }    
//             }
            
//         }
//         return mini;
//     }


//     int coinChange(vector<int>& coins, int amount) {
//        int ans = solve(coins, amount);

//        if(ans == INT_MAX)
//         return -1;
//         else
//         return ans;
        
//     }
// };

// //max sum of non-adjacent elements
// class Solution {
// public:
//     int solve(vector<int>& nums, int size, int index) {
//         //base case
//         if(index >= size ) {
//             return 0;
//         }

//         //chori karlo -> ith index pr
//         int option1 = nums[index] + solve(nums, size, index+2);

//         //chori mat karo  -> ith index pr
//         int option2 = 0 + solve(nums, size, index+1);

//         int finalAns = max(option1, option2);
//         return finalAns;
//     }
//     int rob(vector<int>& nums) {
//         int size = nums.size();
//         int index = 0;
//         int ans = solve(nums, size, index);
//         return ans;

        
//     }
// };
//recursion marathom ///////////////////////////////////////////////////////////////////////////////



//count dearrangemnt
// int solve(int n){
//     //base case
//     if(n==1){
//         return 0;

//     }
//     if(n==2){
//         return 1;
//     }
//     int ans = (n-1)*(solve(n-1)+solve(n-2));
//     return ans;
// }
// int main() {
//     int n=4;
//     cout<<solve(n)<<endl;
// }


//painting fence algrothim

int getPaintWays(int n,int k){
    //base case
    if(n==1){
        return k;
    }
    if(n==2){
        return k+k*(k-1);
    }
    //recursive relation
    int ans=(k-1)*(getPaintWays(n-1,k)+getPaintWays(n-2,k));
    return ans;
}
int main(){
    int n=3;
    int k=3;
    int ans=getPaintWays(n,k);
    cout<<ans<<endl;
}



























