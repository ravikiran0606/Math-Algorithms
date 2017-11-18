#include<bits/stdc++.h>
#define ll long long
#define pb push_back
#define mp make_pair

using namespace std;

 
int modinv2(int a,int b){   // finds a-1 (mod b) in O(logb) time
	int q,t,x,y,tb;

	tb=b;
	x=1;
	y=0;

	if(b==1){
		return 0;
	}

	while(b!=0){
		q=a/b;

		t=b;
		b=a%b;
		a=t;

		t=y;
		y=x-q*y;
		x=t;
	}

	while(x<0)x+=tb;

	return x;
}

int main(){
	int a,b,x,y;
	cin>>a>>b;
	cout<<"Modular inverse iterative : "<<modinv2(a,b)<<endl;
	return 0;
}