#include "dynarr.h"
#include <iostream>
using namespace std;
dynArr::dynArr()
{
    //constructor without argument
    data = NULL; //pointer doesn't hold any value rather address
    size = 0;
}
dynArr::dynArr(int s)
{
    //constructor with argument
    data = new int[s];
    size = s; //variable which stores the value of size.
    //'size' is not a key word
}
dynArr::~dynArr()
{
    //destructor
    delete [] data;
}
int dynArr::getValue(int index)
{
    //Getter
    return data[index];
}
void dynArr::setValue(int index, int value)
{
    //Setter
    data[index] = value;
}

void dynArr::allocate(int a){
    delete [] data;
    data = new int[a];
}
