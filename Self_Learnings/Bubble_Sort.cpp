#include <iostream>

using namespace std;

void Print(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i];
    }
    cout << endl;
}

void bubble(int arr[], int n)
{
    int temp;
    bool isSwapped = false;
    for (int i = 0; i < n; i++)
    {
        isSwapped = false;
        for (int j = 0; j, n - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                isSwapped = true;
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
        if (!isSwapped)
        {
            break;
        }
    }
}

int main()
{
    int a[5] = {15, 16, 11, 13, 14};
    int n = sizeof(a) / sizeof(a[0]);
    cout << "Before Sorting Array Elements are: ";
    Print(a, n);
    bubble(a, n);
    cout << "After Sorting Array Elements are: ";
    Print(a, n);

    return 0;
}