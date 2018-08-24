//Sieve Of Eratosthenes Algorithm 
namespace My_namespace
{
    //Sieve Of Eratosthenes O(n*log(log(n)))
    std::vector<int> getSieveOfEratosthenes(int64_t max, int64_t min=3)
    {
        if(min&2)
            ++min;
        std::vector<bool> primes(max, true);
        int64_t sz = primes.size();

        for(int64_t i = 3; i < sz ; i+=2)
            if(primes[i]) 
                for(int j = i*i; j<sz; j+=i)
                    primes[j] = false;
        
        std::vector<int> ret;
        ret.reserve(primes.size());
        ret.push_back(2);

        for(int i=min; i<sz; i+=2)
            if(primes[i])
                ret.push_back(i);
        return ret;
    }
}