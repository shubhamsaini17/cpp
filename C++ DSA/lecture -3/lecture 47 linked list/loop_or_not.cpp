#include<iostream>
#include<map>
using namespace std;

class Node{

public:
int data;
Node * next;

// constructor
Node(int data){
    this -> data = data;
    this -> next = NULL;
}

~Node(){
    int value = this -> data;
    // memory free
    if (this -> next != NULL){
        delete next;
        this -> next = NULL;
    }
    cout<< " memory is free for node with data "<< value << endl; 
}

};

// insertion of new node
void InsertAtHead(Node* &head, int d){

// new node create
Node* temp = new Node(d);
temp -> next = head;
head = temp;

}

void insertAtTail(Node* &tail,int d){
    // new node create
  Node* temp = new Node(d);
  tail -> next = temp;
    tail = temp;

}

// traverse a linkedlist
void print(Node* &head){
    Node* temp = head;

    while(temp != NULL){
        cout<<temp -> data <<" ";
        temp = temp -> next;
    }
    cout<<endl;
}


void insertAtPosition(Node* &tail , Node* &head, int position, int data){

    // insert at start
    if (position==1)
    {
        InsertAtHead(head,data);
        return;
    }
    
    Node* temp = head;
    int cnt =1;

    while (cnt<position-1)
    {
        temp = temp ->next;
        cnt++;
    }
    
    // inserting at last position
    if(temp ->next == NULL){
        insertAtTail(tail,data);
        return;
    }
    // creating a node for new data 
    Node* nodeToInsert = new Node(data);
    nodeToInsert -> next = temp -> next;
    temp -> next = nodeToInsert;
}

void deleteNode(int position , Node* &head){
    // deleting first or start node
    if(position == 1){
        Node* temp = head;
        head = head ->next;
        // memory free start node 
        temp -> next = NULL;
        delete temp;
    }
    else
    {
        // deleting any middle node or last node
        Node* curr = head;
        Node* prev = NULL;

        int cnt = 1;
        while(cnt < position){
            prev = curr;
            curr = curr -> next;
            cnt++;
        }

        prev -> next = curr -> next;
        curr -> next = NULL;
        delete curr;
    }
}

bool detectCycle(Node * head){
    if(head == NULL)
    return false;

    map<Node*,bool> visited;

    Node* temp = head;

    // cycle is present
    while (temp != NULL)
    {   
        if (visited[temp]==true)
        {
            cout<<"present on element: "<<temp->data<<endl;
            return true;
        }
        visited[temp]= true;
        temp = temp->next;
    }
    
    return false;

}

int main()
{
    // crated a new node
Node * node1 = new Node(10);
// cout<<node1->data<<endl;
// cout<<node1->next<<endl;

// head pointer to node1
Node* head = node1;
Node* tail = node1; 
print(head);

// insert at head/start

InsertAtHead(head,12);
print(head);

InsertAtHead(head,15);
print(head);

// insert at tail/end of linkedlist


insertAtTail(tail,20);
print(head);

insertAtTail(tail,25);
print(head);



// 12 or 15 k bicha ma 22 dal do
// insertAtPosition(head, 3, 22);
// print(head);

// insert at 1st positon
// insertAtPosition(head, 1, 22);
// print(head);

// insert at last positon
// insertAtPosition(head, 4, 22);
// print(head);

// insertAtPosition(tail,head, 4, 22);
// print(head);

// cout<< "head " << head -> data <<endl;
// cout<< "tail " << tail -> data <<endl;

// deleteNode(1, head);
// print(head);

// deleteNode(3, head);
// print(head);

tail->next = head->next; 
 
cout<< "head " << head -> data <<endl;
cout<< "tail " << tail -> data <<endl;

// print(head);

if(detectCycle(head)){
    cout<<"cycle is present in the linked list"<<endl;
}
else
{
    cout<<"cycle is not present in the linked list"<<endl;
}

return 0;
}