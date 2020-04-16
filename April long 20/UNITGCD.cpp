#include<bits/stdc++.h> 
#include<string>
#define ll long long
#define mod 1000000007

using namespace std;
ll findsum(int a[],int k,ll n)		//		subarrays with sum equal to 1
{
	ll count=0;
	unordered_map<ll,ll> m;
	ll curr=0;
	for(ll i=0;i<n;i++)
	{
	curr+=a[i];
	if(curr==k)
	{
		count++;
	}
	if(m.find(curr-k)!=m.end())
	count+=m[curr-k];
	
	
	m[curr]++;
	}
	return count;
}
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	clock_t begin123=clock();
	
	#ifndef ONLINE_JUDGE
		freopen("input.txt","r",stdin);
		freopen("output.txt","w",stdout);
	#endif
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
		ll min_days=(n/2);
		if(n==1)
		cout<<1<<"\n";
		else
		cout<<min_days<<"\n";
		
		if(n&1)				//if(n%2==1)			//	odd days
	{
		if(n==1)//days page
		{
		cout<<1<<" "<<1<<"\n";
		//continue;	
		}
		else
		{
		cout<<3<<" "<<1<<" "<<2<<" "<<n<<"\n";
		for(int i=3;i<n;i+=2)
		cout<<2<<" "<<i<<" "<<i+1<<"\n";
		}	
	}
	else 
	{					//even days
	for(int i=1;i<=n;i+=2)
	{
		cout<<2<<" "<<i<<" "<<i+1<<"\n";
		
	}

	}
}



	
	

	///////////////////a////////////
 	#ifndef ONLINE_JUDGE
 	clock_t end=clock();
 	cout<<double(end-begin123)*CLOCKS_PER_SEC*1000<<"ms";
 	#endif
	return 0;
}
