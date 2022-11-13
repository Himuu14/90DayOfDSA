
===>>DEQUE 
#include<bits/stdc++.h>
using namespace std;

int main(){
    deque<int> d;

    d.push_back(3);
    d.push_back(4);
    d.push_back(5);
    d.push_back(6);
    d.push_front(2);
    d.push_front(1);
    for(int i:d){
        cout<< i<< " ";
    }cout<<endl;
    d.pop_back();
    d.pop_front();
    for(int i:d){
        cout<< i<< " ";
    }cout<<endl;
    
    cout<< "Element at zeroth position : "<< d.at(0)<<endl;
    cout<< "Element at the front : "<< d.front()<<endl;
    cout<< "Element at the back : "<< d.back()<<endl;
    cout<< "IS it empty : "<< d.empty()<<endl;

    cout<< "Size before erasing : "<< d.size()<<endl;
    d.erase(d.begin(),d.begin()+1);
    cout<< "Size after erasing : "<<d.size()<<endl;


return 0;
}


====>> List 


#include<bits/stdc++.h>
using namespace std;

int main(){
    list<int> l;
    list<int>n (5,100);

    for(int i:n){
        cout<< i<< " ";
    }cout<<endl;

    l.push_back(2);
    l.push_back(3);
    l.push_front(1);
    for(int i:l){
        cout<< i<< " ";
    }cout<<endl;

    cout<< "before erase : "<<endl;
    for(int i:l){
        cout<<i<< " ";   }cout<< endl;
    l.erase(l.begin());
    cout<< "after erase : "<<endl;
    for(int i:l){
        cout<< i<< " ";
    }cout<< endl;
return 0;
}



===>> Stack

#include<bits/stdc++.h>
using namespace std;
void bataRaiBaba (stack<string>s){
    if(s.empty()){
        return;
    }
    cout<< s.top()<<endl;
    s.pop();
    bataRaiBaba(s);
}
int main(){
    stack<string> s;

    s.push("himansh");
    s.push("Abhay");
    s.push("Shantanu");
    s.push("mohit");
    s.push("Harsh");
    s.push("Himanshu");
    while(!s.empty()){
        cout<<"Element at the top is : "<<s.top()<<endl;
        s.pop();
    }
    s.push("himansh");
    s.push("Abhay");
    s.push("Shantanu");
    s.push("mohit");
    s.push("Harsh");
    s.push("Himanshu");


    bataRaiBaba(s);

return 0;
}



===>> Queue

#include<bits/stdc++.h>
using namespace std;

void bataRaiBaba (queue<string>s){
    if(s.empty()){
        return;
    }
    cout<< "Element jo aa sakta hai : "<< s.front()<<endl;
    s.pop();
    bataRaiBaba(s);
}
int main(){
    queue<string> s;
    s.push("Himansh");
    s.push("Mishra");
    s.push("The");
    s.push("Great");
    s.push("kya hai?");
    bataRaiBaba(s);
    cout<< s.size()<< " is the size of queue"<<endl;
return 0;
}



#include<bits/stdc++.h>
using namespace std;

int main(){
    //max_priority_queue
    priority_queue<int> maxi;
    //mini_prioroty_queue
    priority_queue<int,vector<int>,greater<int>>mini;
    maxi.push(10);
    maxi.push(50);
    maxi.push(100);
    maxi.push(1);
    maxi.push(33);

    mini.push(10);
    mini.push(50);
    mini.push(100);
    mini.push(1);
    mini.push(33);

    int n= maxi.size();
    for(int i(0);i<n;i++){
        cout<< "Element is : "<<maxi.top()<< endl;
        maxi.pop();
    }
    cout<<endl;
cout<< "---------------"<<endl;
cout<<endl;
    int n1= mini.size();
    for(int i(0);i<n1;i++){
        cout<< "Element is : "<<mini.top()<<endl;
        mini.pop();
    }
return 0;
}



====>>Set 

#include<bits/stdc++.h>
using namespace std;

