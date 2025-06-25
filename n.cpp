#include<iostream>
using namespace std;
int main(){
    int i,j;
    string H[5][4], O[5][4],L[5][4],A[5][4];
    //Matrices vacias
    for(i=0;i<5;i++){
        for(j=0;j<4;j++){
            H[i][j]=" ";
            O[i][j]=" ";
            L[i][j]=" ";
            A[i][j]=" ";
        }
    }
    //Armando H
    for(i=0;i<5;i++)//columnas verticales
    {
        H[i][0]= "*";
        H[i][3]="*";
    }
    for(j=0;j<4;j++)//columnas horizontales
    {
        H[2][j]="*";
    }
    //Escribe H
    for(i=0;i<5;i++){
        for(j=0;j<4;j++){
            cout<<H[i][j];
        }
        cout<<endl;
    }
    cout<<endl;
    //Armando O
    for(i=0;i<5;i++)//columnas verticales
    {
        O[i][0]="*";
        O[i][3]="*";
    }
    for(j=0;j<4;j++)//columnas horizontales
    {
        O[0][j]="*";
        O[4][j]="*";
    }
    //Escribe O
     for(i=0;i<5;i++){
        for(j=0;j<4;j++){
            cout<<O[i][j];
        }
        cout<<endl;
    }
    cout<<endl;
    //Armando L
    for(i=0;i<5;i++)//columnas verticales
    {
        L[i][0]="*";
    }
    for(j=0;j<4;j++)//columnas horizontales
    {
        L[4][j]="*";
    }
    //Escribe L
    for(i=0;i<5;i++){
        for(j=0;j<4;j++){
            cout<<L[i][j];
        }
        cout<<endl;
    }
    cout<<endl;
    //Armando A
    for(i=0;i<5;i++)//columnas verticales
    {
        A[i][0]= "*";
        A[i][3]="*";
    }
    for(j=0;j<4;j++)//columas horizontales
    {
        A[0][j]="*";
        A[2][j]="*";
    }
    //Escribe A
     for(i=0;i<5;i++){
        for(j=0;j<4;j++){
            cout<<A[i][j];
        }
        cout<<endl;
    }
    return 0;
}





