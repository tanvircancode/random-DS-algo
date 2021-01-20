#include<bits/stdc++.h>
using namespace std;

bool f (int x, int y)
{
    return x>y;
}

void vectorDemo()
{
    vector<int>v = {2,3,11,14};
    sort(v.begin(), v.end());
    v.push_back(97);
    v.push_back(100);
    v.push_back(100);
    v.push_back(100);
    v.push_back(100);
    v.push_back(123);
    bool present = binary_search(v.begin(), v.end(), 18);
    cout<<present<<endl;
    present = binary_search(v.begin(), v.end(), 14);
    cout<<present<<endl;
    // 2 3 11 14 100 100 100 100 100 123
    auto it = lower_bound(v.begin(), v.end(), 100);
    auto it2 = upper_bound(v.begin(), v.end(), 100);
    cout<<"it: "<<*it<<" it2: "<<*it2<<endl;
    cout<<it2 - it<<endl;

    sort(v.begin(), v.end(), f);
    //vector<int>::iterator it3;
    for(auto &x:v)
    {
        x++;
    }
    for(auto x:v)
    {
        cout<<x<<" ";
    }
    cout<<endl;
}

void setDemo()
{
    set<int>s;
    s.insert(1);
    s.insert(-10);
    s.insert(-1);
    s.insert(2);
    for(auto x:s)
    {
        cout<<x<<" ";  //-10 -1 1 2
    }
    cout<<endl;
    auto it = s.find(-1);
    if(it == s.end())
    {
        cout<<"not present\n";
    }
    else
    {
        cout<<"present ";
        cout<<*it<<endl;
    }
    auto it2 = s.lower_bound(1);
    auto it3 = s.upper_bound(1);
    cout<<*it2<<" "<<*it3<<endl;

    auto it4 = s.upper_bound(2);
    if(it4==s.end())
    {
        cout<<"oops! can't find in the set\n";
    }

}

int main()
{
    //  vectorDemo();
    setDemo();
}
