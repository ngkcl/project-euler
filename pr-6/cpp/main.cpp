#include <math.h>
#include <iostream>

using namespace std;

int main(void) {
    long long sum = 0;
    long sum_squares = 0;
    for (int i=1; i<=100; i++) {
        sum += i;
        sum_squares += pow(i,2);
    }
    sum = pow(sum, 2);
    long long diff = sum - sum_squares;
    cout<<diff<<endl;
}