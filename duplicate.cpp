#include <iostream>
using namespace std;
int main()
{
    int *A;
    int count = 0, length;
    cout << "Enter the length of array \n";
    cin >> length;
    A = new int[length];
    for (int i = 0; i < length; i++)
    {

        cout << "Enter Element " << i + 1 << ": ";
        cin >> A[i];
    }
    cout << "duplicate elements are : \n";
    for (int i = 0; i < length; i++)
    {
        if (A[i] == A[i + 1] && A[i] != count)
        {
            int j = i + 1;
            while (A[i] == A[j])
            {
                j++;
            }
            cout << "Duplicate element : " << A[i] << " " << j - i << " times\n";
            count = A[i];
            i = j - 1;
        }
    }
    if (count == 0 ){
        cout<<"No Duplicate value";
    }

    return 0;
}