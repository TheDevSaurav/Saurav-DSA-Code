#include <iostream>
#include<vector>
using namespace std;

// void merge(int arr[], int s, int e) {

// 	int mid = (s+e)/2;

// 	int lenLeft = mid - s + 1;
// 	int lenRight = e - mid;

// 	//create left and right array
// 	int *left = new int[lenLeft];
// 	int *right = new int[lenRight];

// 	//copy values from original array to left array
// 	int k = s;
// 	//k -> starting index of left array values in original arrya
// 	for(int i=0; i<lenLeft; i++) {
// 		left[i] = arr[k];
// 		k++;
// 	}

// 	//copy values from original array to right array
// 	k = mid+1;
// 	for(int i=0; i<lenRight; i++) {
// 		right[i] = arr[k];
// 		k++;
// 	}

// 	//actual merge logic here
// 	//left array is already sorted
// 	//right array is already sorted
// 	int leftIndex = 0;
// 	int rightIndex = 0;
// 	//yahi pr galti karte h log
// 	int mainArrayIndex = s;

// 	while(leftIndex < lenLeft &&  rightIndex < lenRight) {
		
// 		if(left[leftIndex] < right[rightIndex] ) {
// 			arr[mainArrayIndex] =  left[leftIndex];
// 			mainArrayIndex++;
// 			leftIndex++;
// 		}
// 		else {
// 			arr[mainArrayIndex] =  right[rightIndex];
// 			mainArrayIndex++;
// 			rightIndex++;
// 		}
// 	}
 

// 	//2 more cases

// 	//1 case -> left array exhaust but right array me element abhi bhi bache hai
// 	while(rightIndex < lenRight) {
// 		arr[mainArrayIndex] =  right[rightIndex];
// 		mainArrayIndex++;
// 		rightIndex++;
// 	}
	

// 	//2nd case -> rigght array exhaust but left array me element abhi bhi bache hai
// 	while(leftIndex < lenLeft) {
// 		arr[mainArrayIndex] =  left[leftIndex];
// 		mainArrayIndex++;
// 		leftIndex++;
// 	}
// 	//1 more step pending
// 	delete[] left;
// 	delete[] right;
// }

// void mergeSort(int arr[], int s, int e) {
// 	//base case
// 	if(s >= e) {
// 		return;
// 	}
// 	//break
// 	int mid = (s+e)/2;
// 	//recusive call for left array
// 	mergeSort(arr,s, mid);
// 	//recusive call for right array
// 	mergeSort(arr, mid+1, e);
// 	//merge 2 sorted arrays
// 	merge(arr, s, e);
// }

// int main() {

// 	int arr[] = {2,1,6,9,4,5};
// 	int size = 6;
// 	int s = 0;
// 	int e = size - 1;

// 	cout << "Before merge sort: " << endl;
// 	for(int i=0; i<size; i++) {
// 		cout << arr[i] << " ";
// 	}
// 	cout << endl;
	
// 	mergeSort(arr,s,e);

// 	cout << "After merge sort: " << endl;
// 	for(int i=0; i<size; i++) {
// 		cout << arr[i] << " ";
// 	}
// 	cout << endl;



// 	return 0;
// }




//backtracking

/////permutation of string//////////////////



// #include <iostream>
// #include<vector>
// using namespace std;

// void printPermutation(string &str, int index) {
// 	//base case
// 	if(index >= str.length() ) {
// 		cout << str << " ";
// 		return;
// 	}

// 	for(int j = index; j<str.length(); j++) {
// 		swap(str[index], str[j]);
// 		//recursion bhaiya
// 		printPermutation(str, index+1);
// 		//backtracking
// 		swap(str[index], str[j]);
// 	}
	
// }







//rat in maze



//a function that will handle all the below mentioned possibilities:
//posssiblity hai
	//-> path closed
	//out if bound 
	// check is pos is already visited
bool isSafe(int srcx, int srcy, int newx, int newy, int maze[][4], int row, int col,  vector<vector<bool > > &visited) {
	if(
		(newx >=0 && newx <row) &&
		(newy >=0 && newy < col) &&
		maze[newx][newy] == 1 &&
		visited[newx][newy] == false
		) {
		return true;
		}
	else {
		return false;
	}
}


void printAllPath(int maze[][4], int row, int col, int srcx, int srcy, string &output, vector<vector<bool > > &visited) {

	//base case
	//destination coordinates are [row-1], [col-1]
	if(srcx == row-1 && srcy == col-1) {
		//reached destination
		cout << output << endl;
		return;
	}


	//1 case solve karo and baakai recursion sambhal lega

	//UP
	int newx = srcx-1;
	int newy = srcy;
	if(isSafe(srcx, srcy, newx, newy,maze,row,col,visited )) {
		//mark visited
		visited[newx][newy] = true;
		//call recursion
		output.push_back('U');
		printAllPath(maze, row, col, newx, newy, output , visited );
		//backtracking
		output.pop_back();
		visited[newx][newy] = false;
	}


	//RIGHT
	 newx = srcx;
	 newy = srcy+1;
	if(isSafe(srcx, srcy, newx, newy,maze,row,col,visited )) {
		//mark visited
		visited[newx][newy] = true;
		//call recursion
		output.push_back('R');
		printAllPath(maze, row, col, newx, newy, output , visited );
		//backtracking
		output.pop_back();
		visited[newx][newy] = false;
	}

	//DOWN
	newx = srcx+1;
	 newy = srcy;
	if(isSafe(srcx, srcy, newx, newy,maze,row,col,visited )) {
		//mark visited
		visited[newx][newy] = true;
		//call recursion
		output.push_back('D');
		printAllPath(maze, row, col, newx, newy, output , visited );
		//backtracking
		output.pop_back();
		visited[newx][newy] = false;
	}


	//LEFT
	newx = srcx;
	 newy = srcy-1;
	if(isSafe(srcx, srcy, newx, newy,maze,row,col,visited )) {
		//mark visited
		visited[newx][newy] = true;
		//call recursion
		output.push_back('L');
		printAllPath(maze, row, col, newx, newy, output , visited );
		//backtracking
		output.pop_back();
		visited[newx][newy] = false;
	}
	
}


int main() {

	int maze[4][4] = {
	{1,0,0,0},
	{1,1,0,0},
	{1,1,1,0},
	{1,1,1,1}
	};
	int row = 4;
	int col = 4;

	int srcx = 0;
	int srcy = 0;
	string output = "";

	//craete visited 2D ARRAY
	vector<vector<bool > > visited(row, vector<bool>(col, false));
	
	if(maze[0][0] == 0) {
		//src position is Closed, that means RAT cannot move
		cout << "No Path Exists" << endl;
	}
	else {
		visited[srcx][srcy] = true;
		printAllPath(maze, row, col, srcx, srcy, output, visited);
	}
	
	



	

	// string str = "abc";
	// int index = 0;
	// printPermutation(str, index);




	return 0;
}