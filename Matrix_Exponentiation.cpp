/*
We can use the binary exponentiation concept here !!
Let's see some mod functions !!
(a + b) % mod= (a % mod + b % mod ) % mod
(a * b) % mod= (a % mod * b % mod ) % mod
(a - b) % mod= (a % mod - b % mod + mod ) % mod
(a / b) % mod= (a % mod + b^(-1) % mod ) % mod
Matrix Exponentation:
====================
Let A=[[1,1],[2,1]] 
Now A * A =[[3,2],[4,3]]
Code:
=========
*/
#include<bits/stdc++.h>
using namespace std;
struct Matrix{
	int a[2][2];	
};
Matrix identity(){
	Matrix id;
	id.a[0][0]=1 ,id.a[0][1]=0;
	id.a[1][0]=0 ,id.a[1][1]=1;
	return id;
}
Matrix mul(Matrix A,Matrix B){
	Matrix C;
	for(int row = 0 ; row < 2 ; row++){
		for(int col = 0; col < 2 ; col++){
			int sum =0;
			for(int i = 0 ; i < 2; i++){
				sum+=A.a[row][i]*B.a[i][col];
			}
			C.a[row][col]=sum;
		}
	}
	return C;
}
Matrix Matrixexp(Matrix A,int exp){
	if(exp==0)return identity();
	Matrix ans = Matrixexp(A,exp/2);
	if(exp%2==0){
		return mul(ans,ans);
	}
	else{
		return mul(mul(ans,ans),A);
	}
}
int main(){
	int exp;
	cin>>exp;//12
	//A^12
	Matrix A;
	A.a[0][0]=1 ,A.a[0][1]=1;
	A.a[1][0]=0 ,A.a[1][1]=2;
	Matrix B;
	B=Matrixexp(A,exp);
	cout<<B.a[0][0]<<" "<<B.a[0][1]<<endl;
	cout<<B.a[1][0]<<" "<<B.a[1][1]<<endl;
}
