#include<iostream>
using namespace std;

class node {
public:
    int data;
    node* next;

    node() {
        cout << "this is default constructor" << endl;
        this->next = NULL;
    }

    node(int data) {
        cout << "this is parameterized constructor" << endl;
        this->data = data;
        this->next = NULL;
    }
};

void printLL(node* head) {
    node* temp = head;

    while (temp != NULL) {
        cout << temp->data << " -> ";
        temp = temp->next;
    }
    cout << endl;
}

int getLength(node* head) {
    node* temp = head;
    int length = 0;

    while (temp != NULL) {
        length++;
        temp = temp->next;
    }

    return length;
}

void insertAtHead(node* &head, node* &tail, int data) {
    if (head == NULL) {
        // empty LL corner case 
        // step 1: create node
        node* newnode = new node(data);
        // step 2: update head and tail
        head = tail = newnode;
    } else {
        // create new node
        node* newnode = new node(data);
        // attach new node to head
        newnode->next = head;
        // update head
        head = newnode;
    }
}

void insertAtTail(node* &head, node* &tail, int data) {
    if (head == NULL) {
        // empty
        // step 1 create node
        node* newnode = new node(data);
        // step 2 single node
        head = tail = newnode;
    } else {
        // non empty
        // step 1 create node
        node* newnode = new node(data);
        // step 2 tail ko node se attach krdo
        tail->next = newnode;
        // step 3 update tail
        tail = newnode;
    }
}

void insertAtPosition(node* &head, node* &tail, int data, int position) {
    if (position < 1) {
        cout << "cannot insert" << endl;
        return;
    }
    int length = getLength(head);

    if (position <= 1) {
        insertAtHead(head, tail, data);
    } else if (position > length) {
        insertAtTail(head, tail, data);
    } else {
        // insert at middle

        // step 1 create node
        node* newnode = new node(data);

        // step 2 traverse to prev// curr position
        node* prev = NULL;
        node* curr = head;
        while (position > 1) {
            prev = curr;
            curr = curr->next;
            position--;
        }
        // step 3
        prev->next = newnode;
        // step 4
        newnode->next = curr;
    }
}

void deleteNode(node* &head, node* &tail, int position) {
    // empty node
    if (head == NULL) {
        cout << "cannot delete" << endl;
        return;
    }

    int len = getLength(head);

    if (position == 1) {
        // delete from head
        node* temp = head;
        head = head->next;
        temp->next = NULL;
        delete temp;
    } else if (position == len) {
        // delete last node
        // find prev
        node* prev = head;
        while (prev->next != tail) {
            prev = prev->next;
        }
        // prev node ko nullkro
        prev->next = NULL;
        // node delete
        delete tail;
        // upadte tail'
        tail = prev;
    } else if (position > 1 && position < len) {
        // middle mai delete 

        // step 1 set prev and curr
        node* prev = NULL;
        node* curr = head;
        while(position != 1){
            prev = curr;
            curr=curr->next;
            position--;
        }
        
        // step 2 prev->next mai curr ka node add krdo
        prev->next = curr->next;
        // step 3 node isolate krdo
        curr->next = NULL;
        // step 4 delete node
        delete curr;
    } else {
        cout << "Invalid position" << endl;
    }
}


int main() {
    node* head = nullptr;
    node* tail = nullptr;

    // creation of nodes
    node* first = new node(10);
    node* second = new node(20);
    node* third = new node(30);
    node* forth = new node(40);
    node* fifth = new node(50);

    first->next = second;
    second->next = third;
    third->next = forth;
    forth->next = fifth;

    // linked list created
    head = first;
    tail = fifth;  // Set the tail to the last node

    cout << "Printing the entire LL " << endl;
    printLL(head);

    insertAtHead(head, tail, 500);
    insertAtTail(head, tail, 600);
    insertAtPosition(head, tail, 300, 3);  // Specify the position
   
    cout << "Printing the updated LL " << endl;
     deleteNode(head, tail, 3); 
    printLL(head);

    cout << "Printing length of linked list: " << getLength(head) << endl;
    return 0;
}
