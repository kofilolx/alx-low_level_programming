# Doubly Linked List Implementation in C

## Overview

This is a simple implementation of a doubly linked list in C. A doubly linked list is a data structure consisting of a collection of nodes, where each node contains data and two pointers - one pointing to the next node and another pointing to the previous node.

## Files

- `doubly_linked_list.c`: Contains the source code for the doubly linked list implementation.

- `doubly_linked_list.h`: Header file with function prototypes and structure definitions.

## Compilation

To compile the program, use the following command:

```bash

gcc doubly_linked_list.c -o doubly_linked_list

```

## Usage

1\. Include the header file in your C program:

    ```c

    #include "doubly_linked_list.h"

    ```

2\. Create a doubly linked list:

    ```c

    DoublyLinkedList* myList = createDoublyLinkedList();

    ```

3\. Insert elements into the list:

    ```c

    insertAtBeginning(myList, data);

    insertAtEnd(myList, data);

    insertAfterNode(myList, prevNode, data);

    ```

4\. Delete elements from the list:

    ```c

    deleteFromBeginning(myList);

    deleteFromEnd(myList);

    deleteNode(myList, data);

    ```

5\. Traverse the list:

    ```c

    traverseList(myList);

    ```

6\. Free the memory allocated for the list:

    ```c

    freeDoublyLinkedList(myList);

    ```

## Example

```c

#include <stdio.h>

#include "doubly_linked_list.h"

int main() {

    // Create a new doubly linked list

    DoublyLinkedList* myList = createDoublyLinkedList();

    // Insert elements into the list

    insertAtEnd(myList, 10);

    insertAtEnd(myList, 20);

    insertAtEnd(myList, 30);

    // Traverse and print the list

    printf("Original List: ");

    traverseList(myList);

    // Insert an element at the beginning

    insertAtBeginning(myList, 5);

    // Traverse and print the updated list

    printf("Updated List: ");

    traverseList(myList);

    // Delete an element from the end

    deleteFromEnd(myList);

    // Traverse and print the final list

    printf("Final List: ");

    traverseList(myList);

    // Free the memory allocated for the list

    freeDoublyLinkedList(myList);

    return 0;

}

```
