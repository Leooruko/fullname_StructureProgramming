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
  
4. 

