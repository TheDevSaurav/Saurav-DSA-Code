#include <iostream>
using namespace std;

class Node {
        public:
        int data;
        Node* next;

        Node() {
                this->data = 0;
                this->next = NULL;
        }
        Node(int data) {
                this->data = data;
                this->next = NULL;
        }


};

//I want to insert a node right at the head of Linked List
void insertAtHead(Node* &head, Node* &tail, int data) {
        //check for Empty LL
        if(head == NULL) {
                Node* newNode = new Node(data);
                head = newNode;
                tail = newNode;
        }
        else {
                //step1:
                Node* newNode = new Node(data);
                //step2:
                newNode -> next = head;
                //step3:
                head = newNode;
        }


}
//I want to insert a node right at the end of LINKED LIST
void insertAtTail(Node* &head,Node* &tail, int data) {
        if(head == NULL) {
                Node* newNode = new Node(data);
                head = newNode;
                tail = newNode;
                
        }
        else {
            //step1: creatae a node
            Node* newNode = new Node(data);
            //step2: connect woth tail ndoe
            tail->next = newNode;
            //step3: update tail;
            tail = newNode;
        }

}
void print(Node* head) {

        Node* temp = head;
        while(temp != NULL) {
                cout << temp->data << " ";
                temp = temp->next;
        }
}

int findLength(Node* &head ) {
        int len = 0;
        Node* temp = head;
        while(temp != NULL) {
                temp = temp->next;
                len++;
        }
        return len;
}

void insertAtPosition(int data, int position, Node* &head, Node* &tail) {
        int len = findLength(head);
        
        if(position == 1) {
                insertAtHead(head, tail , data);
                return;
        }
        else if(position > len) {
                insertAtTail(head, tail, data);
                return;
        }
        else {
            Node* newNode = new Node(data);
            
            Node* prev = NULL;
            Node* curr = head;
            while(position != 1) {
                position--;
                prev = curr;
                curr = curr->next;
            }
            
            //step3:
            newNode -> next = curr;

            //step4:
            prev -> next = newNode;
            
        }
        
}



int main() {

        Node* head = NULL;
        Node* tail = NULL;
        insertAtHead(head, tail,20);
        insertAtHead(head, tail,50);
        insertAtHead(head, tail,60);
        insertAtHead(head,tail, 90);
        insertAtTail(head, tail, 77);

        print(head);
        cout << endl;

        return 0;
}





























#include <iostream>
using namespace std;

class Node {
        public:
        int data;
        Node* next;

        Node() {
                this->data = 0;
                this->next = NULL;
        }
        Node(int data) {
                this->data = data;
                this->next = NULL;
        }

        ~Node() {
          cout << "Destructor called for: " << this->data << endl;
        }

};

//I want to insert a node right at the head of Linked List
void insertAtHead(Node* &head, Node* &tail, int data) {
        //check for Empty LL
        if(head == NULL) {
                Node* newNode = new Node(data);
                head = newNode;
                tail = newNode;
        }
        else {
                //step1:
                Node* newNode = new Node(data);
                //step2:
                newNode -> next = head;
                //step3:
                head = newNode;
        }


}
//I want to insert a node right at the end of LINKED LIST
void insertAtTail(Node* &head,Node* &tail, int data) {
        if(head == NULL) {
                Node* newNode = new Node(data);
                head = newNode;
                tail = newNode;
                
        }
        else {
            //step1: creatae a node
            Node* newNode = new Node(data);
            //step2: connect woth tail ndoe
            tail->next = newNode;
            //step3: update tail;
            tail = newNode;
        }

}
void print(Node* head) {

        Node* temp = head;
        while(temp != NULL) {
                cout << temp->data << "->";
                temp = temp->next;
        }
}

int findLength(Node* &head ) {
        int len = 0;
        Node* temp = head;
        while(temp != NULL) {
                temp = temp->next;
                len++;
        }
        return len;
}

void insertAtPosition(int data, int position, Node* &head, Node* &tail) {
        int len = findLength(head);
        
        if(position == 1) {
                insertAtHead(head, tail , data);
                return;
        }
        else if(position > len) {
                insertAtTail(head, tail, data);
                return;
        }
        else {
            Node* newNode = new Node(data);
            
            Node* prev = NULL;
            Node* curr = head;
            while(position != 1) {
                position--;
                prev = curr;
                curr = curr->next;
            }
            
            //step3:
            newNode -> next = curr;

            //step4:
            prev -> next = newNode;
            
        }
        
}

void deleteNode(Node* &head, Node* &tail, int position) {
  //empty list
  if(head == NULL) {
    cout << "Cannot delete, coz LL is empty" << endl;
    return;
  }

  if(head == tail) {
    //single element
    Node* temp = head;
    delete temp;
    head = NULL;
    tail = NULL;
    return;
  }

  int len = findLength(head);

  //delete from head
  if(position == 1) {
    //first node ko delete kardo
    Node* temp = head;
    head = head->next;
    //head = temp->next;
    temp->next = NULL;
    delete temp;
  }
  else if(position == len) {
    //last node ko delete krdo\

    //find prev
    Node* prev = head;
    while(prev -> next != tail ){
      prev = prev -> next;
    }

    //prev node ka link null karo
    prev -> next = NULL;

    //node delete kro
    delete tail;

    //update tail
    tail = prev;

  }
  else {
    //middle me koi node ko delete krna h 

    //step1: set prev/curr pointers
    Node* prev = NULL;
    Node* curr = head;
    while(position != 1) {
      position--;
      prev = curr;
      curr = curr->next;
    }

    //step2: prev -> next me curr ka next node add kro
    prev->next = curr->next;

    //step3: node isolate krdo
    curr->next = NULL;
    //step4: delte node
    delete curr;

  }

}

