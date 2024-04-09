#include <iostream>

void reverseArray(int arr[], int len)
{
    int start = 0;
    int end = len - 1;
    while (start < end)
    {
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        start++;
        end--;
    }
}

void printArray(int arr[], int len)
{
    for (int i = 0; i < len; i++)
        std::cout << arr[i] << " ";
    std::cout << "\n";
}

int main()
{
    int arr[] = { 1, 2, 3, 4, 5, 6 };
    int n = sizeof(arr) / sizeof(arr[0]);
    printArray(arr, n);

    reverseArray(arr, n);
    std::cout << "Reversed array is \n";
    printArray(arr, n);
    return 0;
}