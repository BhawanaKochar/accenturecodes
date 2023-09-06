#include<iostream>
using namespace std;
int gcd(int a,int b){
    int temp=1;
    if(a==0||b==0){
        return 0;
    }
    else if(a>b){
        if(a%b==0){
            return b;
        }
        else{
            
            int b1=b;
            int a1=a;
            for(int i=2;i<=b;i++){
                while(a1%i==0&&b1%i==0){
                    temp=temp*i;
                    a1/=i;
                    b1/=i;
                }
            }
        }
    }
    else if(b>a){
        if(b%a==0){
            return a;
        }
        else{
            
            int b1=b;
            int a1=a;
            for(int i=2;i<=a;i++){
                while(a1%i==0&&b1%i==0){
                    temp=temp*i;
                    a1/=i;
                    b1/=i;
                }
            }
        }
    }
    return temp;
}
int main(){
    int a,b;
    cin>>a>>b;
    int hcf=gcd(a,b);
    cout<<hcf<<endl;
    return 0;
}