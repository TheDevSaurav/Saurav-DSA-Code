
//square
//#include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;
//   for(int row=0;row<n;row=row+1) {
//     for(int col=0;col<n;col=col+1){
//         cout<<"*";
//     }
//      cout<<endl;
//   }
 
// }


// rectangle
// #include<iostream>
// using namespace std;
// int main() {
//     for(int row=0;row<3;row=row+1){
//         for(int col=0;col<5;col=col+1) {
//             cout<<"*";
//         }
//         cout<<endl;
//     }
// }

// hollow rectangle
// #include<iostream>
// using namespace std;
// int main() {
//     int n;
//     cin>>n;
//     for(int row=0;row<n;row=row+1){
//         for(int col=0;col<n;col=col+1){
//             if(row==0 || row==n-1){
//                 cout<<"*";
//             }
//             else{
//                 if(col==0 || col==n-1){
//                     cout<<"*";
//                 }
//                 else{
//                     cout<<" ";
//                 }
//             }
            
//         }
//         cout<<endl;
//     }
// }


// half pyramid
// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;
//     for( int row=0;row<n;row=row+1){
//       for(int col=0;col<row+1;col=col+1){
//         cout<<"*";
        
//       }  
//       cout<<endl;

//     }

// }



//inverted half pyramid
// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;
//     for( int row=0;row<n;row=row+1){
//       for(int col=0;col<n-row;col=col+1){
//         cout<<"*";
        
//       }  
//       cout<<endl;

//     }

// }

// numerical half pyramid
// #include<iostream>
// using namespace std;
// int main() {
//     int n;
//     cin>>n;
//     for(int row=0;row<n;row=row+1){
//         for(int col=0;col<row+1;col=col+1){
//             cout<<col+1<<"";
//         }
//         cout<<endl;
//     }
// }

 //inverted numerical half pyramid
// #include<iostream>
// using namespace std;
// int main() {
//     int n;
//     cin>>n;
//     for(int row=0;row<n;row=row+1){
//         for(int col=0;col<n-row;col=col+1){
//             cout<<col+1<<"";
//         }
//         cout<<endl;
//     }
// }

// full pyramid
// #include<iostream>
// using namespace std;
// int main() {
//     int n;
//     cin>>n;
//     for(int row=0;row<n;row=row+1){
//         //spaces
//         for(int col=0;col<n-row-1;col=col+1){
//             cout<<" ";
//         }
//         for(int col=0; col<row+1; col=col+1){
//             cout<<"* ";
//         }
//         cout<<endl;
//     }
// }

// inverted full pyramid
// #include<iostream>
// using namespace std;
// int main() {
//     int n;
//     cin>>n;

//     for(int row=0;row<n;row=row+1){
//         //spaces
//         for(int col=0;col<row;col=col+1) {
//             cout<<" ";
//         }
//         //stars
//         for(int col=0;col<n-row;col=col+1){
//             cout<<"* ";

//         }
//         cout<<endl;
//     }

// }


// diamond pattern
// #include<iostream>
// using namespace std;
// int main() {
//     int num;
//     cin>>num;
//     int n=num/2;
//     for(int row=0;row<n;row=row+1){
//         //spaces
//         for(int col=0;col<n-row-1;col=col+1){
//             cout<<" ";
//         }
//         for(int col=0; col<row+1; col=col+1){
//             cout<<"* ";
//         }
//         cout<<endl;
//     }
    
//     for(int row=0;row<n;row=row+1){
//         //spaces
//         for(int col=0;col<row;col=col+1) {
//             cout<<" ";
//         }
//         //stars
//         for(int col=0;col<n-row;col=col+1){
//             cout<<"* ";

//         }
//         cout<<endl;
//     }
// }

// hollow pyramid
// #include<iostream>
// using namespace std;
// int main() {
//     int n;
//     cin>>n;
//     for(int row=0;row<n;row=row+1){
//         //space
//         for(int col=0;col<n-row-1;col=col+1) {
//             cout<<" ";
//         }
//         //stars
//         for(int col=0;col<row+1;col=col+1){
//             if(col==0 || col==row + 1 - 1) {
//                 cout<<"* ";
//             }
//             else{
//                 cout<<"  ";
//             }
//         }
//        cout<<endl; 
//     }
        
