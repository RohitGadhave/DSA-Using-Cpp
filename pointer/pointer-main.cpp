#include <iostream>
using namespace std;

struct Rectangle{

};

int main()
{
    int iNo = 10;
    int *iPinter;

    iPinter = &iNo;
    cout << "size of int " << sizeof(int) << endl;
    cout << "value of iNo " << iNo << endl;
    cout << "value of iNo address " << &iNo << endl;
    cout << "value of iPinter " << iPinter << endl;
    cout << "value of iPinter value " << *iPinter << endl;
    cout << "value of iPinter address " << &iPinter << endl;
    // Allocate Heap memory in c

    int *pointingToHeapInC;
    pointingToHeapInC = (int *)malloc(iNo * sizeof(int));

    // Allocate Heap memory in cpp

    int *pointingToHeapInCPP;
    pointingToHeapInCPP = new int[iNo];

    int arr[5];
    int intSize = sizeof(int);

    for (int i = 0; i < iNo; i++)
    {
        cout << i * intSize << " * " << *pointingToHeapInCPP << " - " << pointingToHeapInCPP <<" i " << pointingToHeapInCPP[i] << endl;
    }

    // for (const p : arr)
    // {
    //     cout << p << endl;
    // }

    return 0;
}