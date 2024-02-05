#include <iostream>
#include <stdio.h>

using namespace std;

int iterateArray(int[], int);
void iterateArrayUsingPinter(int *, int);
void iterateArrayUsingCharPinter(char *, int);

char *getUserNameFromConsole(int);

int main()
{
    int arr[] = {1, 2, 333, 4, 4};
    int length = sizeof arr;
    // iterateArray(arr, length);
    // iterateArrayUsingPinter(arr, length);
    char *username = getUserNameFromConsole(15);
    // iterateArray(arr, length);
    cout << "length of username " << sizeof username << endl;

    iterateArrayUsingCharPinter(username, 15);
    return 0;
}

int iterateArray(int arr[], int size)
{
    int length = size / sizeof size;
    cout << "Size of arr " << length << endl;
    for (int i = 0; i < length; i++)
    {
        cout << i << " =" << arr[i] << endl;
    }

    return 0;
}

void iterateArrayUsingPinter(int *arr, int size)
{
    int length = size / sizeof size;
    cout << "length of arr " << length << endl;
    for (int i = 0; i < length; i++)
    {
        cout << i << " = " << arr[i] << endl;
    }
}

void iterateArrayUsingCharPinter(char *arr, int size)
{
    cout << "size of arr " << size << endl;
    for (int i = 0; i < size; i++)
    {
        cout << i << " = " << arr[i] << endl;
    }
}

char *getUserNameFromConsole(int size)
{
    char *pointer;
    cout << "Enter User name" << endl;
    pointer = new char[size];
    for (int i = 0; i < size; i++)
    {
        char input;
        cin >> input;
        cout << input;
        if (input == '0')
        {
            break;
        }
        pointer[i] = input;
    }
    return pointer;
}
