void insertAtBottom(stack<int> &st,int &element) {
//     //base case
//     if(st.empty()){
//         st.push(element);
//         return;
//     }
//     //1 case hum liknenga
//     int temp=st.top();
//     st.pop();
//     //baki recursion
//     insertAtBottom(st,element);
//     //backtracking
//     st.push(temp);
// }
// void reverseStack(stack<int> &st){
//     //base case
//     if(st.empty()) {
//         return;
//     }
//     //1case khud solve kro
//     int temp=st.top();
//     st.pop( );

//     //recursion
//     reverseStack(st);
//     //backtracking
//     insertAtBottom(st,temp);
// }