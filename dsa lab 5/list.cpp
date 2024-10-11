#include<iostream>
#include"node.h"
#include"list.h"
using namespace std;
list::list() {
	head = 0;
	p1->data = 0;
	p1->next = NULL;
	head = p1;
}
bool list::emptyList() {
	if (p1->data = 0) {
		return true;
	}
	return false;
}
void list::insert_after(int oldV, int newV) {
	node* temp = p1;
	while ((temp != NULL) && (temp->data != oldV)) {
		temp = temp->next;
	}
	if (temp == NULL) {
		cout << "sorry!! value not found" << endl;
	}
	else {
		node* n2 = new node;
		n2->data = newV;
		n2->next = temp->next;
		temp->next = n2;



	}
}
void list::insert_begin(int value) {
	node* n1 = new node;
	if (emptyList()) {
		n1->data = value;
		n1->next = NULL;
		p1->next = n1;
	}
	else {
		n1->data = value;
		n1->next = p1->next;
		p1->next = n1;
	}
}
// Inserts a new node at the end of the list
void list::insert_end(int value) {
	node* temp;
	temp = p1;
	while (temp->next != NULL) {
		temp = temp->next;
	}
	node* n2 = new node;
	n2->data = value;
	n2->next = NULL;
	temp->next = n2;


}
// Deletes a node of value ‘val’ from the list
void list::delete_Node(int val) {
	if (emptyList()) {
		cout << "no element found to delete" << endl;
	}
	else {
		node* temp = p1;
		while (temp->next->data == val) {
			temp = temp->next;
			node* delVal;
			delVal = temp->next;
			temp = temp->next->next;
			delete delVal;




		}
	}
}
// Deletes a node from the beginning of the list
void list::delete_begin() {
	if (emptyList()) {
		cout << "no element found to delete" << endl;
	}
	else {
		node* delFirst = new node;
		delFirst = p1->next;
		p1->next = delFirst->next;
		delete delFirst;

	}
}
// Deletes a node from the end of the list
void list::delete_end() {
	if (emptyList()) {
		cout << "no element found to delete" << endl;
	}
	else {
		node* temp = p1;
		while (temp->next->next != NULL) {
			temp = temp->next;
		}
		node* delEnd = temp->next;
		temp->next = NULL;
		delete delEnd;

	}
}
// Displays the values stored in the list
void list::traverse() {
	node* temp;
	temp = p1;
	while (temp != NULL) {
		cout << temp->data << " -> ";
		temp = temp->next;
	}
	cout << "NULL";
}
