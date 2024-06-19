#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

void print(vector<int> &v){
    for(int i=0; i<v.size(); i++){
        cout<<v[i]<<" ";
       
    }
     cout<<endl;
}
// void bubbleSort(vector<int> &v) {
//     int n = v.size();
//     for(int i=0;i<n-1;i++){
//         for( int j=0; j<n-i-1;j++){
//         if(v[j]>v[j+1]){
//             swap(v[j],v[j+1]);
//         }
//         }
//     }
// }


// void selectionSort(vector<int> &v){
//     int n=v.size();
//     for(int i=0;i<n-1;i++){
//         int minIndex=i;
//         for( int j=i+1;j<n;j++){
//            if(v[j]<v[minIndex]){
//              minIndex=j;
//            }
//         }
//         swap(v[i],v[minIndex]);
//     }
// }


// void insertionSort(vector<int> &v) {
//     int n = v.size();
//     for(int i=0;i<n;i++){
//         int key = v[i];
//         int j=i-1;
        
//         while(j>=0 && v[j]>key){
//             v[j+1]=v[j];
//             j--;
//         }
//         v[j+1]=key;
//     }
// }
// int main() {
// // vector<int> v={5,4,3,2,1};
// vector<int> v={44,55,33,22,11};

// // bubbleSort(v);
// // selectionSort(v);
// insertionSort(v);
// print(v);
// }




bool mycomp(int &a, int &b){
    // return a<b; // inc order
    return a>b; //dec order
}

 int main() {

vector<int> v={44,55,33,22,11};
sort(v.begin(),v.end(),mycomp);
print(v);
}