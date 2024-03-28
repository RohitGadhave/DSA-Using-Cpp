#include <iostream>
using namespace std;
template<class T>
class Arithmetic
{
private: 
T a=0;
 T b=0;

 public:
 Arithmetic(){

 }

 Arithmetic(T a,T b){
    this->a = a;
    this->b = b;
 }

 T add(){
    return a+b;
 }
 T minus(){
    return a-b;
 }
 void setA(T a){
    this->a = a;
 }
 void setB(T b){
    this->b = b;
 }

 T getA(){
    return a;
 }

 T getB(){
   return b;
 };

 ~Arithmetic(){
cout<<"Destructor"<<endl;
 }

};

int main()
{
    Arithmetic<int> a(1,2);

    cout<<"Hello World "<<a.getA()<< endl;

    return 0;
}