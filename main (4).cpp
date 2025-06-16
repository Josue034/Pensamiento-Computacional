/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
using namespace std;
int main()
{

    int i,j,suma;
    suma=0;
    int A[8][8];
    for(i=0;i<8;i++){
        for(j=0;j<8;j++){
           if((i + j)%2 == 0){
               cout<<"b ";
           }
           else{
               cout<<"n ";
           }
    }
cout<<endl;
}
    return 0;
}
