#include <iostream>
int iSumOfTwoInteger(int ,int );//Declaration
int main(int argc, char *argv[]){
    int iAge;
    std::cout << "Enter your age:";
    std::cin >> iAge;
    std::cout << "Your age is: " << iAge<< "\n";
    int iSum = 0;
    iSum=iSumOfTwoInteger(iAge,iAge);
    std::cout << "double age is : " << iSum<< "\n";
    return 0;
}

int iSumOfTwoInteger(int iNo1,int iNo2)//definition
{
    return iNo1+iNo2;
}