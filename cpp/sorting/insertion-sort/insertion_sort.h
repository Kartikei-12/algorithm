//Bubble Sort Method
namespace My_namespace
{
    template <typename T>
    void insertion_sort(std::vector<T> &arr)
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
    }
}
//Insertion sort methond is defined in namespace My_namespace
//Accepts std::vector of type for which ">" operator is by default overloaded
//Has best case time complexity of Ω(n)
//Has worst case time complexity of O(n*n)
//For usage see main.cpp in same directory