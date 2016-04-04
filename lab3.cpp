#include<iostream>
#include<cstdio>
#include<vector>
#include<algorithm>
#include<fstream>
#include<cstdlib>

using namespace std;

int main()
{
	int i,n,x,cowsW_end;
	vector<int> cowsW;
	ifstream cowsF("file.in",ios::in);

	while(cowsF>>x)
	{	
//		i=0;
		cowsW.push_back(x);
//		cout<<cowsW[i];
//		i++;
//		cout<<x<<" ";
	}

//	cout<<cowsW.size();

	for(i=0;i</*(sizeof(cowsW)/sizeof(int))*/cowsW.size();i++)
	{
	//	cout<<cowsW[i]<<" ";
	}
	n=cowsW[0];
	for(i=0;i<cowsW.size();i++)
	{
		cowsW[i]=cowsW[i+1];
	}
	cowsW.resize(cowsW.size()-1);

	for(i=0;i<cowsW.size();i++)
	{
//		cout<<cowsW[i]<<" ";
	}
	
	//int cows[3]={0,2,1};
	sort(cowsW.begin(),cowsW.end());

	ofstream out("stdout",ios::out);

	out<<cowsW[n-1]+cowsW[n-2]+cowsW[n-3]+cowsW[n-4]+cowsW[n-5];
/*	for(i=0;i<3;i++)
	{
		cout<<cows[i]<<" ";
	} */

//	cout<<cowsW[n-1]+cowsW[n-2]+cowsW[n-3]+cowsW[n-4]+cowsW[n-5];
/*	cowsF>>n;
	sowsW.reserve(n);
	for(i=0;i<n;i++)
	{
		cowsF>>cowsW[i];
	}*/

/*	cowsW_end=sizeof(cowsW)/sizeof(int);
	sort(cowsW,cowsW+cowsW_end);

	cout<<cowsW[n-1]+cowsW[n-2]+cowsW[n-3]+cowsW[n-4]+cowsW[n-5];
	*/
	cowsF.close();
	out.close();
	return 0;
}

