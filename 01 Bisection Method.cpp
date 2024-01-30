#include<bits/stdc++.h>
#define f(x) x*x*x-4*x-9
#define e 0.0001
using namespace std;

int main(){
    float x0,x1,f0,f1,f2,x2;
    int step=1;
    up:
    cout<<setprecision(5)<<fixed;
    cout<<"Enter initial guesses x0 and x1:"<<endl;
    cin>>x0;
    cin>>x1;
    cout<<"\n Steps \t\tx0 \t\tx1 \t\t x2 \t\t f(x)\n"<<endl;
    do{
        f0=f(x0);
        f1=f(x1);
        if((f0*f1)>0){
        cout<<"Wrong guesses";
        goto up:
    }
        x2=(x0+x1)/2;
        f2=f(x2);
        cout<<step<<" \t\t"<<x0 <<" \t\t"<<x1<<" \t\t"<<x2<<" \t\t"<<f2<<endl;
        if((f0*f2)<0){
            x1=x2;
            f1-f2;
        }else{
            x0=x2;
            f0=f2;
        }
        step++;

    }while(fabs(f2)>e);
    cout<<"Root is :"<<x<<endl;
    return 0;

}


