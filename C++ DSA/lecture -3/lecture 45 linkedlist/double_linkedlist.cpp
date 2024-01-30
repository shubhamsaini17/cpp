#include<iostream>
using namespace std;

class node{
    public:
    int data;
    node* pre;
    node* next;

    node(int data){
        this->data = data;
        this->pre = NULL;
        this->next = NULL;
    }
};

// insert at start
void insertAtHead(node* &head,int d){
    node* temp = new node(d);
    temp -> next = head;
    head ->pre =temp;
    head = temp;
}
//insert at end/last

void insertAtTail(node* &tail,int d){
    node* temp = new node(d);
    tail ->next = temp;
    temp ->pre = tail;
    tail = temp; 
}
void insertAtPosition (node* &tail,node* &head,int position,int d){
    if(position==1){
        insertAtHead(head,d);
        return;
    }
    node * temp =head;
    int cnt=1;

    while (cnt <position-1)
    {
        temp = temp->next;
        cnt++;
    }
    
    //insert at last
    if(temp ->next == NULL){
        insertAtTail(tail,d);
        return;
    }

    // insert in the middle
    node* nodeToInsert = new node(d);
    nodeToInsert->next = temp ->next;
    temp->next->pre = nodeToInsert;
    temp->next = nodeToInsert;
    nodeToInsert->pre = temp;
}
void print(node* &head)
{
    node* temp =head;
    while(temp != NULL){
        cout<<temp->data<<" ";
        temp = temp ->next;
    }
    cout<<endl;
}

int getLength(node* &head)
{    int leng=0;
    node* temp =head;
    while(temp != NULL){
        leng++;
        temp = temp   ->next;
    }
   return leng;
}

int main()
{
node* node1 = new node(10);
node* head = node1;
node* tail = node1;

print(head);
getLength(head);

insertAtHead(head,9);
print(head);
insertAtTail(tail,11);
print(head);

insertAtPosition(tail,head,3,100);
print(head);

insertAtPosition(tail,head,1,101);
print(head);

return 0;
}