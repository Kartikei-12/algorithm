
//Fast Modular Exponentiation
namespace my_namespace
{
    inline int64_t mod_Exp(int64_t b, int64_t e,int64_t m)
    {
        int64_t remainder=0, x = 1;
        while (e!=0)
        {
            remainder = e%2;
            e /= 2;
            if(remainder == 1)
                x = (x*b) % m;
            b = (b * b) % m; // New base equal b^2 % m
        }
        return x;
    }
}
