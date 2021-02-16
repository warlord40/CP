#include<bits/stdc++.h>
using namespace std;

long long int solution(vector<char>p, vector<char> q)
{
    set<char> S(p.begin(),p.end());

    long long int temp=0;

    for(auto x:q)
    {
        if(S.find(x)!=S.end())
        {
            temp++;
        }
    }

    return temp;
}

int main()
{
    long long int t;
    cin>>t;
    while(t--)
    {
        long long int N;
        cin>>N;

        map<string,vector<char>> Me;

        string sample;

        for(long long int i=0;i<N;i++)
        {
            cin>>sample;

            if(sample.length()>0)
            {
                Me[sample.substr(1)].push_back(sample[0]);
            }
        }
        long long answer=0;

        for(auto im:Me)
        {
            for(auto jm:Me)
            {
                if(im.first!= jm.first)
                {
                    long long temp =solution(im.second,jm.second);
                    answer+=(im.second.size()-temp)*(jm.second.size()-temp);
                }
            }
        }
     cout<<answer<<endl;
    }
}
