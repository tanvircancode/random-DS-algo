#include<bits/stdc++.h>
using namespace std;

int main()
{
    map <string, int> m;
    map< string, int>::iterator it;
    m["tanvir"] = 5;
    m["tanjir"] = 7;
    m["akbar"] = 10;
    m.insert(make_pair("hasan", 14));
    m.insert(make_pair("ikbal",12));

    //it = m.begin();
    //it++;
    for(it = m.begin(); it != m.end() ; it++)
    {
        cout<<it -> first<<" "<<it -> second<<endl;
    }

//    cout<<m["nabil"]<<endl;
    return 0;
}
