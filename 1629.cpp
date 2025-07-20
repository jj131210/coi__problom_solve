#include<iostream>
#include<queue>
using namespace std;
long long int a,b,c;
long long int reku(long long int k){
    long long int r = reku(k/2);
       if(k == 1){
        return a%c;
       }
       if(k%2 == 0) return r*r%c;
       else return (r*r) %c*a%c;

}

int main(void)
{
    cin>>a>>b>>c;
    cout<<reku(b);
	return 0;
}