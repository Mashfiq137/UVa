#include<bits/stdc++.h>

using namespace std;

int func(int x,int y);


int main(){

            int i,j,result;

            while(scanf("%d %d",&i,&j)!= EOF){

                result  = func(i,j);

                cout<<i<<" "<<j<<" "<<result<<"\n";

            }


return 0;
}

int func(int x, int y)
{
        int temp,cnt=1,mx=0;
        if(x>y){

            temp = x;

            x = y;

            y = temp;

        }

        while(x<=y){

                int k ;

                k = x;

                while(k!=1){

                if(k%2==0) k = k/2;

                else k = (3 * k) + 1 ;

                cnt++;

                if(k==1) break;

                }
                if(cnt>mx)mx=cnt;

                cnt =1;

                x++;

        }

        return mx;
}
