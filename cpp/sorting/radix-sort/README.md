
# Radix Sort

### Comments:

1. Radix sort methond is defined in namespace My_namespace in file bubble_sort.h.
2. Has best case time complexicity of Ω(n).
3. Has worst case time complexity of O(n+k), where k is expontial degree of base 10 of maximum element.
4. For usage see main.cpp in same directory.
5. Link to [geeksforgeeks](https://www.geeksforgeeks.org/radix-sort/) 
6. Count sort is used as sub routine for radix sort.
7. Radix sort is a non-comparative integer sorting algorithm that sorts data with integer keys by grouping keys by the individual digits which share the same significant position and value. A positional notation is required, but because integers can represent strings of characters (e.g., names or dates) and specially formatted floating point numbers, radix sort is not limited to integers.


### Radix Sort Code

    ```C++
    template <typename T>
    void radix_sort(std::vector<T> &arr)
    {
        //Checking if already sorted data
        bool already_sorted = true;
        for(uint64_t i=0; i!=(arr.size()-1); ++i)
            if(arr[i+1] < arr[i])
            {
                already_sorted = false;
                break;
            }
        if(already_sorted)//Return if data is already sorted
            return;   

        //Getting maximum element.
        auto max = *max_element(arr.begin(), arr.end());
        
        //Sorting
        for(int exp=1; max/exp > 0; exp*=10)
            countSort<T>(arr, exp);
    }
    ```