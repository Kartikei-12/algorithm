//Radix Sort Method
namespace My_namespace
{
    template <typename T>
    void countSort(std::vector<T> &arr, T exp)
    {
        std::vector<T> out(arr.size(), 0), count(10, 0);
        
        //Counting frequency of digit on given place
        for(int i=0; i<arr.size(); ++i)
            ++count[ (arr[i]/exp)%10 ];
        
        //Creating Cummulative record
        for(int i=1; i<10; ++i)
            count[i] += count[i-1];
        
        for(int i=arr.size()-1; i>=0; --i)
        {
            out[count[ (arr[i]/exp)%10 ] - 1] = arr[i];
            --count[ (arr[i]/exp)%10 ];
        }
        arr.assign(out.begin(), out.end());
    }

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
}
//Radix sort methond is defined in namespace My_namespace
//Has best case time complexity of Ω(n)
//Has worst case time complexity of O(n+k), where k is expontial degree of base 10 of maximum element.
//For usage see main.cpp in same directory
//Count sort is used as sub routine for radix sort