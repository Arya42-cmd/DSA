#include <bits/stdc++.h>

using namespace std;

int main() {
    int age;
    cin>>age;
    switch(age)
    {
        case 18: 
        cout << "you are able to vote";
        break;
        case 17: 
        cout << "you are not able to vote";
        break;
        default : 
        cout << "you are eligible";
    }

    return 0;
}