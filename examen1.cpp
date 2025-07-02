#include<iostream>
using namespace std;
int main(){
/*Nro 1
int i,j,temp;
int Z[]={4,3,6,5,9};
temp=Z[0];
for(i=0;i<5;i++){
    for(j=0;j<5;j++){
        if(Z[j]>Z[j+1]){
            temp=Z[j];
            Z[j]=Z[j+1];
            Z[j+1]=temp;
        }
    }
}
for(i=0;i<5;i++){
    cout<<Z[i];
}
*/
/* Nro 2
   int i,j;
   string Z[4][4];
   for(i=0;i<4;i++){
         for(j=0;j<4;j++){
                Z[i][j]=" ";
   }
   }
   for(j=0;j<4;j++){
    Z[0][j]="*";
    Z[3][j]="*";
   }
   for(i=0;i<4;i++){
         for(j=0;j<4;j++){
                if(i+j==3){
                    Z[i][j]="*";
                }
                cout<<Z[i][j];
         }
         cout<<endl;
   }
*/

/*
int i,j,n,m;
cin>>n>>m;
int A[n][m];
for(i=0;i<n;i++){
    for(j=0;j<m;j++){
        cin>>A[i][j];
    }
}
for(i=0;i<m;i++){
    for(j=0;j<n;j++){
        cout<<A[j][i]<<" ";
    }
    cout<<endl;
}
*/
    int i,j,n,temp;
    cin>>n;
    int A[n][n],M[n];

    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
        cin>>A[i][j];
        }
    }
    for(i=0;i<n;i++){
            M[i]=A[i][i];
    }
    for(i=0;i<n-1;i++){
        for(j=0;j<n-1;j++){
            if(M[j]>M[j+1]){
                temp=M[j];
                M[j]=M[j+1];
                M[j+1]=temp;
            }
        }
    }
    for(i=0;i<n;i++){
        A[i][i]=M[i];
    }
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            cout<<A[i][j]<<" ";
        }
        cout<<endl;
    }
}

