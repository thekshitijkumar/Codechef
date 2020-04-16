#include<bits/stdc++.h> 
#include<string>
#define ll long long
#define mod 1000000007
#define endl "\n"
#define N 501 
#define K 5001
using namespace std;
ll maxval(int a[],int n)
{
	ll mx=a[0];
	int i;
	int idx=-1;
	for(i=1;i<n;i++)
	{
		if(mx<=a[i])
		{
			mx=a[i];
			idx=i;
		}
	}
	return idx;

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
		ll n,m,k;
		cin>>n>>m>>k;
		
		// k->sets n->questions  m->answers
		//int a[n][k];
		//memset(a,0,sizeof(a));
		int count[m+1]={0};
		vector<int> output;
		ll a;
		for(int i=0;i<n;i++)	//questions
		{
			memset(count,0,sizeof(count));
			for(int j=0;j<k;j++)		//sets
			{
				cin>>a;						//a[i][j];		//will contain values from 1 to m(inclusive)
				count[a]++;
			}
			//ll ok=*max_element(count,count+m+1);
			ll pmr=maxval(count,m+1);
			output.push_back(pmr);
		}
		
	for(auto i=output.begin();i!=output.end();i++)
	{
		cout<<*i<<" ";
	}
			cout<<endl;		
	}



	
	

	///////////////////a////////////
 	#ifndef ONLINE_JUDGE
 	clock_t end=clock();
 	cout<<double(end-begin123)*CLOCKS_PER_SEC*1000<<"ms";
 	#endif
	return 0;
}
