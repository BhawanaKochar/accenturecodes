#include<iostream>
#include<vector>
#include<set>
using namespace std;
int AdddistSubDuplicate(int a,int b,int c,int d){
    
    vector<int> v={a,b,c,d};
    int sum=0;
    for(int i=0;i<v.size();i++){
       int temp= v[i];
       int count=0;
       for(int j=i+1;j<v.size();j ++){
            if(v[j]==temp){
                count++;
                v[j]=0;
            }

       }
       if(count>0){
        sum-=v[i];
       }
       else{
        sum+=v[i];
       }
    }
    return sum;

            

}
int main(){
    int a,b,c,d;
    cin>> a;
    cin>>b;
    cin>>c;
    cin>>d;
    cout<<AdddistSubDuplicate(a,b,c,d);
    
}