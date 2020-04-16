#include<bits/stdc++.h> 
#include<string>
#define ll long long
#define mod 1000000007

using namespace std;
int primefactor(int n)
{
	int count=0;
	while(n%2==0)
	{
		count++;
		n/=2;
	}
	for(int i=3;i<=sqrt(n);i+=2)//number is odd
	{
		while(n%i==0)
		{
			count++;
			n/=i;
		}
	}
	if(n>2)
	count++;
	
	return count;
}
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	clock_t begin123=clock();
	
//	#ifndef ONLINE_JUDGE
//		freopen("input.txt","r",stdin);
//		freopen("output.txt","w",stdout);
//	#endif
	////////////////////////////
//	//    code here
//	long long f[100001];
//		f[0]=1;
//	for(ll j=1;j<100001;j++)
//	{
//		f[j]=f[j-1]*j%mod;
//	}
	
	//       code          //
	long long t;
	cin>>t;
	while(t--)
	{
	ll n,k;
	cin>>n>>k;
	
	//k==0 false	n>=2^k   true
	if(k==0||n<pow(2,k))
	cout<<0<<endl;
	else
	{
		if(primefactor(n)>=k)//factor vali condition
		cout<<1<<endl;
		else
		cout<<0<<endl;
	}
	
	
	
	
	}



	
	

	///////////////////a////////////
 	#ifndef ONLINE_JUDGE
 	clock_t end=clock();
 	cout<<double(end-begin123)*CLOCKS_PER_SEC*1000<<"ms";
 	#endif
	return 0;
}
