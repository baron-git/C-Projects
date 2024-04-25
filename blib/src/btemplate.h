/**
 * @file btemplate.h
 * @author baron (admin@baron.rip)
 * @brief Template for single header libraries
 * @version 0.1
 * @date 2024-04-25
 * 
 * @copyright Copyright (c) 2024
 * 
 */

#ifndef MYLIB_H_ // used to prevent the header file from being included more than once in the same file.
#define MYLIB_H_

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

#endif // MYLIB_H_
