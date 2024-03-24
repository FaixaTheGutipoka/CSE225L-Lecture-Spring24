#include <iostream>
#include "unsortedtype.h"
#include "unsortedtype.cpp"

using namespace std;


template <class T> UnsortedType<int> merge_array(UnsortedType<T> u, UnsortedType<T> v){
    UnsortedType<int> merged;
    int v1, v2, len1=u.LengthIs(), len2=v.LengthIs();
    u.GetNextItem(v1);
    v.GetNextItem(v2);
    while(len1>0&&len2>0){
        if(v1>v2){
            merged.InsertItem(v1);
            len1--;
            if(len1>0)
                u.GetNextItem(v1);
        }else if(v2>v1){
            merged.InsertItem(v2);
            len2--;
            if(len2>0)
                v.GetNextItem(v2);
        }else if(v1==v2){
            merged.InsertItem(v1); //Ami to ekhane ekbar likhsi, then barbar keno print dicche?
            len1--;
            len2--;
            if(len1>0)
                u.GetNextItem(v1);
            if(len2>0)
                v.GetNextItem(v2);
        }
    }
    while(len1>0){
        merged.InsertItem(v1);
        len1--;
        if(len1>0)
            u.GetNextItem(v1);
    }
    while(len2>0){
        merged.InsertItem(v2);
        len2--;
        if(len2>0)
            v.GetNextItem(v2);
    }

    return merged;
}
template <class T> void print(UnsortedType<T> u){
    int v;
    for(int i=0; i<u.LengthIs(); i++){
        u.GetNextItem(v);
        cout<< v << " ";
    }
}


int main()
{
    UnsortedType<int> obj1, obj2, objs_merged;
    int a, b;
    cout<<"No. of elements in obj1: ";
    cin>>a;
    cout<<"Enter the elements of obj1: "<<'\n';
    for(int i=0; i<a; i++){
        cin>>b;
        obj1.InsertItem(b);
    }
    cout<<"No. of elements in obj2: ";
    cin>>a;
    cout<<"Enter the elements of obj2: "<<'\n';
    for(int i=0; i<a; i++){
        cin>>b;
        obj2.InsertItem(b);
    }

    objs_merged=merge_array(obj1, obj2);
    print(objs_merged);

    return 0;
}
/*
0
1
5
6
10
14
20
25
31
38
40

2
2
4
7
9
16
19
23
24
32
35
36
42
*/
