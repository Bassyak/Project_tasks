#include <iostream>

void findMinAndMax(int arr[], int len)
{
    int min = arr[0], max = arr[0], minIndex = 0, maxIndex = 0;
    for (int i = 1; i < len; ++i)
    {
        if (arr[i] < min)
        {
            min = arr[i];
            minIndex = i;
        }
        if (arr[i] > max)
        {
            max = arr[i];
            maxIndex = i;
        }
    }
    std::cout << "Min element is " << min << " at position " << minIndex + 1 << "\n";
    std::cout << "Max element is " << max << " at position " << maxIndex + 1 << "\n";
}

int main()
{
    int arr[] = { 12, 1234, 45, 67, 1 };
    int n = sizeof(arr) / sizeof(arr[0]);
    findMinAndMax(arr, n);
    return 0;
}