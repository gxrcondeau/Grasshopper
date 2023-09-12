#include <iostream>
#include <vector>

using namespace std;

vector<int> countPositivesSumNegatives(vector<int> input)
{
    vector<int> result = {0, 0};
    if (input != vector<int>{}) {
        for (int i = 0; i < input.size(); i++) {
            input.at(i) > 0 ? result.at(0) += 1 : result.at(1) += input.at(i);
        }
    }
    else return {};
    return result;
}

int main() {
    countPositivesSumNegatives({1, 2, 3, 4, 5, 6, 7, 8, 9, 10, -11, -12, -13, -14, -15});
    return 0;
}