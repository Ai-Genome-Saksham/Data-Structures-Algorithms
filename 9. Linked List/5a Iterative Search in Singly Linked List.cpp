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

int search(Node *head, int x){
    Node *curr = head;
    int pos = 1; // starting position is 1, 1st node position is 1
    while(curr!=NULL){ // if input LL is empty, it won't go inside this loop 
        if(curr->data == x)
            return pos;
        curr = curr->next;
        pos++;
    }
    return -1; // if position not encountered return -1
}

int main() 
{ 
	Node *head=new Node(10);
	head->next=new Node(20);
	head->next->next=new Node(30);
	printlist(head);
	cout<<"Position of element in Linked List: "<<search(head,20);
	return 0;
} 
// output: 
// 10 20 30 
// Position of element in Linked List: 2
