#include<bits/stdc++.h>
using namespace std;


string secret_decoder(string str)
{
    int size = str.size();
    // removing the last suffiz 'ae'
    str = str.substr(0,size-2);
    if(str=="")
        return str;
    string first_two = str.substr(size-4, 2);
    str = str.substr(0, size-4);
    str = first_two+str;
    
    return str;
}

int main()
{
    string str;
    cin>>str;
    cout<<secret_decoder(str);
    return 0;
}