//Bubble Sort Method
namespace My_namespace
{
    template <typename T>
    void bubble_sort(std::vector<T> &arr)
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

        for(uint64_t i=0; i!=(arr.size()-1); ++i)
            for(uint64_t j=0; j!=(arr.size()-i-1); ++j)
                if(arr[j] > arr[j+1])
                    std::swap(arr[j],arr[j+1]);
    }
}
//Bubble sort methond is defined in namespace My_namespace
//Accepts std::vector of type for which ">" operator is by default overloaded
//Has best case time complexity of Ω(n)
//Has worst case time complexity of O(n*n)
//For usage see main.cpp in same directory 