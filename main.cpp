#include <iostream>
#include "complex.h"

using namespace std;

int main()
{
    Complex obj1(1, 2);
    Complex obj2(1, -2);
    Complex sum, prod, div;

    sum=obj1.operator+(obj2);
    prod=obj1.operator*(obj2);
    div=obj1.operator/(obj2);

    sum.Print();
    cout<<'\n';

    prod.Print();
    cout<<'\n';

    div.Print();
    cout<<'\n';

    cout<<obj1.operator!=(obj2);

    return 0;
}
