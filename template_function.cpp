#include<iostream>
#include<string>
using namespace std;


template <class T>
T MAX(T a, T b) {
    return (a > b ? a : b);
}



int main() {

    cout<<MAX(9,8)<<"\n";
    cout<<MAX(8.2358,9.12456)<<"\n";
    return 0;
}