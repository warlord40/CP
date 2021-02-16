#include<bits/stdc++.h>
using namespace std;

void solve()
{
    string TBase, ABase;
    std::cin>>TBase>>ABase;

    long long int N;
    std::cin>>N;

    if(ABase == "PM")
    {
        if(TBase[0]== '1' && TBase[1]== '2')
        {

        }
        else
        {
            int sec = int(TBase[0]-48);
            sec *= 10;
            sec += int(TBase[1]-48);
            sec += 12;
            int rem = sec%10;
            TBase[1] = char(rem+48);
            TBase[0] = char(int(sec/10)+48);
        }
    }
    else
    {
        if(TBase[0]== '1' && TBase[1]== '2')
        {
            int sec = int(TBase[0]-48);
            sec *= 10;
            sec += int(TBase[1]-48);
            sec -= 12;
            int rem = sec%10;
            TBase[1] = char(rem+48);
            TBase[0] = char(int(sec/10)+48);
        }
    }
    string l,m,n,o;
    for(long long int i=0;i<N;i++)
    {
        std::cin>>l>>m>>n>>o;
        if(m == "PM")
        {
            if(l[0]== '1' && l[1]== '2')
            {

            }
            else
            {
                int sec = int(l[0]-48);
                sec *= 10;
                sec += int(l[1]-48);
                sec += 12;
                int rem = sec%10;
                l[1] = char(rem+48);
                l[0] = char(int(sec/10)+48);
            }
        }
        else
        {
            if(l[0]== '1' && l[1]== '2')
            {
                int sec = int(l[0]-48);
                sec *= 10;
                sec += int(l[1]-48);
                sec -= 12;
                int rem = sec%10;
                l[1] = char(rem+48);
                l[0] = char(int(sec/10)+48);
            }
        }
        if(o == "PM")
        {
            if(n[0]== '1' && n[1]== '2')
            {

            }
            else
            {
                int sec = int(n[0]-48);
                sec *= 10;
                sec += int(n[1]-48);
                sec += 12;
                int rem = sec%10;
                n[1] = char(rem+48);
                n[0] = char(int(sec/10)+48);
            }
        }
        else
        {
            if(n[0]== '1' && n[1]== '2')
            {
                int sec = int(n[0]-48);
                sec *= 10;
                sec += int(n[1]-48);
                sec -= 12;
                int rem = sec%10;
                n[1] = char(rem+48);
                n[0] = char(int(sec/10)+48);
            }
        }
        if(TBase>= l && TBase<= n)
        {
            cout<<"1";
        }
        else{
            cout<<"0";
        }

    }
        cout<<endl;

}

int main()
{
    int t;
    std::cin>>t;
    while(t--)
    {
        solve();
    }
}

