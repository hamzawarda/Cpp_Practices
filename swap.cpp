#include<iostream>
#define SWAP(a,b,c) (c t; t=a, a=b, b=t)
int main (void){
    int x=10, y=20;
    SWAP(x, y, int);
    cout << x << y << endl;
    return 0;
}