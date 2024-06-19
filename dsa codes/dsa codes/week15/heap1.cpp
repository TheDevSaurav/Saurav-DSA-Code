#include<iostream>
using namespace std;

class Heap{
    public:
    int *arr;
    int capacity;
    int size;
    Heap(int capacity){
        this->arr = new int[capacity];
        this->capacity = capacity;
        //size = current no of element in the heap
        this->size = 0;
    }

    void insert(int val){
        if(size == capacity){
            cout<<"heap overflow"<<endl;
            return;
        }

        //new elemnt insert krenga to size increade hoga
        size++;
        int index = size;
        arr[index]= val;

        // take the value to its corect position
        while(index > 1){
            int parentIndex = index/2;
            if(arr[index]>arr[parentIndex]){
                swap(arr[index],arr[parentIndex]);
                index = parentIndex;
            }
            else{
                break;
            }
        }

    }
    void printHeap(){
        for(int i = 1 ; i<=size ;i++){
            cout<<arr[i]<<" ";
        }
    }



//deletion
int deleteFromHeap() {
    int answer = arr[1];
    //replacement
    arr[1] = arr[size];
    //last elemnt ko delete krdo 
    size--;

    int index = 1;
    
    while(index < size){
        int leftIndex = 2*index;
        int rightIndex = 2*index+1;
        //find out krna hai subse bada index
        int largestIndex = index;
        //check left child
        if(leftIndex <= size && arr[largestIndex]<arr[leftIndex]){
            largestIndex = leftIndex;
        }
        //check right chlild
        if(rightIndex<=size && arr[largestIndex]<arr[rightIndex]){
            largestIndex = rightIndex;
        }

        //no change
        if(index==largestIndex){
            break;
        }
        else{
            swap(arr[index],arr[largestIndex]);
            index = largestIndex;
        }
        return answer;


    }

}

void heapify(int *arr,int n , int index){
   int  leftIndex = 2*index;
    int rightIndex = 2*index+1;
    int largestIndex = index;

    //teeno  mai se max lao
    if(leftIndex<=n && arr[largestIndex]<arr[leftIndex]){
        largestIndex = leftIndex;
    }
    if(rightIndex<=n && arr[largestIndex]<arr[rightIndex]){
        largestIndex = rightIndex;
    }

    //after these 2 condition 'largestindex will be pointing largest elemen among all 3
    if(index != largestIndex){
        swap(arr[index],arr[largestIndex]);

    //aub recursion
        index = largestIndex;
        heapify(arr,n,index);
    }
}

void buildHeap(int arr[],int n){
    for(int index = n/2; index>0;index--){
        heapify(arr,n,index);
    }
}

void heapSort(int arr[],int n){
    while(n != 1){
        swap(arr[1],arr[n]);
        n--;
        heapify(arr,n,1);
    }
}
};

int main(){
    Heap h(20);
    //insertion
    h.insert(10);
    h.insert(20);
    h.insert(5);
    h.insert(11);
    h.insert(6);

    cout<<"printing heap : " <<endl;

    h.printHeap();

    // int ans = h.deleteFromHeap();
    // cout<<"answer : "<<ans<<endl;
    // return 0;

    // cout<<"printing heap : " <<endl;

    // h.printHeap();

    // //sort heap
    // int arr[] = {-1,25,20,25,5,10,12};
    // int n = 6;
    // buildHeap(arr,6);

    // cout<<"printing heap : "<<endl;

    // for(int i = 1;i<=6;i++){
    //     cout<<arr[i]<<" ";
    // }
    // cout<<endl;
    // heapSort(arr,n);
    // cout<<"printing heap : "<<endl;

    // for(int i = 1;i<=6;i++){
    //     cout<<arr[i]<<" ";

    // }


}