#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int minsquares(int n){
    vector<int> a;
    vector<int> b;
    for(int i = 0; i*i <= n; i++){
        a.push_back(i*i);
    }
    int count = n+2;
    for(int i=0;i<n;i++){
        if(n%a[i]==0){
            count=min(count,n/a[i]);
        }
    }
    
    int minCount= n;
    
    for(int i=0;i<a.size();i++){
        int count1=0;
        int temp=n;
        while(temp>=0){
            temp-=a[i];
            count1++;
            for(int j=i+1;j<a.size();j++){
                temp-=a[j];
                count1++;
            }
        }
        if(temp==0){
            b.push_back(count1);
            minCount=min(minCount,count1);
        }
    }
    
    int countans=min(minCount,count);
    return countans;

    
}
int main(){
    int a;
    cin >>a;
    int p=minsquares(a);
    cout<<p;
    return 0;

}