#include<bits/stdc++.h>
using namespace std;

struct Node{
    int data;
    Node *next;
    Node *prev;
    Node (int x){
        data = x;
        next = NULL;
        prev = NULL;
    }
};

void printlist(Node *head){
    Node *curr = head;
    while(curr!=NULL)
    {
        cout<< curr->data<<" ";
        curr = curr->next;
    }
}

Node *insertBegin(Node *head, int x)
{
    Node *temp = new Node(x);
    
    if(head!=NULL){
        temp->next = head;
        head->prev = temp;
    }
    return temp;
}

int main(){
    Node *head=new Node(10);
	Node *temp1=new Node(20);
	Node *temp2=new Node(30);
	head->next=temp1;
	temp1->prev=head;
	temp1->next=temp2;
	temp2->prev=temp1;
	head=insertBegin(head,5);
	printlist(head);
	return 0;
}
