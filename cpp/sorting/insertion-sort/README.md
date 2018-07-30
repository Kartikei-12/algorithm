
# Insertion Sort

### Comments:

1. Insertion sort methond is defined in namespace My_namespace in file bubble_sort.h .
2. Accepts std::vector of type for which ">" operator is by default overloaded.
3. Has best case time complexicity of Ω(n).
4. Has worst case time complexity of O(n*n)
5. For usage see main.cpp in same directory.
6. Link to [geeksforgeeks](https://www.geeksforgeeks.org/insertion-sort/)

### Bubble Sort Code

    ```C++
    for(uint64_t i=1; i<arr.size(); ++i)
        {
            T temp = arr[i];
            //Could not have used unsigned type,
            //because j may be negative just before folowing,
            //loop is broken.
            int64_t j = i-1;
            for(; (j>=0) && (temp<arr[j]); --j)
                arr[j+1] = arr[j];
            arr[j+1] = temp;
        }
    ```