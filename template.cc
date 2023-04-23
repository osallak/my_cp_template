#include <bits/stdc++.h>


using namespace std;

typedef long long ll;
typedef pair<int, int> pii;
typedef pair<ll, ll> pll;
typedef pair<ll, int> pli;
typedef pair<int, ll> pil;
typedef vector<int> vi;
typedef vector<ll> vl;
typedef vector<string> vs;
typedef vector<vi> vvi;
typedef vector<vl> vvl;
typedef vector<vs> vvs;
typedef vector<pii> vii;
typedef vector<pll> vll;
typedef vector<pli> vli;
typedef vector<pil> vil;

//change this to true if the problem has multiple test cases
#define TEST_CASES  false

//suppress version warning
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

//some constants
#define INF 1e18 //stands for infinity
#define EPS 1e-9 // stands for epsilon


//some aliases
#define pb push_back
#define mp make_pair
#define fi first
#define se second
#define sz(x) (int)(x).size()
#define all(x) (x).begin(), (x).end()
#define rep(i, a, b) for (int i = (a); i < (b); i++)
#define per(i, a, b) for (int i = (b)-1; i >= (a); i--)
#define trav(a, x) for (auto &a : x)

//to make cin and cout faster
#define IOS ios_base::sync_with_stdio(false);cin.tie(0x0);cout.tie(0x0);

//test cases macro
#define test_cases int t = 1; if (TEST_CASES){ cin >> t; } while(t--)

//main function
#define MAIN int main(void){IOS test_cases solve(); return 0;}

//some debug macros
#define debug(x) cout << #x << " = " << x << endl;
#define debug2(x, y) cout << #x << " = " << x << " , " << #y << " = " << y << endl;
#define debug3(x, y, z) cout << #x << " = " << x << " , " << #y << " = " << y << " , " << #z << " = " << z << endl;
#define debug4(x, y, z, w) cout << #x << " = " << x << " , " << #y << " = " << y << " , " << #z << " = " << z << " , " << #w << " = " << w << endl;

//PI
#define PI 3.1415926535897932384626433832795

//int limits
#ifndef INT_MAX
#define INT_MAX 2147483647
#endif
#ifndef INT_MIN
#define INT_MIN -2147483648
#endif

//lower bound and upper bound
#define lb lower_bound
#define ub upper_bound
#define endl '\n'

//graph template contains some algorithms for graphs and also a way to store the graph and access it easily and efficiently
template<typename T>
class Graph{
    // to be continued ...
    ll n;
    //adjacency list
    vector<vector<T> > adj;

    public:
    //constructor
    Graph(ll n){
        this->n = n;
        adj.resize(n);
    }

    //add an edge
    void addEdge(T u, T v){
        adj[u].pb(v);
        adj[v].pb(u);
    }

    //get the adjacency list
    vector<vector<T> > getAdj(){
        return adj;
    }

    //get the number of nodes
    ll getN(){
        return n;
    }

    // implement some algorithms here

    //bfs for an unwieghted/undirected graph and returns true or false if the a target node is reachable or not
    bool bfs(ll source, ll target){
        vector<bool> visited(n, false);
        queue<ll> q;
        q.push(source);
        visited[source] = true;
        while(!q.empty()){
            ll node = q.front();
            q.pop();
            if(node == target){
                return true;
            }
            for(auto child: adj[node]){
                if(!visited[child]){
                    q.push(child);
                    visited[child] = true;
                }
            }
        }
        return false;
    }

    //dfs
    bool dfs(ll source, ll target){
        vector<bool> visited(n, false);
        stack<ll> s;
        s.push(source);
        visited[source] = true;
        while(!s.empty()){
            ll node = s.top();
            s.pop();
            if(node == target){
                return true;
            }
            for(auto child: adj[node]){
                if(!visited[child]){
                    s.push(child);
                    visited[child] = true;
                }
            }
        }
        return false;
    }




};

//modular arithmetic
const int MOD = 1e9 + 7;

//binary search iterative
template<typename T>
ll binary_search_iterative(vector<T> &v, T target){
    ll l = 0, r = sz(v) - 1;
    while(l <= r){
        ll mid = (l + r) / 2;
        if(v[mid] == target){
            return mid;
        }
        else if(v[mid] < target){
            l = mid + 1;
        }
        else{
            r = mid - 1;
        }
    }
    return -1;
}

//prefix sum
template<typename T>
vector<T> prefix_sum(vector<T> &v){
    vector<T> prefix_sum(sz(v));
    prefix_sum[0] = v[0];
    for(int i = 1; i < sz(v); i++){
        prefix_sum[i] = prefix_sum[i - 1] + v[i];
    }
    return prefix_sum;
}


//the main function
void solve(void)
{
    // magic happens here
}

//starting point of the program
MAIN;
