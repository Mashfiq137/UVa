#include<bits/stdc++.h>

using namespace std;

int t;

int main(){

                cin>>t;

            //    getchar();

                char c[100];

                while(t--){

                           scanf("%s",&c);

                           if(strlen(c)>3) cout<<"3"<<endl;

                           else{

                            if(c[0]=='o' && c[1]=='n' ||c[1]=='n' && c[2]=='e' ||c[0]=='o' && c[2]=='e' ) cout<<"1"<<endl;

                            else cout<<"2"<<endl;


                           }


                }


return 0;
}
