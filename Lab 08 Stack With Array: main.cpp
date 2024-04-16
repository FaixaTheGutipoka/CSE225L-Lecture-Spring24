#include <iostream>
#include "stacktype.h"
#include "stacktype.cpp"

using namespace std;

template <class T> void Empty(StackType<T> u)
{
    bool a = u.IsEmpty();
    if (a)
        cout << "Stack is Empty" << '\n';
    else
        cout << "Stack is not Empty" << '\n';
}
template <class T> void Full(StackType<T> u)
{
    bool a = u.IsFull();
    if (a)
        cout << "Stack is Full" << '\n';
    else
        cout << "Stack is not Full" << '\n';
}
template <class T> void Print(StackType<T> u)
{
    StackType<int> temp;
    int a;
    while(!u.IsEmpty())
    {
        a = u.Top();
        temp.Push(a);
        u.Pop();
    }

    while(!temp.IsEmpty())
    {
        a = temp.Top();
        u.Push(a);
        cout << a << " ";
        temp.Pop();
    }
    cout << '\n';
}
/*
template <class T> void Balance(StackType<char>& u, const string& a)
{
    int i;
    while(i<a.size())
    {
        char b = a[i];
        if (b == '(')
        {
            u.Push(b);
        }
        try
        {
            if (b==')')
            {
                if (!u.IsEmpty())
                {
                    throw EmptyStack();
                }
                else
                {
                    u.Pop();
                }
            }
        }
        catch(EmptyStack)
        {
            cout << "Not Balanced";
            break;
        }
        i++;
    }
    if (u.IsEmpty())
    {
        cout << "Balanced"<<'\n';
    }
    else
    {
        cout << "Not Balanced" << '\n';
    }
}
*/

int main()
{
    StackType<int> obj1;

    Empty(obj1);

    obj1.Push(5);
    obj1.Push(7);
    obj1.Push(4);
    obj1.Push(2);

    Empty(obj1);

    Full(obj1);

    Print(obj1);

    obj1.Push(3);

    Print(obj1);

    Full(obj1);

    obj1.Pop();
    obj1.Pop();

    cout << obj1.Top() << '\n';

    StackType<char> obj2, obj3, obj4, obj5;
    string s1 = "()", s2 = "(())()(()())()", s3 = "(())()((()", s4 = "(())))((()";

    //s1:
    for (int i = 0; s1[i] != '\0'; i++)
    {

        char x = s1[i];

        if (x == '(')
            obj2.Push(x);

        try
        {
            if (x == ')')
                obj2.Pop();
        }
        catch (EmptyStack)
        {
            cout << "Unbalanced" << endl;
            return 0;
        }
    }

    if (obj2.IsEmpty())
        cout << "Balanced" << endl;
    else
        cout << "Not balanced" << endl;


    //s2:
    for (int i = 0; s2[i] != '\0'; i++)
    {

        char x = s2[i];

        if (x == '(')
            obj3.Push(x);

        try
        {
            if (x == ')')
                obj3.Pop();
        }
        catch (EmptyStack)
        {
            cout << "Unbalanced" << endl;
            return 0;
        }
    }

    if (obj3.IsEmpty())
        cout << "Balanced" << endl;
    else
        cout << "Not balanced" << endl;

    //s3:
    for (int i = 0; s3[i] != '\0'; i++)
    {

        char x = s3[i];

        if (x == '(')
            obj4.Push(x);

        try
        {
            if (x == ')')
                obj4.Pop();
        }
        catch (EmptyStack)
        {
            cout << "Unbalanced" << endl;
            return 0;
        }
    }

    if (obj4.IsEmpty())
        cout << "Balanced" << endl;
    else
        cout << "Not balanced" << endl;

    //s4:
    for (int i = 0; s4[i] != '\0'; i++)
    {

        char x = s4[i];

        if (x == '(')
            obj5.Push(x);

        try
        {
            if (x == ')')
                obj5.Pop();
        }
        catch (EmptyStack)
        {
            cout << "Not balanced" << endl;
            return 0;
        }
    }

    if (obj5.IsEmpty())
        cout << "Balanced" << endl;
    else
        cout << "Not balanced" << endl;

    return 0;
}
