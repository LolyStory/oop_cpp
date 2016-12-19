#include "oop.h"
#include <iostream>
using namespace std;

void Function(const Base &obj)
{
    cout << "* Call method func() for object obj" << endl;
    obj.func();
}
Base::Base()
{
    cout << "Construct Base object\n";
}
Base::~Base()
{
    cout << "Destruct Base object\n";
}
Child::Child()
{
    cout << "Construct Child object\n";
}
Child::~Child()

{ cout << "Destruct Child object\n"; }

void Base::func() const {cout<<"jkopaefjpoawt";}

void Child::func() const {cout<<"njhiooihghgwe";}
