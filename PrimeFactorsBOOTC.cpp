#include<bits/stdc++.h>
using namespace std;

void primeFactors(long long int n)
{
    vector<long long int> v;

    if(n<0){

            printf(" -1 x ");

            n = (-1)*n;

        }

    else printf(" ");
    while (n%2 == 0)
    {
        v.push_back(2);
        n = n/2;
    }
    for (long long int i = 3; i*i <= n; i = i+2)
    {
        while (n%i == 0)
        {
            v.push_back(i);
            n = n/i;
        }
    }
    if (n > 2)
        v.push_back(n);

        long long int x = v.size();

        for(long long int i=0;i<x-1;i++) cout<<v[i]<<" "<<"x ";

        cout<<v[x-1]<<endl;

}
int main()
{
    while(1){
    long long int n ;
    cin>>n;
    if(n==0) return 0;
    printf("%lld =",n);
    primeFactors(n);
    }
}
