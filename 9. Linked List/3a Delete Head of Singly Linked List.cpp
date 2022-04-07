#include<bits/stdc++.h>
using namespace std;

struct Node
{
    int data;
    Node *next;
    Node(int x){
        data = x;
        next = NULL;
    }
};

void printList(Node *head)
{
    Node *curr = head;
    while(curr!=NULL)
    {
        cout<<curr->data<<" ";
        curr = curr-> next;
    }
}

Node *deleteFirst(Node *head){
    if (head==NULL) return NULL;
    Node *temp = head;
    temp = temp->next;
    delete(head);
    return temp;
}

int main()
{
    Node *head = new Node(10);
    head->next = new Node(20);
    head->next->next = new Node(30);
    printList(head); 
    head = deleteFirst(head);
    cout<<"\n";
    printList(head);
    return 0;
}

// OUTPUT
    // 10 20 30 
    // 20 30 
