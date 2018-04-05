#include <iostream>
#include<algorithm>
#include<vector>

using namespace std;
factorial(int n)
{
    if(n=-0)
        return 1;
    if(n==1)
        return 1;
    return(n*factorial(n-1));
}
position(int w,vector<int> t)
{
    int p;
    for(int i=0;i<t.size();i++)
    {
        if(w>=t[i])
            p++;
    }
    return(p);
}

int main()
{
    int n;
    int ranking=0;
    int facto=0;
    int fa=0;
    char q;
    string name;
    cin>>n;
    vector<char> ar;
    vector<int> dic;
    vector<int> s;
    for(int i=0;i<n;i++)
    {
        cin>>q;
        ar.push_back(q);
    }
    cin>>name;
    for(int i=0;i<name.size();)
    {
        int k=name[i];
        s.push_back(k);
    }
    for(int i=0;i<n;i++)
    {
        int w=ar[i];
        dic.push_back(w);
    }
    sort(dic.begin(),dic.end());
    for(int i=0;i<s.size();i++)
    {

       fa=position(s[i],dic);
       facto=fa*factorial(n-i);
       ranking=ranking+facto;
    }
    return(ranking);
}
