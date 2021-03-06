

# Pointers

"I think the main barrier to understanding pointers is bad teachers." http://bit.ly/pointersAndBadTeachers
	- _pointers are memory addresses, and nothing but memory addresses
	-  may be used or thought of interchangeably with memory addresses_

- Credits: http://j.mp/greatPointerConspiracy  
- Also see http://j.mp/pointerGlossary 
- Take the code quiz at http://j.mp/pointerQuiz

## How to create a pointer? 

- A pointer to type `T` is denoted by `T*` (pronounced "**pointer to T**")
- A pointer is created with the `& operator`. Assuming an `int i`, we can create a pointer to it: `int* p = &i;` (`&i` is typically pronounced as take the address of `i`)
- A pointer can be dereferenced with the `* operator`, yielding the value it points to: `int j = *p;`

That’s easy, right? The only point of confusion is the dual role of `*`, as both part of the `type`, and as the `dereferencing` operator. 

## Contrasting pointer assignments and constant expressions

```c
int* p0 = 0; // null pointer
const int zero1 = 0; // constant expression
int* p1 = zero1; // null pointer
const int zero2 = 2 - 2; // constant expression
int* p2 = zero2; // null pointer
int zero3 = 0; // not a constant expression
int* p3 = zero3; // not a null pointer
int a = 2;
int b = 2;
int zero4 = a - b; // not a constant expression
int* p4 = zero4; // not a null pointer
const int c = 2;
const int d = 2;
int zero4 = c-d; // constant expression
int* p4 = zero4; // null pointer
```
## What pointers are

- Pointers are references
- Pointers can be null 
- Pointers can traverse Arrays
- Pointers can point to other pointers! (**double pointer**)
	- Swapping using double pointers -  http://j.mp/doublePointers 

## What pointers are not 

- Pointers are **not numbers**; when a number is the same as a valid memory address in a computer, then it can be also be referred to as a pointer
- Pointers are **not memory addresses**; valid pointers are memory addresses
- Pointers are not born equal; an integer pointer can only point to every 4th byte; a character pointer can point to every byte of memory 

