#include <iostream>
#include <string>

using namespace std;

bool isPalindrome(int n) {
    std::string str = std::to_string(n);
    int max_index = str.length() - 1;
    for (int i=0; i<= max_index; i++) {
        if (str[i] != str[max_index]) return false;
        max_index--;
    }
    return true;
}

int main(void) {
    int num1 = 999;
    int num2 = 999;
    int largest = 0;

    while (true) {
        if (isPalindrome(num1*num2)) {
            if (num1*num2 > largest) largest=num1*num2;
        }
        --num2;
        if (num2 == 0) {
            --num1;
            num2 = num1;
        }

        if (num1==100) break;
    }

    cout<<largest<<endl;
    
} 