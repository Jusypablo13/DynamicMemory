
---

#### Overview:
The `main.cpp` file demonstrates the concept of dynamic memory allocation in C++. This program dynamically adjusts the size of an integer array based on the number of user inputs. When the array reaches its capacity, the program automatically allocates more memory to accommodate additional inputs. It illustrates key concepts like resizing arrays and managing memory manually using pointers.

#### Features Covered:

1. **Dynamic Memory Allocation:**
   - The program dynamically allocates memory for an array using the `new` operator.
   - As more numbers are entered by the user, the array is resized to double its current capacity when full.

2. **Memory Management:**
   - Old memory is properly freed using the `delete[]` operator to prevent memory leaks.
   - Pointers are updated to point to the newly allocated memory after resizing the array.

3. **Resizing Arrays:**
   - If the number of entries exceeds the array's capacity, a new, larger array is created, and the data from the old array is copied into it.

---

#### Code Highlights:

- **Dynamic Array Creation:**
   ```cpp
   int capacities = 5;
   int *number = new int[capacities]; // Allocate memory for 5 integers
   ```

- **Resizing the Array Dynamically:**
   ```cpp
   if(entries == capacities) {
       capacities *= 2;
       int *temp = new int[capacities]; // Create a new array with double capacity
       for(int i = 0; i < entries; i++) {
           temp[i] = number[i]; // Copy data to the new array
       }
       delete[] number; // Free old memory
       number = temp; // Update pointer to new array
   }
   ```

- **Manual Memory Management:**
   The program dynamically allocates memory for the array and resizes it as necessary. Before resizing, the old array’s memory is freed using `delete[]` to avoid memory leaks:
   ```cpp
   delete[] number;
   ```

---

#### Key Concepts:

1. **Dynamic Memory Allocation:**
   Dynamic memory allocation allows the program to allocate memory during runtime, which is useful when the size of an array or object is not known ahead of time. In C++, this is done using the `new` operator:
   ```cpp
   int* array = new int[5];
   ```

2. **Memory Deallocation:**
   To avoid memory leaks, dynamically allocated memory must be freed using `delete[]` for arrays and `delete` for single variables. This ensures that memory no longer needed by the program is returned to the system:
   ```cpp
   delete[] array;
   ```

3. **Resizing an Array:**
   Since statically declared arrays cannot change size, dynamically allocated arrays can be resized by allocating a new array with a larger capacity, copying the old data, and freeing the old array’s memory. This process is often used in dynamic data structures like vectors or lists in higher-level implementations.

---