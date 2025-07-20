#include<iostream>
using namespace std;
int r(int n){
    if(n==0){
        return 0;
    }
    r(n-1);
    cout<<n;
    return 0;
}
int main(){
	r(5);
    return 0;
}