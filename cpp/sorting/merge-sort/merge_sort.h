//Merge Sort Method
namespace My_namespace
{
    template <typename T>
    void merge(std::vector<T> &arr, int start, int middle, int end)
    {
        std::vector<T> L(arr.begin()+start, arr.begin()+middle), R(arr.begin()+middle, arr.begin()+end);
        arr.erase(arr.begin()+start, arr.begin()+end);
        
        typename std::vector<T>::iterator it = arr.begin()+start;
        while(!L.empty() && !R.empty())
        {
            if(L.front() <= R.front())
            {    
                arr.insert(it, L.front());
                L.erase(L.begin());
            }
            else
            {    
                arr.insert(it, R.front());
                R.erase(R.begin());
            }
            ++it;
        }
        if(!L.empty())
            arr.insert(it, L.begin(), L.end());
        if(!R.empty())
            arr.insert(it, R.begin(), R.end());
    }

    template <typename T>
    void mergesort(std::vector<T> &arr, int start, int end)
    {
        if(start < end)
        {
            int64_t m = start + (end-start)/2;
            mergesort<T>(arr, m+1, end);
            mergesort<T>(arr, start, m);
            merge<T>(arr, start, m, end);
        }
    }

    template <typename T>
    void merge_sort(std::vector<T> &arr)
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
        mergesort<T>(arr, 0, arr.size());
    }
}
//Merge sort methond is defined in namespace My_namespace
//Accepts std::vector of type for which ">" operator is by default overloaded
//Has best case time complexity of Ω(n)
//Has worst case time complexity of O(n*log(n))
//For usage see main.cpp in same directory