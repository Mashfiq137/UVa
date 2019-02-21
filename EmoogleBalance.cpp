#include<bits/stdc++.h>

using namespace std;

int n,cs;

int main(){

            while(1){

                        int n,num=0,num1=0;

                        cin>>n;

                        if(n==0) return 0;

                        int ara[n];

                        for(int i=0;i<n;i++) cin>>ara[i];

                        for(int i=0;i<n;i++){


                                    if(ara[i]==0) num++;

                                    else if(ara[i]>0) num1++;

                        }

                        int res = num1-num;

                        printf("Case %d: %d\n",++cs,res);

                        num1=num=0;

            }



return 0;
}
