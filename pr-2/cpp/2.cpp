#include <iostream>
#include <cstdio>

using namespace std;

int fibonacci(int n) {
    if (n <= 2) return 1;
    else return fibonacci(n-1) + fibonacci(n-2);
}

int main(void) {
    bool exceededFourMil = false;
    int n = 1;
    int sum = 0;

    do {
        int term = fibonacci(n++);

        if (term >= 4000000) {
            exceededFourMil = !exceededFourMil;
            break;
        }

        if (term%2 == 0) sum += term;
    } while (!exceededFourMil);

    cout<<"sum is "<<sum<<endl;
    return 0;
}