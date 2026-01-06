# Assignment 3

## Leon Oruko

## ENE 211-0048/2023

## EEE

1. Difference between a normal variable and a pointer .
   - A normal variable is a named location where a value is stored in memory. A pointer on the other hand is a variable that stores the address of the normal variable
  
2. How Variable declaration differs from pointer declaration and definition. Clearly highlight the role of operators * and &:
   - Variable declaration includes assigning the rvalue to the lvalue i.e
      ```c
      int n = 10
      ```
    - In pointer assinment we use the * to define the pointer and the & to point to the location of the normal variable i.e
     ```c
     int *ptr = &n;
     ```

3. Explaining the meaning of dereferencing a pointer and showing how a pointer access the value stored at a memory address.
   - A pointer stores the memory address of a variable, dereferencing is accessing or modifying the value stored at that address.
   - example
    ```c
    int n = 10;
    int *ptr = &10;
    (*ptr)++;
    ```
    - the code example shows incrementing the value of n using pointer dereferencing.
  
4. Pointers are preffered when you need direct memory access,efficiency, shared data modifications or dynamic behaviour that normal varirables cannot provide:
   a. When a function must modify the original variable. i.e in variable swapping
   b. When working with arrays and strings. Using pointers avoids copying large amounts of data and improves performance.
   ```c
   int sum(int *arr, int size) {
    int total = 0;
    for (int i = 0; i < size; i++) {
        total += *(arr + i);
    }
    return total;
   }
   ```
   c.  Dynamic memory allocation - normal variables have fixed memory size  and lifetime.
   ```c
   int n;
   scanf("%d", &n);
   
   int *arr = (int *)malloc(n * sizeof(int));
   
   for (int i = 0; i < n; i++) {
       arr[i] = i * 2;
   }
   
   free(arr);
   ```
   d. Efficient Handling of large structures.
   e. Implementing data structures
   ```c
   struct Node {
    int data;
    struct Node *next;
   };
   ```
## 5.Limitations and Risks of Using Pointers Compared to Variables

Pointers provide powerful capabilities such as direct memory access and dynamic memory management. However, they also introduce several limitations and risks when compared to ordinary variables.

### 1. Increased Complexity
- Pointers are harder to understand and use correctly than simple variables.
- Code that uses many pointers is often less readable and more difficult to maintain.

### 2. Risk of Dangling Pointers
- A dangling pointer occurs when a pointer refers to a memory location that has already been freed.
- Accessing such memory can lead to unpredictable behavior or program crashes.

### 3. Null Pointer Dereferencing
- If a pointer is not properly initialized and is `NULL`, attempting to access the memory it points to can cause runtime errors or program termination.

### 4. Memory Leaks
- Improper handling of pointers, especially in dynamic memory allocation, can lead to memory leaks.
- Memory leaks occur when allocated memory is not released, reducing available system memory over time.

### 5. Buffer Overflows
- Pointers allow direct memory access without automatic bounds checking.
- Writing beyond allocated memory can overwrite adjacent memory, causing data corruption or security vulnerabilities.

### 6. Platform Dependence
- Pointer size may vary depending on system architecture (e.g., 32-bit vs 64-bit systems).
- This can lead to portability issues if pointer arithmetic is not handled carefully.

### 7. Debugging Difficulty
- Errors related to pointers are often harder to detect and debug than variable-related errors.
- Pointer bugs may cause intermittent or non-reproducible failures.

### 8. Safety and Security Risks
- Incorrect pointer usage can introduce serious security vulnerabilities such as unauthorized memory access.
- Variables, by contrast, are generally safer since they are managed automatically by the language runtime.

### Conclusion
While pointers are essential for low-level programming and performance optimization, they require careful handling. Compared to variables, pointers increase the risk of errors, reduce code safety, and complicate debugging. Therefore, they should be used only when necessary and with proper safeguards.


## Comparison of Call by Value and Call by Reference

When functions are called in programming, data can be passed to them in different ways. The two most common methods are **call by value** and **call by reference**. These methods determine whether the function works on a copy of the data or on the original data.

---

## 6. Call by Value

### Explanation
- In call by value, **a copy of the actual variable’s value** is passed to the function.
- The function operates on this copy.
- **Changes made inside the function do not affect the original variable**.

### How Data Is Passed
- The value stored in the variable is copied into the function’s parameter.
- The parameter and the original variable occupy **different memory locations**.

### Example (C)

```c
#include <stdio.h>

void change(int x) {
    x = 20;
}

int main() {
    int a = 10;
    change(a);
    printf("a = %d\n", a);
    return 0;
}

```
## 7. Practical Scenarios for Call by Value and Call by Reference

In programming, the choice between call by value and call by reference depends on safety, efficiency, and whether the function needs to modify the original data.

---

## a. Scenarios Where Call by Value Is Preferred

### 1. When Original Data Must Not Change
- Used when a function should only **read or compute** values.
- Prevents accidental modification of variables.

**Example:**
- Calculating the area of a circle using a radius.
- Evaluating a mathematical expression.

```c
float area(float r) {
    return 3.14 * r * r;
}

