#include<iostream>
#include<string>
#include<cstring>
#include<cctype>
using namespace std;
int main()
{
    string str;
    getline(cin,str);
    const char * str1=str.c_str();
    int len=strlen(str1);
    char* result=new char[len+1];
    for (int i=0;i<len;i++){
        result[i]=str1[i];
    }
    for(int i=0;i<len;i++){
        if(result[i]<='z' && result[i]>='a'){
            cout<<char(toupper(result[i]));
        }
        else if(result[i] <='Z'&& result[i]>='A'){
            cout<<endl;
            cout<<char(tolower(result[i]));
        }
    }
    delete[] result;

    return 0;
}