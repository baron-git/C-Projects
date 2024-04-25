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

// Define public macros and constants
#define MYLIB_VERSION "1.0"

// Define public types and structs
typedef struct {
    int id;
    char *name;
} MyStruct;

// Declaration of a static function (only visible in this translation unit)
static void privateFunction(const char *message) { // privateFunction is declared as static, which means it can only be 
    printf("Private Message: %s\n", message);      // called within this file. This helps to encapsulate the functionality and keep it private to the implementation.
}

// Public API function declarations
void myPublicFunction(int data);

// Inline function definitions
static inline void myInlineFunction(int data) {
    printf("Inline Function Called with: %d\n", data);
}

// Function implementations
static void myStaticFunctionImplementation(int count) {
    for (int i = 0; i < count; i++) {
        privateFunction("Looping!");
    }
}

void myPublicFunction(int data) {
    printf("Public Function Called with: %d\n", data);
    myStaticFunctionImplementation(data);
}

#ifdef __cplusplus
}
#endif

#endif // BSTRUCTURES_H