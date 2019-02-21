#include<bits/stdc++.h>

using namespace std;

int t,cs;

int main(){

            cin>>t;

            int a,b,c;

            while(t--){

                    cin>>a>>b>>c;

                    if(b<a && b>c || b<c && b>a) printf("Case %d: %d\n",++cs,b);

                    else if(a<b && a>c || a<c && a>b) printf("Case %d: %d\n",++cs,a);

                    else if(c<a && c>b || c<b && c>a) printf("Case %d: %d\n",++cs,c);

            }
return 0;
}
