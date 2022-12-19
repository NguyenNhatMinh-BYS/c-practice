#include <bits/stdc++.h>
using namespace std;
string s; int i,j;
int main()
{
    getline(cin,s);
    for(i=0;i<s.size();++i)
    {
        j=i+1;
        do
        {
            if(s[i]==s[j]) s.erase(j,1);
            else j++;
        } while(j<=s.length());
    }
    cout<<s;
}
