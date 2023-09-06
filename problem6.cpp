#include<iostream>
using namespace std;
int ProductOfSums (int arr [], int n){
    int sum1=0,sum2=0;
    if(n<=3){
        return -1;
    }
    for(int i=0;i<3;i++){
        sum1+=arr[i];
    }
    for(int j=2;j<n;j++){
        sum2+=arr[j];
    }
    cout<<sum1<<" "<<sum2<<endl;
    int p=sum1*sum2;
    return p;
}
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int p=ProductOfSums(arr,n); 
    cout<<p;
    return 0;

}