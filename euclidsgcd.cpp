#include<bits/stdc++.h>
#define ll long long
#define pb push_back
#define mp make_pair

using namespace std;

int gcd1(int a, int b){
	int t;
	while(b!=0){
		t=b;
		b=a%b;
		a=t;
	}
	return a;
}

int gcd2(int a, int b){
	if(b==0){
		return a;
	}
	else{
		return gcd2(b,a%b);
	}
}

int main(){
	int a,b;
	cin>>a>>b;

	cout<<"GCD iterative : "<<gcd1(a,b)<<endl;
	cout<<"GCD recursive : "<<gcd2(a,b)<<endl;

	return 0;
}