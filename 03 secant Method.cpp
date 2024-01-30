#include<bits/stdc++.h>
#define f(x) x*x*x-4*x-9
#define e 0.0001
using namespace std;

int main(){
    float x0,x1,x2,f0,f1,f2;
    int i=1;
    cout<<setprecision(5)<<fixed;
    cout<<"Enter initial guesses x0 and x1:"<<endl;
    cin>>x0;
    cin>>x1;
    cout<<"\n Steps \t\tx0 \t\tx1 \t\t x2 \t\t f(x)\n"<<endl;