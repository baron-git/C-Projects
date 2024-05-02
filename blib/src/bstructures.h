/**
 * @file bstructures.h
 * @author baron (admin@baron.rip)
 * @brief Contains implementations of a number of data structures
 * @version 0.1
 * @date 2024-04-25
 * 
 * @copyright Copyright (c) 2024
 * 
 * 
 * List of implemented structures (so far):
 * 
 * 
 * 
 * List of structures to implement:
 * Linked list (Singly, circular, doubly)
 * Queue
 * Stack
 * 
 * Tree (Binary, BST)
 * Graph
 * Hash table
 * 
 */
#ifndef BSTRUCTURES_H
#define BSTRUCTURES_H


#ifdef __cplusplus
extern "C" {  // ensures that the functions are exposed as C functions when included in C++ projects.
#endif

#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>

// Define public macros and constants
#define BSTRUCTURES_VERSION "1.0"

// Define public types and structs
struct BSTRUCT_NODE {
  long data;
  struct BSTRUCT_NODE* next;
};



struct BSTRUCT_NODE* head = NULL;

void BSTRUCT_SLL_INSERT(long value) {
	struct BSTRUCT_NODE* new_node = (struct BSTRUCT_NODE*)malloc(sizeof(struct BSTRUCT_NODE));
	new_node->data = value;
	new_node->next = NULL;
  

	if (head == NULL) {
		head = new_node;
	} else {
		struct BSTRUCT_NODE* current = head;
		while (current->next != NULL) {
			current = current->next;
		}
		current->next = new_node;
	}
}

struct BSTRUCT_NODE* BSTRUCT_SLL_SEARCH(long value) {
	struct BSTRUCT_NODE* current = head;
	while (current != NULL) {
		if (current->data == value) {
			return current;
		}
		current = current->next;
	}
	return NULL;
}

void BSTRUCT_SLL_DELETE(long value) {
	if (head == NULL) {
		puts("List is empty.");
		return;
	}

	struct BSTRUCT_NODE* current = head;
	struct BSTRUCT_NODE* previous = NULL;

	while (current != NULL) {
		if (current->data == value) {
			if (previous == NULL) {
				head = current->next;
			} else {
			previous->next = current->next;
		}
		free(current);
		return;
	}
	previous = current;
	current = current->next;
}

	puts("Element not found in list.");
}

void BSTRUCT_SLL_TRAVERSE() {  
    struct BSTRUCT_NODE* current = head;  
    while (current != NULL) {  
        printf("%li ", current->data);  
        current = current->next;
		}
		printf("\n");
}  



#ifdef __cplusplus
}
#endif

#endif // BSTRUCTURES_H