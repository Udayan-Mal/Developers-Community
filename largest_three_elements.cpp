#include <iostream>
#include <climits>
using namespace std;

void findLargestThree(int arr[], int n) {
    
    int first = INT_MIN, second = INT_MIN, third = INT_MIN;

    for (int i = 0; i < n; i++) {
        
        if (arr[i] > first) {
            third = second;  // Update third to second
            second = first;  // Update second to first
            first = arr[i];  // Update first to current element
        } else if (arr[i] > second && arr[i] != first) {
            third = second;  // Update third to second
            second = arr[i]; // Update second to current element
        } else if (arr[i] > third && arr[i] != second && arr[i] != first) {
            third = arr[i];  // Update third to current element
        }
    }

    if (third == INT_MIN) {
        cout << "There are less than three distinct elements in the array." << endl;
    } else {
        cout << "The largest three elements are: " << first << ", " << second << ", " << third << endl;
    }
}

int main() {
    int n;

  
    cout << "Enter the number of elements in the array: ";
    cin >> n;

    int arr[n];

  
    cout << "Enter " << n << " integers: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    
    findLargestThree(arr, n);

    return 0;
}
