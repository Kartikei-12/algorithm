
# Quick Sort

### Comments:

1. Quick sort methond is defined in namespace My_namespace in file merge_sort.h .
2. Accepts std::vector of type for which ">" operator is by default overloaded.
3. Has best case time complexicity of Ω(n).
4. Has worst case time complexity of O(n*log(n))
5. For usage see main.cpp in same directory.
6. Link to [geeksforgeeks](https://www.geeksforgeeks.org/quick-sort/)

### Quick Sort Code

```C++
    auto Partition(std::vector<auto > &arr,auto start,auto end)
    {
        auto pi = arr[end], j = start;
        for(auto i=start; i<=end; ++i)
            if(arr[i] <= pi)
            {
                std::swap(arr[i],arr[j]);
                ++j;
            }
        return j-1;
    }
    
    void quicksort(std::vector<auto > &arr,auto start,auto end)
    {
        if(start < end)
        {
            auto pivot = Partition(arr,start,end);
            quicksort(arr,pivot+1,end);
            quicksort(arr,start,pivot-1);
        }
    }

    template <typename T>
    void quick_sort(std::vector<T> &arr)
    {
        //Checking if already sorted data
        bool already_sorted = true;
        for(uint64_t i=0; i!=(arr.size()-1); ++i)
            if(arr[i+1] > arr[i])
            {
                already_sorted = false;
                break;
            }
        if(already_sorted)//Return if data is already sorted
            return;
        //Sorting
        quicksort(arr, 0, arr.size()-1);
    }
```