int main() {

        Node* head = NULL;
        Node* tail = NULL;
        insertAtHead(head, tail,50);
        // insertAtHead(head, tail,40);
        // insertAtHead(head, tail,30);
        // insertAtHead(head,tail, 20);
        // insertAtHead(head, tail,10);

        print(head);
        cout << endl;
        cout << "Before-> Length of LL is: " << findLength(head) << endl;
        //cout << "before -> head -> " << head -> data << endl;
        cout << "Before tail-> " << tail->data << endl;
        deleteNode(head, tail, 1);
        cout << "After Length of LL is: " << findLength(head) << endl;
        cout << "After tail-=> << " << tail->data << endl;
        

        // deleteNode(head, tail, 3);
        // print(head);
        // cout << endl;

        // deleteNode(head, tail, 5);
        // print(head);
        // cout << endl;


        // deleteNode(head, tail, 1);
        // print(head);
        // cout << endl;

        return 0;
}












































#include <iostream>
using namespace std;

class Node{
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

void print(Node* head) {
  Node* temp = head;

  while(temp != NULL) {
    cout << temp->data << "->";
    temp = temp->next;
  }

}

int findLength(Node* &head) {
  Node* temp = head;
  int len = 0;

  while(temp != NULL) {
    len++;
    temp = temp->next;
  }
  return len;
}

void insertAtHead(Node* &head, Node* &tail, int data) {
  //LL is empty
  if(head == NULL) {
    Node* newNode = new Node(data);
    head = newNode;
    tail = newNode;
  }
  else {
    //LL is not empty
    Node* newNode = new Node(data);
    newNode -> next = head;
    head -> prev = newNode;
    head = newNode;
  }
}

void insertAtTail(Node* &head, Node* &tail, int data) {
  if(head == NULL) {
    Node* newNode = new Node(data);
    head = newNode;
    tail = newNode;
  }
  else {
    //LL is non empty
    Node* newNode = new Node(data);
    tail-> next = newNode;
    newNode->prev = tail;
    tail = newNode;
  }
}

void insertAtPosition(Node* &head, Node* &tail, int data, int position) {
  if(head == NULL) {
    Node* newNode = new Node(data);
    head = newNode;
    tail = newNode;
  }
  else {
    int len = findLength(head);
    if(position == 1) {
      insertAtHead(head, tail, data);
    }
    else if(position == len+1) {
      insertAtTail(head, tail, data);
    }
    else {
      //insert in middle
      //step1: create node
      Node* newNode = new Node(data);
      //ste2: set prev and curr pointer
      Node* prevNode = NULL;
      Node* currNode = head;
      while(position != 1) {
        position--;
        prevNode = currNode;
        currNode = currNode->next;
      }
      //step3:pointers update krre the
      prevNode -> next = newNode;
      newNode -> prev = prevNode;
      newNode->next = currNode;
      currNode->prev = newNode;
    }
  }
}

void deleteNode(Node* &head, Node* &tail, int position) {
  if(head == NULL) {
    //LL is empty
    cout << "Cannot delete, cox LL is empty" << endl;
    return;
  }

  if(head == tail) {
    Node* temp = head;
    delete temp;
    head = NULL;
    tail = NULL;
    return;
  }
  

  int len = findLength(head);
  if(position == 1) {
    //delete from head
    Node* temp = head;
    head = head -> next;
    temp -> next = NULL;
    head -> prev = NULL;
    delete temp;
  }
  else if(position == len) {
    //delete from tail
    Node* prevNode = tail -> prev;
    prevNode->next = NULL;
    tail-> prev = NULL;
    delete tail;
    tail = prevNode;
  }
  else {
    //delete from middle
    //step1: set prevNode/currNode/nextNode
    Node* prevNode = NULL;
    Node* currNode = head;
    while(position != 1) {
      position--;
      prevNode = currNode;
      currNode = currNode->next;
    }
    Node* nextNode = currNode -> next;

    prevNode->next = nextNode;
    currNode->prev = NULL;
    currNode->next = NULL;
    nextNode -> prev = prevNode;

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
  print(head);
   cout << endl;
//   insertAtTail(head, tail, 1000);
//insertAtPosition(head, tail, 1000, 5);
  //print(head);

  deleteNode(head, tail, 4);
  print(head);
//   cout << endl;
//   deleteNode(head, tail, 2);
//   print(head);

//   cout << endl;
//   deleteNode(head, tail, 2);
//   print(head);

//   cout << endl;
//   deleteNode(head, tail, 1);
//   print(head);
//   cout << "length of LL is: " << findLength(head) << endl;

//   deleteNode(head, tail, 1);
//   print(head);
  return 0;
}
