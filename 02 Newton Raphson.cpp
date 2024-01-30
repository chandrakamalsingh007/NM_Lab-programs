#include<bits/stdc++.h>
#define f(x) 2*x*x+4*x-5
#define g(x) 4*x+4 // first derivative of f(x)
#define e 0.0001
using namespace std;

int main(){
    float x0,x,f0,g0,f1;
    int i=1,N;
    cout<<setprecision(6)<<fixed;
    cout<<"Enter initial guess x0:";
    cin>>x0;
    cout<<"Enter maximum no. of iterations:";
    cin>>N;
    
    do{
        f0=f(x0);
        g0=g(x0);
        if(g0== 0){
        cout<<"Mathematical error!!"<<endl;
        exit(0);
    }
        x=x0-(f0/g0);
        f1=f(x);
        cout<<"\n iteration \t\t x0 \t\t x"<<endl;
        if(i>N){
            cout<<"Not convergent";
            exit(0);
        }
        if()

    }

}