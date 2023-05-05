#include<iostream>
using namespace std;
int factorial(int n){
    int ans = 1;
    for(int i =1 ;i<=n;i++){
        ans = ans *i;
    }
    return ans;
}
int main() {
    int a;
    cin>>a;
    int output= factorial(a);
    cout<<output<<endl;

     
     return 0;
}