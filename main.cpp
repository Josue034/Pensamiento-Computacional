
#include <iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int i,j;
    int A[n][n];
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            cin>>A[i][j];
        }
    }
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            cout<<A[i][j];
    }
cout<<endl;
}
    return 0;
}