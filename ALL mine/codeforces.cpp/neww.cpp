#include <iostream>
#include <vector>

using namespace std;

void segregate_rgb(vector<char>& arr) {
    int low = 0, mid = 0, high = arr.size()-1;
    while (mid <= high) {
        if (arr[mid] == 'R') {
            swap(arr[low], arr[mid]);
            low++;
            mid++;
        }
        else if (arr[mid] == 'G') {
            mid++;
        }
        else { // arr[mid] == 'B'
            swap(arr[mid], arr[high]);
            high--;
        }
    }
}

int main() {
    vector<char> arr { 'B', 'R', 'G','G', 'B', 'R', 'R'};
    segregate_rgb(arr);
    for (char c : arr) {
        cout << c << " ";
    }
    cout << endl;
    return 0;
}
