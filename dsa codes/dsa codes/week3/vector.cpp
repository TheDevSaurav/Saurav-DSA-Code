#include<iostream>
#include<vector>
using namespace std;

// int main() {
//     vector<int>arr;
//     cout<<arr.size()<<endl;
//     cout<<arr.capacity()<<endl;

//     arr.push_back(5);
//     arr.push_back(6);

//     for(int i=0;i<arr.size();i++){
//     cout<<arr[i]<<" ";
// }
// cout<<endl;
// }



// int main() {
//     int n;
//     cout<<"enter the value of n"<<endl;
//     cin>>n;
//     vector<int>arr(n,-1);
//     cout<<"size of array"<<arr.size()<<endl;
//     cout<<"capactity of array"<<arr.capacity()<<endl;

//     for(int i=0;i<arr.size();i++){
//         cout<<arr[i]<<"";
//     }
//     cout<<endl;
// }



// int main() {
//     int arr[] ={1,3,5,7,9};
//     int sizeA= 5;
//     int brr[] = {2,4,6,8};
//     int sizeB =4;

//     vector<int>ans;

//     for(int i=0; i<sizeA;i++){
//     ans.push_back(arr[i]);
//     }
//     for(int j=0;j<sizeB;j++){
//         ans.push_back(brr[j]);
//     }
//     cout<<"printing array"<<endl;
//     for(int i=0;i<ans.size();i++){
//         cout<<ans[i]<<endl;
//     }

// }




// int main(){
//     vector<int>arr{1,2,3,4,6,8};
//     vector<int>brr{3,4,10};

//     vector<int>ans;

//     for(int i=0;i<arr.size();i++){
//         int element=arr[i];
//         for(int j=0;j<brr.size();j++){
//             if(element==brr[j]){
//                 brr[j]=-1;
//                 ans.push_back(element);
//             }
//         }
//     }

//     for(auto value : ans) {
//         cout<<value<<" ";
//     }
// }


// int main() {
//     vector<int>arr{10,20,40,60,70};
//     int sum=80;
//     for(int i=0;i<arr.size();i++){
//      int element = arr[i];
//       for(int j=j+1; j<arr.size(); j++){
//         if(element+ arr[j] == sum){
//             cout<<"pair found"<<element<<","<<arr[j]<<" "<<endl;
//         }
//     }
   
//     }
// }


////////////////////////////////////////////////2D array/////////////////////////////////////////////////////////////

// void printArray(int arr[][4], int row ,int col)  {
//     for(int i=0;i<row;i++){for(int j=0;j<col;j++){
//             cout<<arr[i][j]<<" ";
//         }
//         cout<<endl;
//         }

// }
// int main() {
//     int arr[3][4] ={
//         {1,2,3,4},{5,6,7,8},{9,10,11,12}
//     };
//     int row=3;
//     int col=4;
//     printArray(arr,row,col);
// }

// int main() {
//     int arr[3][4];
//     int row=3;
//     int col=4;

// for(int i=0;i<row;i++){
//     for(int j=0;j<col;j++){
//         cout<<"enter row input : "<<i<<"enter col input : "<<j"<<endl;
//         cin>>arr[i][j];

//     }
// }
// }

// bool findTarget(int arr[][4], int row , int col,int target) {
//     for(int i=0;i<row;i++){
//         for(int j=0; j<col;j++){
//             if(arr[i][j]==target) {
//             return true;  
//             }
//         }
//     }   
//     return false;
// }
// int main() {
//     int arr[3][4] = {
//        {5,6,5,2},{2,6,2,4},{5,8,6,4}
//     };
//     int row=3;
//     int col=4;
//     int target=8;

//     cout<<"found or not : "<<findTarget(arr,row,col,target)<<endl;
// }





// #include<limits.h>
// int findMax(int arr[][4], int row, int col) {
//     int maxAns = INT_MIN;

//     for(int i=0;i<row;i++){
//         for(int j=0;j<col;j++){
//             if(arr[i][j]>maxAns){
//                 maxAns=arr[i][j];
//             }
//         }
//     }
//     return maxAns;
// }
// int main() {
//     int arr[3][4]={
//     {1,2,3,4},{5,6,7,8},{9,10,11,12}
//     };

//     int row =3;
//     int col =4;

//     cout<<"printing the max no. : "<<findMax(arr,row,col)<<endl;;
// }




// void rowWiseSum(int arr[][4],int row,int col){
//     for(int i=0;i<row;i++){
//        int sum=0;
//         for(int j=0;j<col;j++){
//             sum=sum+arr[i][j];
//         }
//         cout<<sum<<endl;
//     }
// }
// int main() {
//      int arr[3][4]={
//      {1,2,3,4},{5,6,7,8},{9,10,11,12}
//      };

//      int row=3;
//      int col=4;
//      rowWiseSum(arr,row,col);
// }



// void transpose(int arr[][4], int row, int col){
//     for(int i=0; i<row;i++){
//         for(int j=i;j<row;j++){
//             swap(arr[i][j],arr[j][i]);
//         }
//     }
//     cout<<arr[i][j]<<endl;
// }
// int main(){
//     int arr[4][4]={
//       {1,4,5,3},{3,9,6,5},{4,6,2,8},{4,6,2,7}
//     };
//     int row =4;
//     int col=4;
//     transpose(arr,row,col);
// }


////////////////////////2d vector////////////////////////////////////


// int main() {
//     vector<vector<int> >arr(5,vector<int>(10,0));

//     for(int i=0;i<arr.size();i++){
//         for(j=0;j<arr[i].size();j++)  {
//             cout<<arr[i][j]<<" ";
//         }
//         cout<<endl;
//     }
// }