#include<iostream>
#include<string.h>
using namespace std;

// int main() {
//     char ch[10];
//     // cin>>ch; // taking word as a input
//     cin.getline(ch,100); // taking line as a input
//     cout<<" "<<ch<<endl;
// }



 int findLength(char ch[], int size)
 {
    int length =0;
    for(int i=0; i<size;i++){
        if(ch[i]== '\0'){
            break;
        }
      else{
          length++;
      }
    }
    return length;
 }
int main() {
    char ch[100];
    cin>>ch;
    int length = findLength(ch,100);
    cout<<"length of the string : "<< length<<endl;
    cout<<"length : "<<strlen(ch)<<endl;
}














// void reverseString(char ch[],int n) {
//     int i = 0;
//     int j= n-1;
//     while(i<=0){
//         swap(ch[i],ch[j]);
//         i++;
//         j--;
        
//     }
// }
// int main() {
//     char ch[100];
//     cin.getline(ch,100);
//     cout<<"before"<<ch<<endl;
//     int len=findlength(ch,100);
//     reverseString(ch,len);
    
//     cout<<"after"<<ch<<endl;
// }








// void convertTOupperCase(char ch[], int n) {
//     int index=0;
//     while(ch[index] != '\0'){
//         char currCharacter=ch[index];
//         if(currCharacter>='a' && currCharacter<='z'){
//            ch[index]=currCharacter - 'a' + 'A'; 
//         }
//         index++;
//     }
// }
// int main () {
//     char ch[100];
//     cin.getline(ch,100);
//     convertTOupperCase(ch,100);
//     cout<<"after"<<ch<<endl;
// }







// void replaceCharacter(char ch[], int n) {
//    int index =0;
//    while(ch[index]!=0){
//     char  curr = ch[index];
//     if(curr ==  '@') {
//         ch[index] = ' ';
//     }
//     index ++;
//    } 
// }
// int main () {
//     char ch[100];
//     cin.getline(ch,100);
// replaceCharacter(ch,100);
//     cout<<"after"<<ch<<endl;
// }









// bool checkPalindrome(char ch[], int n) {
//     int i =0;
//     int j=n-1;
//      while(i<=j){
//         if(ch[i]==ch[j]){
//         i++;
//         j--;;
//         }
//         else{
//             return false;
//         }
//      }
//      return true;
// }
//  int main () {
//     char ch[100];
//     cin.getline(ch,100);
//     int ans = checkPalindrome(ch,100);
//     if(ans) {
//         cout<<"valid"<<endl;
//     }
//     else{
//         cout<<"invalid"<<endl;
//     }
// }