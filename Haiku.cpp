#include<bits/stdc++.h>
#define op() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'
using namespace std;

bool isVowel(char c)
{    return (c=='a' || c=='e' || c=='i' || c=='o' || c=='u' );
}
int main()
{
    op();

    vector<string> v;
    char ctn[] = {5, 7, 5};

    for(int i=0; i<3; i++)
    {
        string s;
        getline(cin, s);
        while(s.length()==0)
        {
            getline(cin, s);
        }

        v.push_back(s);
    }
    for(int i=0; i<3; i++)
    {
        int c=0;
        for(auto u : v[i])
        {
            if(isVowel(u)) c++;
        }
        if(c !=ctn[i]) return cout<< "NO",0;
    }
    cout<< "YES"<<endl;

    return 0;
}