int main(){
    set<int> s;
    s.insert(5);
    s.insert(8);
    s.insert(10);
    s.insert(3);
    s.insert(3);
    s.insert(5);
    s.insert(3);
    s.insert(5);

    for(auto i:s){
        cout<< i<<endl;
    }

cout<<endl;
cout<< "-------"<<endl;
cout<<endl;

    set<int>:: iterator it = s.begin();
    it++;
    s.erase(it);
    for(auto i:s){
        cout<<i<<endl;
    }
return 0;
}


===>Multi sets


#include<bits/stdc++.h>
using namespace std;

#define fastio() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define MOD 1000000007
#define MOD1 998244353
#define INF 1e18
#define nline "\n"
#define pb push_back
#define ppb pop_back
#define mp make_pair
#define ff first
#define ss second
#define PI 3.141592653589793238462
#define set_bits __builtin_popcountll
#define sz(x) ((int)(x).size())
#define all(x) (x).begin(), (x).end()

typedef long long ll;
typedef unsigned long long ull;
typedef long double lld;
// typedef tree<pair<int, int>, null_type, less<pair<int, int>>, rb_tree_tag, tree_order_statistics_node_update > pbds; // find_by_order, order_of_key

#ifndef ONLINE_JUDGE
#define debug(x) cerr << #x <<" "; _print(x); cerr << endl;
#else
#define debug(x)
#endif
void _print(ll t[]) {cerr << t;}
void _print(ll t) {cerr << t;}
void _print(int t) {cerr << t;}
void _print(string t) {cerr << t;}
void _print(char t) {cerr << t;}
void _print(lld t) {cerr << t;}
void _print(double t) {cerr << t;}
void _print(ull t) {cerr << t;}
template <class T, class V> void _print(pair <T, V> p);
template <class T> void _print(vector <T> v);
template <class T> void _print(set <T> v);
template <class T, class V> void _print(map <T, V> v);
template <class T> void _print(multiset <T> v);
template <class T, class V> void _print(pair <T, V> p) {cerr << "{"; _print(p.ff); cerr << ","; _print(p.ss); cerr << "}";}
template <class T> void _print(vector <T> v) {cerr << "[ "; for (T i : v) {_print(i); cerr << " ";} cerr << "]";}
template <class T> void _print(set <T> v) {cerr << "[ "; for (T i : v) {_print(i); cerr << " ";} cerr << "]";}
template <class T> void _print(multiset <T> v) {cerr << "[ "; for (T i : v) {_print(i); cerr << " ";} cerr << "]";}
template <class T, class V> void _print(map <T, V> v) {cerr << "[ "; for (auto i : v) {_print(i); cerr << " ";} cerr << "]";}

void printarr(ll arr[],ll n){
    for(ll i=0;i<n;i++){
        cerr<<arr[i]<<" ";
    }
    cerr<<"\n";
}
void printvec(vector<pair<int,int>>&vp){
    cout<< "Size "<< vp.size()<<"\n";
    for(int i(0);i<vp.size();i++){
        cout<< vp[i].first<<" "<< vp[i].second<<"\n";
    }
} 

void solve(){
    int n, k;
    cin>> n>> k;
    multiset<ll> bags;
    for(int i(0);i<n;i++){
        ll candy_ct (0);
        cin>> candy_ct;
        bags.insert(candy_ct);
    }
    ll total_candy(0);
    for(int i(0);i<k;i++){
        auto last_it = (--bags.end());
        ll candy_ct = (*last_it);
        total_candy +=candy_ct;
        bags.erase(last_it);
        bags.insert(candy_ct /2);
    }
    cout<< total_candy <<endl;
    
}

int main() {
    fastio();
#ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
	freopen("Error.txt", "w", stderr);
#endif
    ll t;
    cin>>t;
    for(int i=1;i<=t;i++){
        // cout<<"Case #"<<i<<": ";
        solve();
    }
 
}



void solve(){
    int n;
    cin>> n;
    set<string>st;
    while(n--){
        string temp;
        cin>>temp;
        st.insert(temp);
    }
    for(auto itr=st.begin(); itr!=st.end();itr++){
        cout<<(*itr) <<endl;
    }
}
int main() {
    fastio();
#ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    freopen("Error.txt", "w", stderr);
#endif
    ll t;
    cin>>t;
    for(int i=1;i<=t;i++){
        // cout<<"Case #"<<i<<": ";
        solve();
    }
 
}
