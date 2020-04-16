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
		int a[n];
		ll temp;
		for(ll i=0;i<n;i++)
		{
			cin>>temp;
			temp=((temp))%4;
			if(temp==1||temp==3||temp==-1||temp==-3)
			{
			temp=0;
			}
			else if(temp==0)
			temp=-2;
			else if(temp==2||temp==-2)
			temp=-1;
			a[i]=temp;///0 1 2   0->odd 1->2  2->2^2=4		0 1 1 2 2 1 0 1
			
		}
		ll ok=findsum(a,-1,n);
		ll total=(ll)n*(n+1)/2;
		total-=ok;
		cout<<total<<endl;

	}



	
	

	///////////////////a////////////
 	#ifndef ONLINE_JUDGE
 	clock_t end=clock();
 	cout<<double(end-begin123)*CLOCKS_PER_SEC*1000<<"ms";
 	#endif
	return 0;
}
