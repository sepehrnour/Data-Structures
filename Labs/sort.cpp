#include <iostream>
using namespace std;

class Sorting
{
public:
    void binarySort(int arr[], int n)
    {
        for (int i = 1; i < n; i++)
        {
            int key = arr[i];
            int j = i - 1;
            while (j >= 0 && arr[j] > key)
            {
                arr[j + 1] = arr[j];
                j--;
            }
            arr[j + 1] = key;
        }
    }
};

int main()
{
    Sorting sort;
    int arr[] = {12, 11, 13, 5, 6, 7};
    int n = sizeof(arr) / sizeof(arr[0]); 
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    sort.binarySort(arr, n);
    cout << "\n";
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    cout << endl;
    return 0;
}