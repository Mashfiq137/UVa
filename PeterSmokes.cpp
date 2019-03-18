#include<bits/stdc++.h>

using namespace std;

int main(){

            int n,k;

            while(scanf("%d %d",&n,&k)==2)
            {

                int a;

                a = n;

                while(n>=k)
                {

                    a = a+(n/k);

                    n = (n/k) + (n%k);
                }

                cout<<a<<endl;
            }

return 0;
}
