#include<bits/stdc++.h>

using namespace std;

int t ,cs;

int main(){

        cin>>t;

        while(t--){

                   int c=0;

                   int n;

                   cin>>n;

                   int ara[n];

                   for(int i=0;i<n;i++)
                   {

                       cin>>ara[i];

                       if(ara[i]>c){

                                c=ara[i];

                       }

                   }

                   printf("Case %d: %d\n",++cs,c);

                   c=0;

        }


}
