#include <iostream>

int main (int argc,char *argv[]){
     // The following primitive data type variables will not
    // be initialized with any default values / garbage values 
    char cChareacter;
    wchar_t wideChareacter;
    float fFloat;
    int iInteget;
    double dDouble;
    long lLong;
 
    std::cout << "Chareacter : " << cChareacter ;
    std::cout<<"\nWide Chareacter : "<< sizeof(wideChareacter);
    std::cout << "\nFloat : " <<fFloat ;
    std::cout << "\nInteget : " <<iInteget ;
    std::cout << "\nDouble : " <<dDouble ;
    std::cout << "\nLong : " <<lLong ;
    std::cout << "\nwild character : " <<lLong ;
    return 0;
}