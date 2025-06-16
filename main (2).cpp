/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int i,j,suma;
    suma=0;
    int A[n][n];
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            cin>>A[i][j];
        }
        
    }
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
           if(i + j == n - 1){
               suma=suma+A[i][j];
           }
    }
cout<<endl;
}
cout<<suma;
    return 0;
}
