/*
Binary Exponentation can be done using bitwise rule and divide and rule. 
If we use a for loop to caluculate the power of a number , it is helpful for numbers in smaller range .
What if , you need to caluculate pow(2,100) ??? 
Then binary exponentation is very useful !!
Approach:
==========
power(base,exp)
If exp is an even number - ->(base*base)^(exp/2) 
Else                     - -> exponent wil get reduced by 1 and we raise them to even powers.
Divide and rule:
===============
#include<bits/stdc++.h>
using namespace std;
long long mod=10e9+7;
void maincode()
{
	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif
}
int main()
{
	maincode();
	int base,exp;
	cin>>base>>exp;
	int ans=1;
	while(exp)
	{
		if(exp%2==0)
		{
			base=base*base;
			exp/=2;
		}
		else
		{
			exp--;
			ans=ans*base;
		}
	}
	cout<<ans;
}
Dry run:
==========
power(2,15)=(2^15)=(2*((2*2)^7))=(2*(4^7))=2*4*(4^6)=2*4*(4*4)^3 = 2*4*16*(16^2)
========================================================================================================================
How we code up using binaries??????
                        Ofcourse yes , we can !!
Check the set bits of a given number in binary form. and raise their power to respective positions.
To check set bits we use:
=========================
int c=0;
if(n&1) 
{
  c++;
}
n>>=1;
=============
Code Using Binaries:
=============
*/
#include<bits/stdc++.h>
using namespace std;
long long mod=10e9+7;
void maincode()
{
	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif
}
int main()
{
	maincode();
	int base,exp;
	cin>>base>>exp;
	int ans=1;
	while(exp)
	{
		if(exp&1)
		{
			ans=ans*base;
		}
		exp>>=1; //exp=exp/2^1;
		base=base*base;
	}
	cout<<ans;
}
