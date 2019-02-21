#include<bits/stdc++.h>

using namespace std;

int cs;

int main(){

            string s;

            while(1){

                        cin>>s;

                        if(s=="#") return 0;

                        if(s=="HELLO") printf("Case %d: ENGLISH\n",++cs);

                        else if(s=="HALLO") printf("Case %d: GERMAN\n",++cs);

                        else if(s=="BONJOUR") printf("Case %d: FRENCH\n",++cs);

                        else if(s=="CIAO") printf("Case %d: ITALIAN\n",++cs);

                        else if(s=="ZDRAVSTVUJTE") printf("Case %d: RUSSIAN\n",++cs);

                        else if(s=="HOLA") printf("Case %d: SPANISH\n",++cs);

                        else printf("Case %d: UNKNOWN\n",++cs);


            }


return 0;
}
