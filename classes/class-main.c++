#include <iostream>
using namespace std;

class Arithmetic
{
private: 
int a=0;
 int b=0;

 public:
 Arithmetic(){

 }

 Arithmetic(int a,int b){
    this->a = a;
    this->b = b;
 }

 int add(){
    return a+b;
 }
 int min(){
    return a-b;
 }
 void setA(int a){
    this->a = a;
 }
 void setB(int b){
    this->b = b;
 }

 int getA(){
    return a;
 }

 int getB(){
   return b;
 };

 ~Arithmetic(){
cout<<"Destructor"<<endl;
 }

};

int main()
{
    Arithmetic a(1,2);

    cout<<"a= "<<a.getA()<<endl;

    return 0;
}