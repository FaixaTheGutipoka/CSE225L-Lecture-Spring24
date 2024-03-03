#include <iostream>
#include "dynArr.cpp"

using namespace std;

int main()
{
    dynArr<int> obj1(5);
    dynArr<char> obj2(5);

    int a;
    char b;

    for(int i=0; i<5; i++){
        cin>>a;
        obj1.setValue(i, a);
    }

    cout<<'\n';

    for(int i=0; i<5; i++){
        cout<<obj1.getValue(i)<<" ";
    }

    cout<<'\n';

    for(int i=0; i<5; i++){
        cin>>b;
        obj2.setValue(i, b);
    }

    cout<<'\n';

    for(int i=0; i<5; i++){
        cout<<obj2.getValue(i)<<" ";
    }
    return 0;
}
