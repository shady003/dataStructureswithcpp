#include <iostream>
using namespace std;
int main()
{
    int *arr;
    int size = 0;
    cout << "Enter the size of array : ";
    cin >> size;
    arr = new int[size];
    cout << "Enter the number one by one \n";
    for (int i = 0; i < size; i++)
        cin >> arr[i];
    int low = arr[0], high = arr[size - 1];
    int dif = arr[0];
    int count = 0;
    for (int i = 0; i < size; i++)
    {
        if (arr[i] - i != dif)
        {
            int miss = i + dif;
            cout << "The missing number is : " << miss;
            count++;
            break;
        }
    }
    if (count == 0)
    {
        cout << "No Missing Elemnet";
    }
    return 0;
}