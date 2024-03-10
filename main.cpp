#include <iostream>
#include "sortedtype.cpp"

using namespace std;
template <class T> void Print(SortedType<T> u){
    int len = u.LengthIs();
    T v;
    for(int i=0; i<len; i++){

    }
}

int main()
{
    SortedType<int> obj1;
    obj1.MakeEmpty();

    cout<<obj1.LengthIs()<<'\n';

    obj1.InsertItem(5);
    obj1.InsertItem(7);
    obj1.InsertItem(4);
    obj1.InsertItem(2);
    obj1.InsertItem(1);

    Print(obj1);
}
