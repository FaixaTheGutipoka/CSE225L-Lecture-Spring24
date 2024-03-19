#include <iostream>
#include "unsortedtype.cpp"
#include <string.h>
using namespace std;
template <class T> void Print(UnsortedType<T> u){
    T v;
    u.ResetList();
    int len = u.LengthIs();
    for(int i=0; i<len; i++){
        u.GetNextItem(v);
        cout << v << " ";
    }
}
template <class studentInfo> void PrintStudent(UnsortedType<studentInfo> u){
    studentInfo v;
    u.ResetList();
    int len = u.LengthIs();
    for(int i=0; i<len; i++){
        u.GetNextItem(v);
        cout << v.ID << " " << v.NAME << " " << v.CGPA <<'\n';
    }
}
template <class T> void Retrieve(UnsortedType<T> u, T v){
    bool a;
    u.RetrieveItem(v, a);
    if (a)
        cout<<"Item is found";
    else
        cout<<"Item is not found";
}

template <class T> void Full(UnsortedType<T> u){
    bool a = u.IsFull();
    if (a)
        cout<<"List is full ";
    else
        cout<<"List is not full ";
}

class studentInfo{
    public:
    int ID;
    string NAME;
    float CGPA;

    studentInfo(){
        ID = 0;
        NAME = "";
        CGPA = 0;
    }
    studentInfo(int id){
        ID=id;
        NAME = "";
        CGPA = 0;
    }
    studentInfo(int id, string name, float cgpa){
        ID=id;
        NAME=name;
        CGPA=cgpa;
    }
    void PrintStudent(studentInfo s){
        cout<<s.ID;
        cout<<s.NAME;
        cout<<s.CGPA;
    }
    bool operator == (studentInfo s){
        return (ID==s.ID);
    }
    bool operator != (studentInfo s){
        return (ID!=s.ID);
    }
};

int main()
{
    UnsortedType<int> obj1;

    obj1.InsertItem(5);
    obj1.InsertItem(7);
    obj1.InsertItem(6);
    obj1.InsertItem(9);

    Print(obj1);
    obj1.ResetList();
    cout<<'\n';

    cout<<obj1.LengthIs();
    cout<<'\n';

    obj1.InsertItem(1);

    Print(obj1);
    obj1.ResetList();
    cout<<'\n';

    Retrieve(obj1, 4);
    cout<<'\n';
    Retrieve(obj1, 5);
    cout<<'\n';
    Retrieve(obj1, 9);
    cout<<'\n';
    Retrieve(obj1, 10);
    cout<<'\n';

    Full(obj1);
    cout<<'\n';

    obj1.DeleteItem(5);

    Full(obj1);
    cout<<'\n';

    obj1.DeleteItem(1);

    Print(obj1);
    obj1.ResetList();
    cout<<'\n';

    obj1.DeleteItem(6);

    Print(obj1);
    obj1.ResetList();
    cout<<'\n';


    //Task 2:
    UnsortedType<studentInfo> s;

    studentInfo s1(15234, "Jon", 2.6), s2(13732, "Tyrion", 3.9), s3(13569, "Sandor", 1.2), s4(15467, "Ramsey 2", 3.1), s5(16285, "Arya", 3.1);

    s.InsertItem(s1);
    s.InsertItem(s2);
    s.InsertItem(s3);
    s.InsertItem(s4);
    s.InsertItem(s5);
    cout<<'\n';

    studentInfo temp(15467);
    s.DeleteItem(temp);

    studentInfo temp2(13569);

    bool z;
    s.RetrieveItem(temp2, z);
    if (z)
        cout<<"Item is found"<<'\n'<<temp2.ID << " " << temp2.NAME << " " << temp2.CGPA <<'\n';
    else
        cout<<"Item is not found";

    cout<<'\n';

   PrintStudent(s);
    return 0;
}
