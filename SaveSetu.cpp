#include<bits/stdc++.h>

using namespace std;

int t,num=0;

int Donate(){

            int k;

            cin>>k;

            num+=k;

            return num;
}

int main(){

            cin>>t;

            string s;

            int p ;

            while(t--){

                       cin>>s;

                       if(s=="donate") p = Donate();

                       else cout<<p<<endl;

            }
return 0;
}
