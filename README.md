DSA (DATA STRUCTURES & ALGORITHMS) IN C
This project is a collection of BASIC DATA STRUCTURE and ALGORITHM implementations in C. It provides an interactive MENU for users to CREATE, MANIPULATE, and SEARCH arrays using different algorithms like LINEAR SEARCH, BINARY SEARCH, and BUBBLE SORT.



FEATURES

1) CREATE ARRAY: Users can define the size of an array and input values.
2) PRINT ARRAY: Display all elements of the array.
3) INSERT ELEMENT: Insert a new element at a specific POSITION.
4) DELETE ELEMENT: Remove an element from a specified POSITION.
5) LINEAR SEARCH: Find an element by checking each position one by one.
6) BINARY SEARCH: Efficiently find an element in a sorted array.
7) BUBBLE SORT: Sort the array in ascending order.

IMPORTANT NOTES


1). BINARY SEARCH sorts the array before performing the search, so the array must be manipulated accordingly.
Ensure you enter valid positions when inserting or deleting; out-of-bound errors may occur otherwise.
The array size is fixed to 100 elements, but can be modified easily in the code.

FUNCTIONS OVERVIEW

CREATEARRAY(): Asks the user for the array size and elements.
PRINTARRAY(): Displays all elements of the array with their indices.
INSERTARRAY(): Inserts a new element at a specified position and adjusts the size.
DELETEARRAY(): Deletes an element at a specified position and updates the size.
LINEARSEARCH(): Finds an element by checking each array element sequentially.
BINARYSEARCH(): Finds an element using a binary search algorithm (after sorting).
BUBBLESORT(): Sorts the array using the bubble sort algorithm.

FUTURE IMPROVEMENTS

1). Add support for dynamic array sizes (instead of a fixed limit).
2). Handle edge cases like empty arrays or invalid inputs.
3). Modularize code further by separating logic into multiple source files.
