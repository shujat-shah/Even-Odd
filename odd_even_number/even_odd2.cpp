#include <iostream>
using namespace std;
bool check(int num){
return num % 2 == 0? true: false;
}
int main() {
    int num;
    cout << "Enter a number";
    cin>>num;cout<< endl;
    check(num)?cout<<"Even Number":cout<<"Odd number";
    return 0;
}
