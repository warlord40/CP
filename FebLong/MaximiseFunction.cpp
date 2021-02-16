#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        vector<long long int> d;
        while(n--){
            long long int a;
            cin>>a;
            d.push_back(a);
        }
        long long int max1= *max_element(d.begin(),d.end());
        long long int min1= *min_element(d.begin(),d.end());

        long long int res = 2*(max1-min1);

        cout<<res<<endl;

    }

}