#include<bits/stdc++.h>

using namespace std;
int main()
{
        int n;
        std::cin>>n;
        std::vector <int> d;

        for (int i = 1; i*i < n; i++) {
         if (n % i == 0)
            d.push_back(i);
        }
        for (int i = sqrt(n); i >= 1; i--) {
        if (n % i == 0)
            d.push_back(n/i);
        }
        sort(d.begin(),d.end());
        std::vector<int> :: iterator it;

        it = remove_if(d.begin(), d.end(), bind2nd(greater<int>(), 10));


        d.erase (it, d.end());
        cout<<*max_element(d.begin(),d.end())<<endl;
}
