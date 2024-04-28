class Solution {
public:
    void dfs(int i,vector<int> adj[],int par,vector<int>& cnt,vector<int>& res)   
    {
        for(auto &u:adj[i])
        {
            if(u==par)
            {
                continue;
            }
            dfs(u,adj,i,cnt,res);
            cnt[i]+=cnt[u];
            res[i]+=res[u]+cnt[u];
        }
        cnt[i]+=1;
    }
    void dfs2(int i,vector<int> adj[],int par,int n,vector<int>& cnt,vector<int>& res)
    {
        for(auto &u:adj[i])
        {
            if(u==par)
            {
                continue;
            }
            res[u]=res[i]-cnt[u]+(n-cnt[u]);
            dfs2(u,adj,i,n,cnt,res);
        }
    }
    vector<int> sumOfDistancesInTree(int n, vector<vector<int>>& edges) {
        vector<int> adj[n];
        for(auto &e:edges)
        {
            adj[e[0]].push_back(e[1]);
            adj[e[1]].push_back(e[0]);
        }
        vector<int> cnt(n,0);
        vector<int> res(n,0);
        dfs(0,adj,-1,cnt,res);
        dfs2(0,adj,-1,n,cnt,res);
        return res;
    }
};