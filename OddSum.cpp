#include<bits/stdc++.h>

using namespace std;
int cs;
int main()
{

    int t;

    cin>>t;

    int l,r;

    while(t--)
    {
        int sum = 0;

        cin>>l>>r;

        for(int i=l ; i<=r;i++)
        {
            if(i%2!=0)
            {
                    sum+=i;

            }

        }

        printf("Case %d: %d\n",++cs,sum);

    }


    return 0;
}
