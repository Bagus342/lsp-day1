#include <iostream>
using namespace std;

int arr[5];
int index;

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
    float sum = 0;
    float evr = 0;

    cout << "Masukkan jumlah length = ";
    cin >> index;
    for (int i = 0; i < index; i++)
    {
        cout << "Masukkan angka ke-" << i + 1 << " = ";
        cin >> arr[i];
    }
    for (int i = 0; i < index; i++)
    {
        cout << "Nilai ke-" << i + 1 << " = " << arr[i] << endl;
    }
    cout << "Nilai urut dari yang terkecil" << endl;
    small(arr, index);
    for (int x = 0; x < index; x++)
    {
        cout << arr[x] << " ";
    }
    cout << endl;
    cout << "Nilai urut dari yang terbesar" << endl;
    large(arr, index);
    for (int j = 0; j < index; j++)
    {
        cout << arr[j] << " ";
    }
    cout << endl;
    for (int y = 0; y < index; y++)
    {
        sum += arr[y];
    }
    cout << "Total = " << sum << endl;
    cout << "Rata - rata = " << sum / index << endl;
    for (int n = 1; n < index; n++)
    {
        if (arr[0] < arr[n])
        {
            arr[0] = arr[n];
        }
    }
    cout << "Max = " << arr[0] << endl;
    for (int n = 1; n < index; n++)
    {
        if (arr[0] > arr[n])
        {
            arr[0] = arr[n];
        }
    }
    cout << "Min = " << arr[0] << endl;
    return 0;
}