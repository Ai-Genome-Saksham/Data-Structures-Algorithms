#include <bits/stdc++.h> 
using namespace std; 

struct Node{
    int data;
    Node* next;
    Node(int x){
        data=x;
        next=NULL;
    }
};

void printlist(Node *head){
    Node *curr=head;
    while(curr!=NULL){
        cout<<curr->data<<" ";
        curr=curr->next;
    }cout<<endl;
}

Node *delTail(Node *head){
    if(head==NULL) return NULL; // if Linked List empty, return NULL
    if(head->next==NULL){  // if only head node present, delete it and return NULL
        delete(head);
        return NULL;
    }
    Node *curr = head;
    while(curr->next->next!=NULL){  // Reaching secondlast element
        curr = curr->next;
    }
    delete(curr->next); // Deleting Last node
    curr->next = NULL; // setting the next node to NULL of the second last node(now last node) 
    return head;
}

int main() 
{ 
	Node *head=new Node(10);
	head->next=new Node(20);
	head->next->next=new Node(30);
	printlist(head);
	head=delTail(head);
	printlist(head);
	
	return 0;
} 
