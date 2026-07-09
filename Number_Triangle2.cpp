#include <bits/stdc++.h>

using namespace std;
void Number_triangle(int n){
    for(int i =1; i<=n;i++){
        for(int j = 1;j<= i ; j++){
            cout<<i<<" ";
        }
        cout<<endl;
    }
}
int main() {
    int n;
    cin>>n;
    Number_triangle(n);

    return 0;
}