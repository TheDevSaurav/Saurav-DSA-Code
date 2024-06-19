 #include<iostream>
 #include<vector>
 #include<algorithm>
 #include<queue>
 using namespace std;

//  int main(){
//     int row = 8;
//     int col = 15;
//     int tower = 3;
//     cout<<row<<col<<tower<<endl;
//     vector<pair<int,int>> loc;
//     loc.push_back({3,8});
//     loc.push_back({11,2});
//     loc.push_back({8,6});

//     vector<int>xDim;
//     //insert imaginary 2 tower
//     xDim.push_back(0);
//     xDim.push_back(col+1);

//     //now insert given tower
//     for(int i=0;i<loc.size();i++){
//         xDim.push_back(loc[i].first);
//     }
//     sort (xDim.begin(),xDim.end());

//     vector<int>yDim;
//     //insert imaginary 2 tower
//     yDim.push_back(0);
//     yDim.push_back(row+1);

//     //now insert given tower
//     for(int i=0;i<loc.size();i++){
//         yDim.push_back(loc[i].second);
//     }
//     sort (yDim.begin(),yDim.end());

//     vector<int> xAns;
//     for(int i=1;i<xDim.size();i++){
//         int diff = xDim[i]-xDim[i-1] - 1;
//         xAns.push_back(diff);
//     }
//     vector<int> yAns;
//     for(int i=1;i<yDim.size();i++){
//         int diff = yDim[i]-yDim[i-1] - 1;
//         yAns.push_back(diff);
//     }

//     int maxi =-1;
//     for(int i=0;i<xAns.size();i++){
//         for(int j=0;j<yAns.size();j++){
//             int prod = xAns[i]*yAns[j]; 
//             maxi = max(maxi,prod);
//         }
//     }
//     cout<<"final ans: "<<maxi<<endl;
//  }






// //minimum cost of ropes
// int solve(int arr[],int size){
//     priority_queue<int,vector<int>,greater<int>>minHeap;
//     //insert all element in min heap
//     for(int i=0;i<size;i++){
//         int val = arr[i];
//         minHeap.push(val);
//     }
//     int cost =0;
//     while(minHeap.size()>1){
//         int a = minHeap.top();
//         minHeap.pop();
//         int b = minHeap.top();
//         minHeap.pop();
//         cost += a+b;
//         int sum = a+b;
//         minHeap.push(sum);
//     }
//     return cost;

// }
// int main(){
//     int arr[]={4,3,2,6};
//     int size = 4;
//     int ans = solve(arr,size);
//     cout<<"final ans "<<ans<<endl;
// }




// //fractional knapsack
// int fractionalKnapsack(vector<int> val,vector<int> wt,int n, int capacity){
//     vector<float>valWtRatio;
//     for(int i=0;i<n;i++){
//         float ratio = (val[i]*1.0)/wt[i];
//         valWtRatio.push_back(ratio);
//     }

//     priority_queue<pair<float,pair<int,int>> > maxHeap;
//     for(int i=0;i<n;i++){
//         maxHeap.push({valWtRatio[i],{val[i],wt[i]}});
//     }
//     //map heap is ready
//     int totalVal = 0;
//     while(capacity!=0 && !maxHeap.empty()){
//         auto front = maxHeap.top();  
//         float ratio = front.first;
//         int value = front.second.first;
//         int weight = front.second.second;
//         maxHeap.pop();
//         //full insesrt 
//         if(capacity>=weight){
//             totalVal += value;
//             capacity = capacity-weight;

//         }

//         //ya phir fractional
//         else{
//             int ValueToInclude =ratio*capacity;
//             totalVal += ValueToInclude;
//             capacity=0;
//             break; 
            
//         }
//     }
//     return totalVal;
// }
// int main(){
//     vector<int> val ={60,100,120};
//     vector<int>wt = {10,20,30};
//     int n=3;
//     int W=50;
//     int ans= fractionalKnapsack(val,wt,n,W);
//     cout<<"final ans : "<<ans<<endl;
// }








//N-meeting in a room
bool cmp(pair<int,int>a,pair<int,int>b){
    return a.second<b.second;
}
int minMeeting(int st[], int end[],int n){
    vector<pair<int,int>> time;
    for(int i=0;i<n;i++){
        time.push_back({st[i],end[i]});
    }
    sort(time.begin(),time.end(),cmp);

    // cout<<"printing time : "<<endl;
    // for(auto i:time){
    //     cout<<i.first<<" "<<i.second<<endl;
    // }

    int count =1;
    int prevStart = st[0];
    int prevEnd = end[0];

    for(int i=1;i<n;i++){
        int currStart = time[i].first;
        int currEnd = time[i].second;
        if(currStart>prevEnd){
            //include curr meeting
            count++;
            prevStart=currStart;
            prevEnd= currEnd;
        }
    }
    return count;
    
}
int main(){
    int st[]={1,3,0,5,8,5};
    int end[]={2,4,6,7,9,9};
    int n=6;
    int ans = minMeeting(st,end,n);
    cout<<"final ans: "<<ans<<endl;
}