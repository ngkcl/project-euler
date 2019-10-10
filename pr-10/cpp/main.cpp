#include <iostream>
#include <math.h>

using namespace std;

bool is_prime(int n) {
    if (n<=3 && n>0) return true;
    if (n%2==0) return false;

    for (int i=3; i<n/2; i+=2) {
        if (n%i==0) return false;
    }
    return true;
}

// TODO: Try with sieve

// CURRENTLY: Greedy
int main(void) {
    long int sum = 2;
    int n = 2000000;
    for (int i=3; i<n; i++) {
        if (is_prime(i))  {
            cout<<i<<endl;
            sum += i;
        }
    }

    cout<<sum<<endl;
}