#include<bits/stdc++.h>
using namespace std;
int cs = 0;
int main(){

            int n,p,k;

            int t;

            cin>>t;

            while(t--)
            {
            int cnt=0;

            cin>>n>>k>>p;

            k--;

            printf("Case %d: %d\n",++cs,(k+p)%n+1);
            }
return 0;
}
