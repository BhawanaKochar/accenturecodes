#include<iostream>
#include<string>
#include<cstring>
using namespace std;
char* MergeString(const char* str1,const char* str2){
    int len1=strlen(str1);
    int len2=strlen(str2);
    char* result=new char[len1+len2+1];
    if(len1<len2){
        for(int i=0;i<len1;i++){
            result[i]=min(str1[i],str2[i]);
            result[len1+len2-i-1]=max(str1[i],str2[i]);

        }
        for(int j=len1;j<len2;j++){
            result[j]=str2[j];
        }
    }
    else{
        for(int i=0;i<len2;i++){
            result[i]=min(str1[i],str2[i]);
            result[len1+len2-i]=max(str1[i],str2[i]);

        }
        for(int j=len2;j<len1;j++){
            result[j]=str1[j];
        }
    }
    return result;
}
int main(){
    string a,b;
    getline(cin,a);
    getline(cin,b);
    const char* a_arr= a.c_str();
    const char* b_arr= b.c_str();
    cout<<MergeString(a_arr,b_arr);
    return 0;
    
    
} 