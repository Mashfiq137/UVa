#include<bits/stdc++.h>

using namespace std;

int fun(int n){

            if(n<10) return n;
            int sum = 0;
            while(n){

                        sum += n%10;

                        n = n/10;

            }

            return fun(sum);

}

int main(){

           int n;

           while(1){

                    cin>>n;

                    if(n==0) return 0;

                    int p = fun (n);

                    cout<<p<<endl;

           }
return 0;
}
