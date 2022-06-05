#include <bits/stdc++.h>
using namespace std;
#define maxn 1000

int main()
{
    int i,n,e;
    cout << "Enter the number of nodes: ";
    cin >> n;
    cout << "Enter the number of edges: ";
    cin >> e;

    vector<int>adj[maxn];

    for(i=0; i<e; i++)
    {
        int a,b;
        cin >>a>>b;
        adj[a].push_back(b);
        adj[b].push_back(a);
    }

    stack <int> sta;
    int start,temp;
    cout << "Enter Starting node: ";
    cin >> start;
    sta.push(start);
    int vis[maxn]= {0};

    while(!sta.empty())
    {
        temp = sta.top();
        cout << temp<<",";
        sta.pop();

        for(i=0; i<adj[temp].size(); i++)
        {
            if(!vis[adj[temp][i]])
            {
                vis[adj[temp][i]]=1;
                sta.push(adj[temp][i]);
            }
        }
    }

    return 0;
}
