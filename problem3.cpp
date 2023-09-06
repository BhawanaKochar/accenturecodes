#include<bits/stdc++.h>
using namespace std;
int fn(int n){
    int sum=0;
    while(n>0){
        sum+=n%10;
        n/=10;
    }
    return sum;
}
int DifferenceSumOfDigits(int *arr,int n){
    int temp1=0;
    for(int i=0;i<n;i++){
        temp1+=arr[i];
    }
    int a=temp1%n;
    cout<<"a = "<<a<<endl;
    int temp2=0;
    for(int i=0;i<n;i++){
        int num=arr[i];
        temp2+=fn(num);
    }
    temp2=temp2%n;
    cout<<"temp2: "<<temp2<<endl;
    int r=temp2-a;
    return r;

}
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int p=DifferenceSumOfDigits(arr,n);
    cout<<p<<endl;
    return 0;


}