/*
GCD- greatest common divisor (or) HCF - highest common factor.
Simple math :
==========
12 - 2^2 * 3 
24- 2^3  * 3
We have to consider the minimum powers from both of the numbers .
Ecluedian algorithm , will helps to findout GCD in less time complexity.
It states that,
      GCD(a,b)=GCD(a,b-a) or GCD(a-b,a)
      GCD(7,3)=GCD(4,3)
              =GCD(1,3)
              =GCD(2,1)
              =GCD(1,1)
              =GCD(0,1)
      By this process any of a or b becomes 0 then , another will be the required answer.
To make the above process , much faster , we use:
      GCD(a,b)=GCD(a,b%a) if(b==0) return a;
      GCD(3,7)=GCD(3,7%3);
              =GCD(3,1)
              =GCD(1,3%1)
              =GCD(1,0)
              We can conclude that GCD(3,7)=1.
  *********LCM(a,b)=(a*b)/(GCD(a,b))*********     
*/
#include<bits/stdc++.h>
using namespace std;
long long mod=10e9+7;
#define ll long long
void maincode()
{
	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif
}
ll gcd(ll a , ll b)
{
	if(b==0) return a;
	return gcd(b,a%b);
}
int main()
{
	maincode();
	ll a,b;
	cin>>a>>b;
	cout<<gcd(a,b);
}
