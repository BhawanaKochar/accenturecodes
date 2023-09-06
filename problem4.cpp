#include<bits/stdc++.h>
using namespace std;
bool isPrime(int n){
    if(n<=2){
        return false;
    }
    for(int i = 2; i <=n/2;i++){
        if(n%i==0) {
            return false;
        }


    }
    return true;
}
int SumPrimeIndeces(int *arr,int n){
    int sum=0;
    for(int i=n-1;i>1;i--){
        if(isPrime(i)==true){
            sum+=arr[i];
            //cout<<sum<<endl;
        }

    }
    sum+=arr[2];
    return sum;
}
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<SumPrimeIndeces(arr,n)<<endl;
    return 0;
}