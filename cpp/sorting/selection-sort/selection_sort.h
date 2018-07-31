//Seletion Sort Method
namespace My_namespace
{
    template <typename T>
    void selection_sort(std::vector<T> &arr)
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
        for(uint64_t i=0; i!=(arr.size()-1); ++i)
        {
            uint64_t min_index=i;
            for(uint64_t j=i; j!=arr.size(); ++j)
                if(arr[min_index] > arr[j])
                    min_index = j;
            std::swap(arr[i],arr[min_index]);
        }
    }
}
//Selection sort methond is defined in namespace My_namespace
//Accepts std::vector of type for which ">" operator is by default overloaded
//Has best case time complexity of Ω(n)
//Has worst case time complexity of O(n*n)
//For usage see main.cpp in same directory