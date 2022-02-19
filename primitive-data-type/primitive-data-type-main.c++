#include <iostream>

int main(int argc, char *argv[]){
    int integerType;
    char charType;
    float floatType;
    double doubleType;
    wchar_t wideChareacter;
    //modifiers
    signed char charSignedType;
    unsigned char charUnsignedType;

    short int integerShortType;
    unsigned short int integerUnsignedShortType;
    unsigned int integerUnsignedType;
    long int longIntegerType;
    unsigned long int longIntegerUnsignedType;
    unsigned long long int longLongIntegerUnsignedType;


    long double longDoubleType;

    std::cout<<"1> integer : " << sizeof(integerType);
    std::cout<<"\n2> short integer : " << sizeof(integerShortType);
    std::cout<<"\n3> unsigned short integer : " << sizeof(integerUnsignedShortType);
    std::cout<<"\n4> unsigned integer : " << sizeof(integerUnsignedType);
    std::cout<<"\n5> long integer : " << sizeof(longIntegerType);
    std::cout<<"\n6> unsigned long integer : " << sizeof(longIntegerUnsignedType);
    std::cout<<"\n7> unsigned long long integer : " << sizeof(longLongIntegerUnsignedType);

    std::cout<<"\n8> character : " << sizeof(charType);
    std::cout<<"\n9> signrd character : " << sizeof(charSignedType);
    std::cout<<"\n10> unsigned character : " << sizeof(charUnsignedType);

    std::cout<<"\n11> wide chareacter : "<< sizeof(wideChareacter);

    std::cout<<"\n12> float Type : "<< sizeof(floatType);
    

    std::cout<<"\n13> double Type : "<< sizeof(doubleType);

    std::cout<<"\n14> long double : " << sizeof(longDoubleType) << "\n";
    return 0;
}