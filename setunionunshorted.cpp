#include <iostream>
using namespace std;
int main()
{

    int *set_1, *set_2, *set_3;
    int length_1, length_2, length_3;
    cout << " Enter the length of first set : ";
    cin >> length_1;
    set_1 = new int[length_1];
    cout << "Enter the set_1 elements one by one \n";
    // loop for getting elements for set_1 .
    for (int i = 0; i < length_1; i++)
    {
        cout << i << ": ";
        cin >> set_1[i];
    }
    cout << " Enter the length of second set : ";
    cin >> length_2;
    set_2 = new int[length_2];
    // loop for getting elements for set_2 .
    for (int i = 0; i < length_2; i++)
    {
        cout << i << ": ";
        cin >> set_2[i];
    }
    length_3 = length_1 + length_2 ;
    int k = 0 ;
    set_3 = new int [length_3];
    for ( int i = 0 ; i < length_1 ; i++)
    {
                    set_3[i] = set_1[i];
                        k++ ;
    }
    for (int i = 0 ; i < length_2 ; i++ )
    {
                for (int j = 0 ; j < length_1 ; j++)
                    {
                        if(set_2[i]==set_1[j])
                        {
                            goto label ;
                        }
                        else {
                            // Do nothing ...
                        }
                    }
                set_3[k++]=set_2[i];
                label:
            ;
    }
    for ( int i = 0 ; i < k ; i++ )
                cout<<set_3[i]<<" | ";
    return 0;
}