#include<iostream>
using namespace std;
int DesiredArray(int *array, int k, int n){
    int sum=0;
    int i=1;
    while(k>0){
            bool div=false;
            for(int j=0;j<n;j++){
                if(i%array[j]==0){
                    div=true;
                    //cout<<i<<" "<<j<<endl;
                    break;
                }
            }
            if(!div){
                sum+=i;
                k--;
            }
            i++;
        
    }
    return sum;
}
int main(){
    int k,n;
    cin>>k;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int p=DesiredArray(arr,k,n);
    cout<<p;
}