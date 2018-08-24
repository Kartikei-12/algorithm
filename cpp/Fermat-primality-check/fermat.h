//Method to check primality using Fermat's theoram
namespace My_namespace
{
    bool is_prime(int64_t x) {
        return ((2 << x - 2) % x) == 1;
    }
}