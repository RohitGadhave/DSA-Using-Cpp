#include <iostream>
using namespace std;


int main(int argc, const char * argv[]) {
int A[2][3]={2,3,4,5,6};
  for(auto& x:A){
    *x = 9;
    cout<<*x<<' ';
    }
  cout<<endl;
  for(int a=0;a<2;a++){
    for(int j =0;j<3;j++)
    cout<<A[a][j]<<" ";
    cout<<endl;
  }
  int n = 5;
  for(int i=0;i<n;i++){
        for(int j=0;j<n-i;j++){
          // cout<<n-i<<endl;
            cout<<"* ";
        }
    cout<<"\n";
    }
  
}