// }




// inverted hollow pyramid
// #include<iostream>
// using namespace std;
// int main() {
//     int n;
//     cin>>n;
//     for(int row=0;row<n;row=row+1){
//         //space
//         for(int col=0;col<row;col=col+1) {
//             cout<<" ";
//         }
//         //stars
//         for(int col=0;col<n-row;col=col+1){
//             if(col==0 || col==n - row - 1) {
//                 cout<<"* ";
//             }
//             else{
//                 cout<<"  ";
//             }
//         }
//        cout<<endl; 
//     }
        
// }



// hollow diamond
// #include<iostream>
// using namespace std;
// int main() {
//     int num;
//     cin>>num;
//     int n = num/2;
//     for(int row=0;row<n;row=row+1){
//         //space
//         for(int col=0;col<n-row-1;col=col+1) {
//             cout<<" ";
//         }
//         //stars
//         for(int col=0;col<row+1;col=col+1){
//             if(col==0 || col==row + 1 - 1) {
//                 cout<<"* ";
//             }
//             else{
//                 cout<<"  ";
//             }
//         }
//        cout<<endl; 
//     }

//      for(int row=0;row<n;row=row+1){
//         //space
//         for(int col=0;col<row;col=col+1) {
//             cout<<" ";
//         }
//         //stars
//         for(int col=0;col<n-row;col=col+1){
//             if(col==0 || col==n - row - 1) {
//                 cout<<"* ";
//             }
//             else{
//                 cout<<"  ";
//             }
//         }
//        cout<<endl; 
//     }
        
// }





// #include<iostream>
// using namespace std;
// int main() {
//     int num;
//     cin>>num;
//     int n = num/2;

// for(int row=0;row<n;row=row+1){
//     //inverted pyramid
//     for(int col=0;col<n-row;col=col+1){
//         cout<<"*";
//     }
//     //full pyramid
//     for(int col=0; col<2*row+1;col=col+1){
//         cout<<" ";
//     }
      //inverted pyramid
//     for(int col=0; col<n-row;col=col+1){
//         cout<<"*";
//     }
//     cout<<endl;
//  }

//  for(int row=0;row<n;row=row+1){
//     //inverted pyramid
//     for(int col=0;col<row+1;col=col+1){
//         cout<<"*";
//     }
//     //full pyramid
//     for(int col=0; col<2*n-2*row-1;col=col+1){
//         cout<<" ";
//     }
//     for(int col=0; col<row+1;col=col+1){
//         cout<<"*";
//     }
//     cout<<endl;
//  }
// }




// #include<iostream>
// using namespace std;
// int main() {
//     int n;
//     cin>>n;
//     for(int row=0;row<n;row=row+1) {
//         for(int col=0;col<2*row+1;col=col+1) {
//             if(col%2==0) {
//                 cout<<row+1;
//                 }
//                 else{
//                     cout<<"*";
//             }  
//         }
//           cout<<endl;
//     }
// }


// #include<iostream>
// using namespace std;
// int main() {
//     int n;
//     cin>>n;
//     for(int row=0;row<n;row=row+1){
//         for(int col=0;col<n-row;col=col+1){
//             if(row==0 || row==n-1) {
//                 cout<<"*";
//             }
//             else{
//                 if(col==0||col==n-row-1){
//                    cout<<"*"; 
//                 }
//                 else{
//                     cout<<" ";
                    
//                 }
//             }
//         }
//         cout<<endl;
//     }
// }



// #include<iostream>
// using namespace std;
// int main() {
//     int n;
//     cin>>n;
//     for(int row=0;row<n;row=row+1) {
//         char ch;
//         for(int col=0;col<row+1;col=col+1){
//             int number = col+1;\
//             ch = number + 'A' - 1;
//             cout<<ch;
//         }
//         for (char alphabet=ch; alphabet>'A';)
//         {
//             alphabet = alphabet-1;
//             cout<<alphabet;
//         }
//         cout<<endl;
//     }
// }



 








   
        


   












