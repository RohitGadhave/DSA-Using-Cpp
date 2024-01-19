#include <stdio.h>
#include <iostream>
using namespace std;

struct Rectangle
{
    long int length;
    long int breath;
};

int main()
{
    struct Rectangle r1 = {20,10};
    cout << "Rectangle length " << r1.length <<endl;
    cout << "Rectangle breath " << r1.breath<<endl;
    cout << "Size of Rectangle " << sizeof(r1);
    return 0;
}