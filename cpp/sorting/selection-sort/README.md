
# Selection Sort

### Comments:

1. Selection sort methond is defined in namespace My_namespace in file selection_sort.h .
2. Accepts std::vector of type for which ">" operator is by default overloaded.
3. Has best case time complexicity of Ω(n).
4. Has worst case time complexity of O(n*n)
5. For usage see main.cpp in same directory.
6. Link to [geeksforgeeks](https://www.geeksforgeeks.org/selection-sort/)

### Selection Sort Code

    ```C++
    for(uint64_t i=0; i!=(arr.size()-1); ++i)
        {
            uint64_t min_index=i;
            for(uint64_t j=i; j!=arr.size(); ++j)
                if(arr[min_index] > arr[j])
                    min_index = j;
            std::swap(arr[i],arr[min_index]);
        }
    ```