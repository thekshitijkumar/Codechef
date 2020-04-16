#include<bits/stdc++.h> 
#include<string>
#define ll long long
#define mod 1000000007

using namespace std;
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
	ll n;
	cin>>n;
	ll a[n];
	for(ll i=0;i<n;i++)
	{
		int temp;
		cin>>temp;
		a[i]=temp%mod;
		
	}
	
	sort(a,a+n,greater<int>());		//sort decreasing
	for(ll i=0;i<n;i++)
	{
		if(a[i]-i<=0)
		a[i]=0;
		else 
			a[i]-=i;
	}	
	
	ll sum=0;
	for(ll i=0;i<n;i++)
	{
		sum=(sum%mod+a[i]%mod)%mod;
	}
	cout<<sum%mod<<endl;

	}



	
	

	///////////////////a////////////
 	#ifndef ONLINE_JUDGE
 	clock_t end=clock();
 	cout<<double(end-begin123)*CLOCKS_PER_SEC*1000<<"ms";
 	#endif
	return 0;
}
