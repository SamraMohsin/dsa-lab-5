# Dummy Node Singly Linked List Implementation in C++

This project demonstrates a *Singly Linked List* in C++ that uses a *dummy head node*. The dummy node is a placeholder at the beginning of the list, simplifying the insertion and deletion operations by ensuring that there's always a head node present.

## Project Structure

The project consists of the following files:

- list.h: Header file defining the List class and its member functions.
- list.cpp: Implementation of the list operations.
- main.cpp: The main file for testing the linked list functions (not provided here).

## Features

The *List* class provides several methods to work with a singly linked list using a dummy node:

### Constructor

- *List()*: Initializes the list with a dummy head node that contains no meaningful data (data = -1). The dummy node simplifies the list management, especially during insertions and deletions.

### Public Methods

- *bool isEmpty()*: Checks if the list is empty by verifying whether the dummy node points to nullptr.

- *void insert_begin(int value)*: Inserts a new node with value at the beginning of the list, right after the dummy node.

- *void insert_end(int value)*: Inserts a new node with value at the end of the list.

- *void delete_begin()*: Deletes the first node after the dummy node. If the list is empty, an error message is displayed.

- *void traverse()*: Traverses the list starting from the node after the dummy node and prints the values of the nodes until the end of the list.

## Example Usage

Here is an example of how you can use the *List* class:

```cpp
#include<iostream>
#include "list.h"

int main() {
    List myList;

    myList.insert_begin(10);
    myList.insert_end(20);
    myList.insert_end(30);
    
    cout << "List after insertion: ";
    myList.traverse();  // Output: 10 -> 20 -> 30 -> NULL

    myList.delete_begin();
    cout << "List after deleting the first element: ";
    myList.traverse();  // Output: 20 -> 30 -> NULL

    return 0;
}
