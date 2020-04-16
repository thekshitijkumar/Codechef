#include<bits/stdc++.h> 
#include<string>
#define ll long long

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
	int n;
	cin>>n;
	int a[n];
	vector<int> v;
	v.clear();
	bool flag=true;
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
		if(a[i]==1)
			v.push_back(i);
	}
	for(auto i=1;i<v.size();i++)
	{
		if(v[i]-v[i-1]<6)
		{
		flag=false;
		break;	
		}
	}
	if(flag)
	cout<<"YES"<<endl;
	else
	cout<<"NO"<<endl;

	}



	
	

	///////////////////a////////////
 	#ifndef ONLINE_JUDGE
 	clock_t end=clock();
 	cout<<double(end-begin123)*CLOCKS_PER_SEC*1000<<"ms";
 	#endif
	return 0;
}
