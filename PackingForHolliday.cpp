#include<bits/stdc++.h>

using namespace std;

int t,cs;

int main(){

            cin>>t;

            int a,b,c;

            while(t--){

                    cin>>a>>b>>c;

                    if(a>20 || b>20 ||c>20) printf("Case %d: bad\n",++cs);

                    else printf("Case %d: good\n",++cs);


            }

return 0;
}
