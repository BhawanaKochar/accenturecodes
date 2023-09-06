#include<iostream>
using namespace std;
int*  NextSmallerNumber(int a[], int m){
    
    for(int i=0; i<m; i++){
        int temp=a[i];
        for(int j=i+1; j<m; j++){
            if(temp>a[j]){
                a[i]=a[j];
                break;
            }
            else{
                continue;
            }
        }
    }
    a[m-1]=-1;
    return a;

}
int main() {
    int size;
    cin >> size;
    int arr[size];
    for(int i=0; i<size; i++){
        cin >> arr[i];
    }
    int* result= NextSmallerNumber(arr, size);
    for(int i=0;i<size;i++){
        cout<<result[i]<<" ";
    }
}