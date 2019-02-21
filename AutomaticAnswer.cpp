#include<bits/stdc++.h>

using namespace std;

int t;

int main(){

           cin>>t;

           int n;

           while(t--){

                 cin>>n;

                 int res = (double)((((((n*567)/9.0 )+ 7492)*235)/47.0)-498);

                 int div = abs(res/10);

                 int rem = div % 10;

                 cout<<rem<<endl;

           }


return 0;
}
