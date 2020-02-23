#include<bits/stdc++.h>

using namespace std;
int main()
{
            long long int cs;
            cin>>cs;
            while(cs--)
            {
                int x,y,a,b;
                cin>>x>>y>>a>>b;
                int ans = ((y-x)%(a+b))==0?((y-x)/(a+b)):-1;
                cout<<ans<<endl;

            }

return 0;
}
