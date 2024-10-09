#include<iostream>
using namespace std;

int main(){
    string s;
    getline(cin,s);
    char arr[50];
    int j=0;
    for(int i=0;i<s.length();i++)
    {
        if(s[i]=='a' || s[i]=='e' || s[i]=='i' || s[i]=='o' || s[i]=='u')
        {
            arr[j]=s[i];
            j++;
        }
    }  
    for(int i=0;i<s.length();i++)
    {
         if(s[i]=='a' || s[i]=='e' || s[i]=='i' || s[i]=='o' || s[i]=='u')
        {   
            j--;
            s[i]=arr[j]; 
        }
    } 
    cout<<s;
    return 0;
}