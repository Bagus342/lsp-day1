#include <iostream>
using namespace std;

void large(int arr[], int length)
{
    int i, j, min, temp;
    for (i = 0; i < length - 1; i++)
    {
        min = i;
        for (j = i + 1; j < length; j++)
            if (arr[j] > arr[min])
                min = j;
        temp = arr[i];
        arr[i] = arr[min];
        arr[min] = temp;
    }
}

void small(int arr[], int length)
{
    int i, j, min, temp;
    for (i = 0; i < length - 1; i++)
    {
        min = i;
        for (j = i + 1; j < length; j++)
            if (arr[j] < arr[min])
                min = j;
        temp = arr[i];
        arr[i] = arr[min];
        arr[min] = temp;
    }
}

int main()
{
    int arr[] = {70, 80, 67, 90, 100};
    float sum = 0;
    float evr = 0;
    int length = sizeof(arr) / sizeof(arr[0]);
    for (int i = 0; i < length; i++)
    {
        cout << "Nilai ke-" << i + 1 << " = " << arr[i] << endl;
    }
    cout << "Nilai urut dari yang terkecil" << endl;
    small(arr, length);
    for (int x = 0; x < length; x++)
    {
        cout << arr[x] << " ";
    }
    cout << endl;
    cout << "Nilai urut dari yang terbesar" << endl;
    large(arr, length);
    for (int j = 0; j < length; j++)
    {
        cout << arr[j] << " ";
    }
    cout << endl;
    for (int y = 0; y < length; y++)
    {
        sum += arr[y];
    }
    cout << "Total = " << sum << endl;
    cout << "Rata - rata = " << sum / length << endl;
    for (int n = 1; n < length; n++)
    {
        if (arr[0] < arr[n])
        {
            arr[0] = arr[n];
        }
    }
    cout << "Max = " << arr[0] << endl;
    for (int n = 1; n < length; n++)
    {
        if (arr[0] > arr[n])
        {
            arr[0] = arr[n];
        }
    }
    cout << "Min = " << arr[0] << endl;
    return 0;
}