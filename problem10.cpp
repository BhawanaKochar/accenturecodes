#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

static int FineNumber(int a[], int b[],int n,int m){
    // int a_s = sizeof(a) / sizeof(a[0]);
    // cout << a_s << endl;
    
    // int b_s = sizeof(b) / sizeof(b[0]);
    // cout << b_s << endl;
    
    sort(a, a + n);
    sort(b, b +m);
    
    int temp1 = a[n- 1] - b[0];
    int temp2 = b[m - 1] - a[0];
    
    if(temp1 > temp2){
        return temp1;
    }
    return temp2;
}

int main(){
    int n, m;
    cin >> n >> m;
    
    int a[n], b[m];
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    for(int j = 0; j < m; j++){
        cin >> b[j];
    }
    
    cout << FineNumber(a, b,n,m) << endl;
    return 0;
}
