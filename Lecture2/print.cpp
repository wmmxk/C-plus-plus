#include<iostream>
#include<sstream>
#include<string>

using namespace std;

int main()
{
    string s;
    getline(cin,s);
    istringstream iss(s);
    vector<string>v;
    while(iss)
    {
        string val;
        iss>>val;
        v.push_back(val);
    }

    for(auto i:v)
        cout<<i<<endl;

    return 0;
}
