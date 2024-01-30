#include<iostream>
using namespace std;

class node{
    public:
    int data;
    node* next;

    // constructor to assign value when ever new node is created
    node(int data){
        this->data = data;
        this ->next = NULL;
    }
    ~node(){
        int value = this->data;
        if (this->next != NULL)
        {
            delete next;
            this->next = NULL;
        }
        cout<<"memeory is free for node with data: "<<value<<endl;
    }
   
};
 // new node insertion in single linked list
    void insertAtHead(node* &head, int d){
        
        // new node
        node* temp = new node(d); // data value in node = d
        temp ->next = head;
        head = temp;

    }
    // asending order ma insert or insert at tail / last
    void insertAtTail(node* &tail, int d){
        
        // new node create
        node* temp = new node(d);
        tail -> next = temp;
        tail = temp;

    }

    // insert at any position

    void insertAtPosition(node* &tail, node* &head, int position, int d){
        // insert at start
        if(position==1){
            insertAtHead(head,d);
            return;
        }


        node * temp = head;
        int count =1;

        while (count<position-1)
        {
            temp = temp -> next;
            count++;
        }
        

        // insert at last
        if (temp -> next == NULL)
        {
            insertAtTail(tail,d);
            return;
        }
        //node creation for d
        node* nodeToInsert = new node(d);
        nodeToInsert->next = tail->next;
        tail->next = nodeToInsert;
        
    }

    // traversal / print a single linked list
    void print(node* &head){
        node* temp = head;
        
        while (temp != NULL)
        {
            cout<<temp->data<<" ";
            temp= temp->next;
        }
        cout<<endl;
    }

    // delete any node
    void deleteNode(int position,node * &head){
        // deleting fist or start node
        if(position==1){
            head = head ->next;
            node* temp = head;

            // memory free start node

            temp->next = NULL;
            delete temp;
        }
        else{
            // deleting any middle node or last node
            node*curr = head;
            node*prev = NULL;

            int count=1;
            while (count < position)
            {
                prev = curr;
                curr = curr ->next;
                count++;
            }
            prev ->next = curr ->next;
            curr->next = NULL;
            delete curr;
        }
    }
int main()
{
    node* node1 = new node(10); // node creation in heap memory

    // cout<<node1 ->data<<endl;
    // cout<<node1 ->next<<endl;

    node* head = node1;
    node* tail = node1;

    print(head);

    insertAtTail(tail,12);

    print(head);
    insertAtTail(tail,15);

    print(head);
    
    insertAtPosition(tail,head,4,22);
    print(head);

    cout<<"head: "<<head->data<<endl;
    cout<<"tail: "<<tail->data<<endl;

    deleteNode(4,head);
    print(head);

    cout<<"head: "<<head->data<<endl;
    cout<<"tail: "<<tail->data<<endl;
return 0;
}