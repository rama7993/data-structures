/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <bits/stdc++.h>
using namespace std;

class graph{
    int v;
    list<int> *l;
   public:
    graph(int v){
        this->v=v;
        l=new list<int>[v];
    }
    void add_edge(int x,int y){
        l[x].push_back(y);
        l[y].push_back(x);
    }
    void print_graph(){
        for(int i=0;i<v;i++){
            cout<<"vertex-"<<i<<"->";
            for(int x:l[i]){
                cout<<x<<",";
            }
            cout<<endl;
        }
    }
};

int main(){
    int n;
    cout<<"enter no. of vertices:";
    cin>>n;
    graph g(n);
   int edges;
     cout<<"enter edges:";
    cin >> edges;
    int x,y;
    for(int i = 0; i < edges; i++){
        cin>>x>>y;
        g.add_edge(x,y);
    }
}
