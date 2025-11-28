#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> arr = {2, -5, 8, -3, 10, 7, 4, -1};

    // Удаляем первый отрицательный
    for (size_t i = 0; i < arr.size(); i++) {
        if (arr[i] < 0) {
            arr.erase(arr.begin() + i);
            break;
        }
    }

    // Удаляем последний четный
    for (int i = arr.size() - 1; i >= 0; i--) {
        if (arr[i] % 2 == 0) {
            arr.erase(arr.begin() + i);
            break;
        }
    }

    // Вывод результата
    for (int num : arr) cout << num << " ";

    return 0;
}