#include<bits/stdc++.h>
#define f(x) x*x*x-4*x-9
#define e 0.0001
using namespace std;

int main(){
    float a,b,f0,f1,f2,x;
    int step=1;
    up:
    cout<<setprecision(5)<<fixed;
    cout<<"Enter initial guesses a and b:"<<endl;
    cin>>a;
    cin>>b;
    cout<<"\n Steps \t\ta \t\tb \t\t x \t\t f(x)\n"<<endl;
    do{
        f0=f(a);
        f1=f(b);
        if((f0*fb)>0){
        cout<<"Wrong guesses";
        goto up:
    }
        x=(a+b)/2;
        f2=f(x);
        cout<<step<<" \t\t"<<a <<" \t\t"<<b<<" \t\t"<<x<<" \t\t"<<f2<<endl;
        if(f0*f2<0){
            b=x;
            f1-f2;
        }else{
            a=x;
            f0=f2;
        }
        step++;

    }while(fabs(f2)>e);
    cout<<"Root is :"<<x<<endl;
    return 0;

}


