#include<bits/stdc++.h>
#define f(x) x*x*x-4*x-9
#define e 0.0001
using namespace std;

int main(){
    float x0,x1,x2,f0,f1,f2;
    int i=1,N=10;
    cout<<setprecision(5)<<fixed;
    cout<<"Enter initial guesses x0 and x1:"<<endl;
    cin>>x0;
    cin>>x1;
    cout<<"\n Steps \t\tx0 \t\tx1 \t\t f0 \t\t f1 \t\t x2\n"<<endl;
    do{
        f0=f(x0);
        f1=f(x1);

        x2=((x0*f1)-(x1*f0))/(f1-f0);
        f2=f(x2);
        cout<<i<<" \t\t"<<x0<<" \t\t"<<x1<<" \t\t"<<f0<<" \t\t"<<f1<<" \t\t"<<x2<<endl;
        x0=x1;
        x1=x2;
        
        if(i>N){
            cout<<"Not convergent";
            exit(0);
        }
        i++;

    }while(fabs(f2)>e);
    cout<<"\nRoot is "<<x2<<endl;
    return 0;
}