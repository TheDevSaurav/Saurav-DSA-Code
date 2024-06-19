#include<iostream>
#include<queue>
#include<vector>
using namespace std;

class Info{
    public:
    int data;
    int rowIndex;
    int colIndex;

    Info(int a,int b, int c){
        this->data = a;
        this->rowIndex=b;
        this->colIndex=c;
    }
};

class Compare{
    public:
    bool operator()(Info* a,Info* b){
        return a->data > b->data; //return min heap;
    }
};

void mergeKsortedArray(int arr[][4],int n,int k,vector<int> &ans){

    priority_queue<Info*, vector<Info*>, Compare> pq;
    //step 1 Process first k element of each row
    for(int row =0;row<k;row++){ 
        int element = arr[row][0];
        Info* temp = new Info(element,row,0);
        pq.push(temp);
    }

    while(!pq.empty()){
        Info* temp = pq.top();
        pq.pop();
        int topData = temp->data;
        int topRow = temp->rowIndex;
        int topCol = temp->colIndex;

        //store ans in vector
        ans.push_back(topData);

        //next element for the same row ,jis mai se pop kiya hai usi mai se insert krna hai

        if(topCol +1 <n){
            //iska mtlb row mai or element present hai
            Info* newInfo = new Info(arr[topRow][topCol+1],topRow,topCol+1);
            pq.push(newInfo);
        }

    }
}

int main(){
    int arr[3][4] = {
                    {1,4,8,10},
                    {2,3,6,9},
                    {5,7,11,12}
    };
    int n=4;
    int k =3;

    vector<int>ans;
    mergeKsortedArray(arr,n,k,ans);

    cout<<"printing Ans Array"<<endl;
    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<" ";
    }
    return 0;
}