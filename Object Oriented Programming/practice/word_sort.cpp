#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main(){
    string s;
    vector<string> words;
    string final;
    getline(cin,s);
    int index=0;
    string w1="";
    for(int i=0;i<=s.length();i++)
    {
        // if(s[i]==' ' || s[i]=='\0')
        // {
        //     for(int j=index;j<i;j++)
        //     {
        //         w1+=s[j];
        //     }
        //     words.push_back(w1);
        //     w1="";
        //     index=i+1;
        // }
        if(s[i]!=' ' && s[i]!='\0')
        {
            w1+=s[i];
        }
        else
        {
            words.push_back(w1);
            w1="";
        }    }
    sort(words.begin(),words.end());
    for(string i:words)
    {
        final+=i;
        final+=' ';
    }
    cout<<final;

    return 0;
}