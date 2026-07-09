#include <bits/stdc++.h>

using namespace std;

int main() {
    int age;
    cin>> age;
    if(age >= 18 && age <=45){
        cout << " you are an adult";
    }
     else if(age >= 46 ){
        cout << "you are a senior citizen";

    } else {
        cout << "you are not an adult";
    }

    return 0;
}