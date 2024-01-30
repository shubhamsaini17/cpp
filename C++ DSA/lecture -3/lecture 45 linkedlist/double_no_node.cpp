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

    ~node(){
        int value = this->data;
    if (this->next != NULL)
    {   
        delete next;
        this->next = NULL;
    }
    
    }
};

// insert at start
void insertAtHead(node* &head,node* &tail,int d){

    if (head == NULL)
    {
        node* temp = new node(d);
        head = temp;
        tail = temp;
    }
    else{
        node* temp = new node(d);
        temp -> next = head;
        head -> pre =temp;
        head = temp;
    }
}
//insert at end/last

void insertAtTail(node* &head,node* &tail,int d){

    if (tail == NULL)
    {
        node* temp = new node(d);
        tail = temp;
    }
    
    node* temp = new node(d);
    tail ->next = temp;
    temp ->pre = tail;
    tail = temp; 
}
void insertAtPosition (node* &tail,node* &head,int position,int d){
    if(position==1){
        insertAtHead(head,tail,d);
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
        insertAtTail(head,tail,d);
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

// deleting a node 

void deleteNode(int position,node* &head){
    // deleting first / start node

    if(position == 1){
        node* temp = head;
        temp -> next -> pre = NULL;
        head = temp ->next;
        temp ->next = NULL;

        delete temp;
    }
    else{
        // delete last node or middle node 
        node* curr = head;
        node* prev = NULL;

        int cnt =1;
        while (cnt<position)
        {
            prev = curr;
            curr = curr -> next;
            cnt++;
        }
        
        curr -> pre = NULL;
        prev -> next = curr -> next;
        curr -> next =  NULL;

        delete curr;

    }
}

int main()
{

node* head = NULL;
node* tail = NULL;

print(head);
getLength(head);

insertAtHead(head,tail,9);
print(head);

insertAtTail(head,tail,11);
print(head);

insertAtHead(head,tail,5);
print(head);

insertAtTail(head,tail,2);
print(head);

insertAtPosition(tail,head,3,100);
print(head);

insertAtPosition(tail,head,1,101);
print(head);

deleteNode(6,head);
print(head);
cout<<"head "<<head ->data <<endl;
cout<<"tail "<<tail ->data <<endl;
return 0;
}