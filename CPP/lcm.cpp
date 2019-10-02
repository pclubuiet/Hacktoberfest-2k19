//LCM of 2 Numbers

# include<bits/stdc++.h>

using namespace std;

int gcd(int a,int b){
    if(b==0)
    return a;

    return gcd(b,a%b);
}
int main() {
   int a,b;
   cin>>a>>b;
   int lcm = a*b/gcd(a,b);
   cout<<lcm<<"\n";    

    return 0;
}
