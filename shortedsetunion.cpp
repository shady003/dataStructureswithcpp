#include <iostream>
using namespace std;
int *unionShorted(int *set1, int *set2, int length1, int length2)
{
        int *set3 = new int[length1 + length2];
        int i, j, k;
        i = j = k = 0;
        while (i < length1 || j < length2)
        {
                if (set1[i] < set2[j])
                        set3[k++] = set1[i++];
                else if (set2[j] < set1[i])
                        set3[k++] = set2[j++];
                else
                {
                        set3[k++] = set1[i++];
                        j++;
                }
        }
        return set3;
}
int main()
{
        int *set_1, *set_2, *set_3;
        int length_1, length_2, length_3;
        cout << "Enter the length of first set : ";
        cin >> length_1;
        set_1 = new int[length_1];
        cout << "Enter the elements of set_1 \n";
        for (int i = 0; i < length_1; i++)
                cin >> set_1[i];
        cout << "Enter the length of second set : ";
        cin >> length_2;
        set_2 = new int[length_2];
        cout << "Enter the elements of set_2 \n";
        for (int j = 0; j < length_2; j++)
                cin >> set_2[j];
        length_3 = length_1 + length_2;
        set_3 = unionShorted(set_1, set_2, length_1, length_2);
        // int i = 0 ;
        // for ( int k = 0 ; k< length_3 ; k++){
        //                 if ( k < length_1 ){
        //                 set_3[k] = set_1[k];
        //                 cout<<set_3[k]<<"|";
        //                 }
        //                 else {
        //                         set_3[k] = set_2[i++];
        //                         cout<<set_3[k]<<"|";
        //                 }

        // }
        for (int i = 0; i < length_3; i++)
                cout << set_3[i] << "|";

        return 0;
}