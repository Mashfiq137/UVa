#include<bits/stdc++.h>

using namespace std;

int t;

int main(){

        cin>>t;

        char s[200000];

        while(t--){

                scanf("%s",&s);

                int len = strlen(s);

                if(strcmp(s,"1")==0 || strcmp(s,"4")==0 || strcmp(s,"78")==0) cout<<"+"<<endl;

                else if(s[len-1]=='5' && s[len-2]=='3') cout<<"-"<<endl;

                else if(s[0]=='9' && s[len-1]=='4') cout<<"*"<<endl;

                else if(s[0]=='1' && s[1]=='9' && s[2]=='0') cout<<"?"<<endl;

                else cout<<"+"<<endl;


        }


return 0;
}
