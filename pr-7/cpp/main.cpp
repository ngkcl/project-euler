#include <iostream>
#include <math.h>

int is_prime(long long n) {
    if (n%2==0) return false;
    for (long long i=3;i<=sqrt(n);i+=2) {
        if (n%i==0) return false;
    }

    return true;
}

int nth_prime(int n) {
    int prime_index = 2;

    for(int i=4;;++i) {
        if (is_prime(i)) {
            ++prime_index;
            if (prime_index >= n) return i;
        }
    }
}

int main(void) {
    std::cout<<nth_prime(10001)<<std::endl;
}
