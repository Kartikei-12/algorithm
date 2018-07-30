
# Bubble Sort

### Comments:

1. Bubble sort methond is defined in namespace My_namespace in file bubble_sort.h .
2. Accepts std::vector of type for which ">" operator is by default overloaded.
3. Has best case time complexicity of Ω(n).
4. Has worst case time complexity of O(n*n)
5. For usage see main.cpp in same directory.
6. Link to [geeksforgeeks](https://www.geeksforgeeks.org/bubble-sort/) 

### Bubble Sort Code

    ```C++
    for(uint64_t i=0; i!=(arr.size()-1); ++i)
        for(uint64_t j=0; j!=(arr.size()-i-1); ++j)
            if(arr[j] > arr[j+1])
                std::swap(arr[j],arr[j+1]);
    ```