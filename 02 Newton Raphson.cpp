#include<bits/stdc++.h>
#define f(x) 2*x*x+4*x-5
#define g(x) 4*x+4 // first derivative of f(x)
#define e 0.0001
using namespace std;

int main(){
    float x0,x1,f0,g0,f1;
    int i=1,N;//iterations i
    cout<<setprecision(6)<<fixed;
    cout<<"Enter initial guess x0:";
    cin>>x0;
    cout<<"Enter maximum no. of iterations:";
    cin>>N;
    cout<<"\n iteration \t\t x0 \t\t x1"<<endl;
    do{
        f0=f(x0);
        g0=g(x0);
        if(g0== 0){
        cout<<"Mathematical error!!"<<endl;
        exit(0);
    }
        x1=x0-(f0/g0);
        cout<<i<<"\t\t "<<x0<<"\t\t "<<x1<<endl;
        f1=f(x1);
        x0=x1;
        if(i>N){
            cout<<"Not convergent";
            exit(0);
        }
        i++;
       

    }while(fabs(f1)>e);
    cout<<"Root is "<<x1;
    return 0;

}