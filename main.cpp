#include <iostream>
#include "string"
using namespace std;
int main()
{
    string s,result;
    int hash[123] ={0};
    cout<<"enter a string";
    cin>>s;
    int size = s.length();
    for(int i = 0;i<size;i++){
        if(hash[s[i]]==0){
            hash[s[i]]=1;
            result =result+s[i];

        }
    }
    cout<<result;
    return 0;


}

