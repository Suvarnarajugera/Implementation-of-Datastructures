#include<bits/stdc++.h>
using namespace std;
struct node{
	int data;
	node* next;
	node(int val){
		data = val;
		next = NULL;
	}
};

/* Insertion at back of Linked list */

void insert(node* head,int val){
	node* temp = head;
	while(temp->next){
		temp  = temp -> next;
	}
	temp->next = new node(val);
}

/* Deletion from back of the Linked List */

void pop_back(node* head){
	node* temp = head;
	while(temp->next->next){
		temp = temp->next;
	}
	temp->next = nullptr;
}

/* Deletion from front of the Linked List */

void pop_front(node*& head){
	head = head -> next;
}


/* Printing of a linked list */

void print(node* head){
	node* temp = head;
	while(temp){
		cout << temp->data <<" ";
		temp = temp -> next;
	}
	cout <<"\n";
}

int main(){
	node* head = new node(10);
	insert(head,20);
	insert(head,30);
	insert(head,40);
	insert(head,50);
	// pop_back(head);
	pop_front(head);
	print(head);
}

---> insertion = O(n)
---> Deletion = O(n)