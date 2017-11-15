#include<bits/stdc++.h>
#define test for(int i=0;i<t;i++)
#define ull unsigned long long int
#define ll long long int
#define IOS ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);  
#define rep(i,n) for(int i=0;i<n;i++)

using namespace std;

class queu
{
	private:
		int front;
		int rear;
		vector<int> q;
	public:
		queu()
		{front=-1;rear=-1;}
		
		int isEmpty()
		{
				if(front==-1) return 1;
				else return 0;
		}
		
		void enq(int x)
		{
			q.push_back(x);
			rear++;
			if(front==-1)front=0;	
		}	
		
		int deq()
		{
			int t=q[front];
			q.erase(q.begin());
			if(front==rear)
				front=rear=-1;
			else rear--;	
			return t;
		}
};


int main()
{
	int t;
	cin>>t;
	test
	{
		int n,m,a,b,s;
		cin>>n>>m;
		vector<int>v[n+1];
		for(int i=1;i<=m;i++)
		{
			cin>>a>>b;
			v[a].push_back(b);
			v[b].push_back(a);
		}
		cin>>s;
		
		int visited[n+1],dist[n+1];
		for(int i=1;i<n+1;i++)visited[i]=0;
		
		//BFS
		{
			queu q;
			q.enq(s);
			visited[s]=1;
			dist[s]=0;
			while(!q.isEmpty())
			{
				int x=q.deq();
				for(vector<int>::iterator it=v[x].begin();it!=v[x].end();it++)
				{
					if(!visited[*it])
					{
						dist[*it]=dist[x]+1;
						q.enq(*it);
						visited[*it]=1;
					}
				}
			}
			
		}
		
		for(int i=1;i<=n;i++)
		{
			if(i!=s)
			{
				if(visited[i]==0)
					cout<<"-1 ";
				else
					cout<<dist[i]*6<<" ";	
			}
		}
		cout<<endl;
	}
	
	return 0;
}
