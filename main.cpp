#include <iostream>

using namespace std;

char getGrade(int a, int b, int c) {
    return ((a + b + c) / 3) >= 90 ? 'A' : ((a + b + c) / 3)  >= 80 ? 'B' : ((a + b + c) / 3) >= 70 ? 'C' : ((a + b + c) / 3) >= 60 ? 'D' : 'F';
}

int main() {
    char a = getGrade(95, 93, 90);
    cout << a;
    return 0;
}