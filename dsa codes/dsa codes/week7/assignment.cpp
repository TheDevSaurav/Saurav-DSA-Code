#include<iostream>
#include<vector>
using namespace std;
// last occurence of string

//left to right

// void lastOcc(string &s,char x,int i, int &ans){
//     //base case
//     if(i>=s.length()){
//         return;
//     }
//     //processing
//     if(s[i]==x){
//         ans =i;
//     }
//     //re
//     lastOcc(s,x,i+1,ans);
// }
// int main(){
//     string s;
//     cin>> s;
//     char x;
//     cin>>x;
//     int ans=-1;
//     lastOcc(s,x,0,ans);
//     cout<<ans<<endl;

// }


// //right to left
// void lastOcc(string &s,char x,int i, int &ans){
//     //base case
//     if(i<0){
//         return;
//     }
//     //processing
//     if(s[i]==x){
//         ans =i;
//         return;
//     }
//     //re
//     lastOcc(s,x,i-1,ans);
// }
// int main(){
//     string s;
//     cin>> s;
//     char x;
//     cin>>x;
//     int ans=-1;
//     lastOcc(s,x,s.size()-1,ans);
//     cout<<ans<<endl;

// }





//reverse a string

// void reverseStr(string &s,int start, int end){
//     //base case
//     if(start<=end){
//         return;
//     }
//     //processing
//     swap(s[start],s[end]);
//     //re
//     reverseStr(s,start+1,end-1);
// }
// int main(){
//     string s;
//     cin>>s;
//     reverseStr(s,0,s.size()-1);
//     cout<<s<endl;
//     return 0;
// }




//check palindrome
// bool isPalindrome(string&s, int start, int end){
//     //base cse
//     if(start==end){
//         return true;
//     }
//     //processing
//     if(s[start] != s[end]){
//         return false;
//     }
//     //RE
//      return isPalindrome(s,start+1,end-1);
// }
// int main(){
//     string s;
//     cin>>s;
//     cout<<isPalindrome(s,0,s.size()-1)<<endl;
// }



//print al the subarray using RE

void printSubarray_util(vector<int>&nums,int start,int end){
//base case
if(end==nums.size()){
    return;
}
//processing

for(int i=start;i<=end;i++){
    cout<<nums[i]<<" ";
}
cout<<endl;
//RE
printSubarray_util(nums,start,end+1);
}

void printSubarray(vector<int>&nums){
    for(int start=0;start<nums.size();start++){
        int end = start;
        printSubarray_util(nums,start,end);
    }
}
int main(){
    vector<int> nums{1,2,3,4,5};
    printSubarray(nums);
    return 0;
}


//backtracking assignment


//count inversion 

//method 1

long countInversion(vector<int>arr){
    int count =0;
    for(int i=0;i<arr.size();i++){
        for(int j=i+1;j<arr.size();j++){
            count = arr[i]>arr[j] ? count + 1 : count;
        }
    }
    return count;
} 
 //tc-> O(n^2);

//method 2 using merge sort

void merge(int arr[], int s, int e) {
    int c=0;
	int mid = (s+e)/2;

	int lenLeft = mid - s + 1;
	int lenRight = e - mid;

	//create left and right array
	int *left = new int[lenLeft];
	int *right = new int[lenRight];

	//copy values from original array to left array
	int k = s;
	//k -> starting index of left array values in original arrya
	for(int i=0; i<lenLeft; i++) {
		left[i] = arr[k];
		k++;
	}

	//copy values from original array to right array
	k = mid+1;
	for(int i=0; i<lenRight; i++) {
		right[i] = arr[k];
		k++;
	}

	//actual merge logic here
	//left array is already sorted
	//right array is already sorted
	int leftIndex = 0;
	int rightIndex = 0;
	//yahi pr galti karte h log
	int mainArrayIndex = s;

	while(leftIndex < lenLeft &&  rightIndex < lenRight) {
		
		if(left[leftIndex] < right[rightIndex] ) {
			arr[mainArrayIndex] =  left[leftIndex];
			mainArrayIndex++;
			leftIndex++;
		}
		else {
			arr[mainArrayIndex] =  right[rightIndex];
			mainArrayIndex++;
			rightIndex++;
            c +=mid-i+1//count inversion
		}
	}
 

	//2 more cases

	//1 case -> left array exhaust but right array me element abhi bhi bache hai
	while(rightIndex < lenRight) {
		arr[mainArrayIndex] =  right[rightIndex];
		mainArrayIndex++;
		rightIndex++;
	}
	

	//2nd case -> rigght array exhaust but left array me element abhi bhi bache hai
	while(leftIndex < lenLeft) {
		arr[mainArrayIndex] =  left[leftIndex];
		mainArrayIndex++;
		leftIndex++;
	}
    return c;
	//1 more step pending
	delete[] left;
	delete[] right;
}

void mergeSort(int arr[], int s, int e) {
	//base case
	if(s >= e) {
		return;
	}
	//break
	int mid = (s+e)/2;
    long c= 0;
	//recusive call for left array
	 c += mergeSort(arr,s, mid);
	//recusive call for right array
	 c += mergeSort(arr, mid+1, e);
	//merge 2 sorted arrays
	c += merge(arr, s, e);
    return c;
}

long countInversion(vector<int>arr){
   long c =0;
   c = mergeSort(arr,0,arr.size()-1);
   return c;
} 

