#include <iostream>
using namespace std;
int main(){
               int* p = (int*) malloc(5*sizeof(int)); /*THIS IS MEMORY ALLOCATION CODE OF C LANGUAGE   C++ USES (int *p = new int ;)*/
               for(int i = 0 ; i<=5 ; i++ )
                   cin>>p[i];
               for (int i = 0; i<=5 ; i++ )
               cout<<p[i];
    return 0;
}