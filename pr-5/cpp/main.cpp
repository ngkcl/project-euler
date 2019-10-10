#include <iostream>

using namespace std;

int main(void) {
   int n=1;
   while (true) {
       bool success = true;
       for (int i=2; i<=20; i++) {
           if (n%i != 0) {
               success = false;
           }
       }

       if (success) {
           cout<<n<<endl;
           return 0;
       }

       n++;
   }
}