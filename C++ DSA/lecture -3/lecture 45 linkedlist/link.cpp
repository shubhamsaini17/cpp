#include<iostream>
using namespace std;

class node{
    public:
    int data;
    node* next;

    node(int data){
        this->data = data;
        this->next = NULL;
    }
    ~node(){
        int value = this->data;

        //memory free
        if(this->next != NULL){
            delete next;
        this->next = NULL;
        cout<<"memory is free for node with data"<<value<<endl;
    }
    }

};

// INSERT at head

        void insertAtHead(node* &head,int d){
            // create a node to join on start
            node* temp = new node(d);
            temp->next = head;
            head = temp;
        }

        void insertAtTail(node* &tail, int d){
            node* temp = new node(d);
            tail->next= temp;
            tail = temp;
        }

        // print the linked list 
        void print(node* &head){
            node * ptr = head;

            if (head == NULL)
            {
                cout<<"linked is empty: "<<endl;
            }
            
            
            while (ptr != NULL)
            {
                cout<<ptr->data<<" ";
                ptr= ptr->next;
            }
            cout<<endl;
        }

        void deleteNode(int position,node* &head ){
            // deleting first or start node
            if (position==1)
            {   
                node* temp = head;
                head = head->next;
                // memory free this node
                temp->next =NULL;
                delete temp;
            }
            else{
                // for deleting any middle node and last node
                node* curr = head;
                node* pre = NULL;
                int cnt = 1;
                while (cnt<position)
                {
                    pre = curr;
                    curr = curr->next;
                    cnt++;
                }
                pre->next = curr->next;
                curr->next =NULL;
                delete curr;
            }
            
        }

        bool  isCircularList(node* head){
    

    if(head==NULL){
        return true;
    }
    node* temp = head->next;
    while (temp != NULL && temp != head)
    {
        temp = temp->next;
    }
    if(temp == head){
        return true;
    }
    return false;
}

int main()
{

    node* node1 = new node(10);
    // cout<<node1->data<<endl;
    // cout<<node1->next<<endl;

    node* head = node1;
    node* tail = node1;
    
    print(head);
    // insertAtHead(head,15);
    print(head);

    // insertAtTail(tail,25);
    // print(head);

    // deleteNode(3,head);
    // print(head);

    if(isCircularList(head)) {
        cout << " Linked List is Circular in nature" << endl;
    }
    else{
        cout << "Linked List is not Circular " << endl;
    }
return 0;
}