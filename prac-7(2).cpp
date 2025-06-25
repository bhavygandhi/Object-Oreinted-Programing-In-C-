#include <iostream>
using namespace std;
void sort();
void printArray();
void printArray(int arr[], int n) {
    for(int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main() {
    int n;

    cout << "Enter the number of elements: ";
    cin >> n;

    // Dynamically allocate memory
    int* arr = new int[n];

    cout << "Enter " << n << " numbers:\n";
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    Sort(arr, n);

    cout << "Sorted numbers in ascending order:\n";
    printArray(arr, n);

    // Free memory
    delete[] arr;

    return 0;
}
void Sort(int arr[], int n) {
    int temp;
    for(int i = 0; i < n - 1; i++) {
        for(int j = 0; j < n - i - 1; j++) {
            if(arr[j] > arr[j + 1]) {
                // Swap
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}
void printArray(int arr[], int n) {
    for(int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

