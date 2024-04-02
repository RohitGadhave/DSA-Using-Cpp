//
//  main.cpp
//  DSA
//
//  Created by Rohit Gadhave Patil on 28/03/24.
//
int function1(int n);
int function2(int n);
#include <iostream>

int main(int argc, const char * argv[]) {
    // insert code here...
    int iNo = 0;
    std::cout << "enter Recussion count!\n";
//    std::cin >> iNo;
//    function2(iNo);
    
    function2(3);
    return 0;
}


//Tree Recussion

int function1(int n){
    if(n>0){
        printf("%d \n",n);
        function1(n-1);
    }
    return 0;
}


int function2(int n){
    if(n>0){
        printf("%d \n",n);
        function2(n-1);
        function2(n-1);
    }
    return 0;
}
