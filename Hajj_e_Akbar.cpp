#include<bits/stdc++.h>

using namespace std;

int cs;

int main(){

            string s;

            while(1){

                cin>>s;

                if(s=="*") return 0;

                else if(s=="Hajj") printf("Case %d: Hajj-e-Akbar\n",++cs);

                else printf("Case %d: Hajj-e-Asghar\n",++cs);

            }



return 0;
}
