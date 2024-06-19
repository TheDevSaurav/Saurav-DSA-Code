#include<iostream>
using namespace std;

class Node {
public:
    int data;
    Node* prev;
    Node* next;

    Node() {
        this->prev = NULL;
        this->next = NULL;
    }

    Node(int data) {
        this->data = data;
        this->prev = NULL;
        this->next = NULL;
    }
};

void Print(Node* head) {
    Node* temp = head;
    while (temp != NULL) {
        cout << temp->data << "->";
        temp = temp->next;  
    }
    cout << "NULL" << endl;
}

int findLength(Node* head) {
    Node* temp = head;
    int len = 0;
    while (temp != NULL) {
        len++;
        temp = temp->next;
    }
    return len;
}

void insertAtHead(Node* &head, Node* &tail, int data) {
    Node* newNode = new Node(data);
    // empty ll
    if (head == NULL) {
        head = newNode;
        tail = newNode;
    } else {
        newNode->next = head;
        head->prev = newNode;
        head = newNode;
    }
}

void insertAtTail(Node* &head, Node* &tail, int data) {
    Node* newNode = new Node(data);
    // empty ll
    if (head == NULL) {
        head = newNode;
        tail = newNode;
    } else {
        tail->next = newNode;
        newNode->prev = tail;
        tail = newNode;
    }
}

void insertAtPosition(Node* &head, Node* &tail, int data, int position) {
    if (head == NULL) {
        Node* newNode = new Node(data);
        head = newNode;
        tail = newNode; 
    } else {
        int len = findLength(head);
        if (position == 1) {
            insertAtHead(head, tail, data);
        } else if (position == len + 1) {
            insertAtTail(head, tail, data);
        } else {
            // insert at middle
            // step 1: create node
            Node* newNode = new Node(data);
            // step 2: set prev and curr
            Node* prevNode = NULL;
            Node* currNode = head;
            while (position > 1) {
                position--;
                prevNode = currNode;
                currNode = currNode->next; 
            }
            // step 3: update
            prevNode->next = newNode;
            newNode->prev = prevNode;
            newNode->next = currNode;
            if (currNode != NULL) {
                currNode->prev = newNode;
            }
        }
    }
}

void deleteNode(Node* &head,Node* &tail,int position){
    if(head==NULL){
        //ll is empty
        cout<<"cannot delete"<<endl;
        return;
    }
    if(head==tail){
        Node* temp = head;
        delete temp;
        head=NULL;
        tail=NULL;
        return;
    }
    int len = findLength(head);
if(position==1){
    //deletee from head
    Node* temp = head;
    head = head->next;
    temp->next=NULL;
    head->prev=NULL;
    delete temp;
}
else if(position==len){
    //deelte form tail
    Node* prevNode= tail->prev;
    prevNode->next=NULL;
    tail->prev-NULL;
    delete tail;
    tail=prevNode;
}

else{
    //delete from middle
    //step 1 set prevnode/currnoede/nextnode
    Node* prevNode=NULL;
    Node* currNode=head;
    while(position!=1){
        position--;
        prevNode=currNode;
        currNode=currNode->next;

    }
    Node* nextNode=currNode->next;

    prevNode->next=nextNode;
    currNode->prev=NULL;
    currNode->next=NULL;
    nextNode->prev=prevNode;

    delete currNode;
}
}

int main() {
    Node* head = NULL;
    Node* tail = NULL;
    insertAtHead(head, tail, 40);
    insertAtHead(head, tail, 30);
    insertAtHead(head, tail, 20);
    insertAtHead(head, tail, 10);
    Print(head);
        // insertAtPosition(head, tail, 100, 2);
        // Print(head);
        // insertAtTail(head,tail,1000);
        // Print(head);
    deleteNode(head,tail,2);
   
    Print(head);
    return 0;
}
