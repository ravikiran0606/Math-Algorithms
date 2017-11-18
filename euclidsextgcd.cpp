#include<bits/stdc++.h>
#define ll long long
#define pb push_back
#define mp make_pair

using namespace std;

int gcd2(int a,int b,int *u,int *v){  // finds gcd(a,b) in O(logb) time
	int x,y;

	x=1;
	y=0;

	int t,q;

	while(b!=0){
		q=(a/b);

		t=b;
		b=a%b;
		a=t;

		t=y;
		y=x-q*y;
		x=t;
	}	

	*u=x;
	*v=y;

	return a;
}

int main(){
	int a,b,x,y;
	cin>>a>>b;
	
	cout<<"Extended GCD iterative : "<<gcd2(a,b,&x,&y)<<" "<<x<<" "<<y<<endl;

	return 0;
}