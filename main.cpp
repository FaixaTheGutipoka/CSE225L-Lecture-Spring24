#include <iostream>
#include "dynarr.h"
//if gives error try using '.cpp'
//in case we are using '.cpp' initially and it still gives error, try '.h' instead

using namespace std;

int main()
{
    //Task 1
    int v1, p1, v2, p2, s1;
    dynArr a1;
    dynArr a2(5);
    for(int i=0; i<5; i++){
        cin>>v2;
        a2.setValue(i,v2);
    }
    for(int i=0; i<5; i++){
        p2=a2.getValue(i);
        cout<<p2<<" ";
    }

    //Task 2
    cin>>s1;
    a1.allocate(s1);
    for(int i=0; i<s1; i++){
        cin>>v1;
        a1.setValue(i,v1);
    }
    for(int i=0; i<s1; i++){
        cout<<a1.getValue(i)<<" ";
    }
    return 0;
}
