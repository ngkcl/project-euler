#include <iostream>
#include <vector>
#include <math.h>

using namespace std;

int biggest_prime_factor(long long n) {
    long long prime = -1;

    while (n%2 == 0) {
        n/=2;
        prime = 2;
    }
    for (long long i=3; i<=sqrt(n); i+=2) {
        while (n%i == 0) {
            n=n/i;
            prime = i;
            cout<<"Factorizing by "<<prime<<endl;
        }
    }

    if (n>2) {
        prime = n;
    }
    return prime;
} 

int main(void) {
    long long input;
    cout<<"What is your number: ";
    cin>>input;
    cout<<endl<<"Largest prime factor: "<<biggest_prime_factor(input)<<endl;
    return 0;
} 
