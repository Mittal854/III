#include<iostream>
#include<string>
using namespace std;
char maxchar(string s)
{
    int arr[26]={0};

    for(int i=0;i<s.length();i++)
    {   
        int num=0;
        if(s[i]>='a' && s[i]<='z')
        {
            num=s[i]-'a';
        }
        else if(s[i]>='A' && s[i]<='Z')
        {
            num=s[i]-'A';
        }
        arr[num]++;
    }
    int max=-1;
    int ans=0;
    for(int i=0;i<26;i++)
    {
        if(arr[i]>max)
        {
            max=arr[i];
            ans=i;
        }
    }
    char fans='a'+ans;
    return fans;
}

int main(){
    string s;
    //cin>>s;
    getline(cin,s);
    cout<<maxchar(s);
    return 0;
}
// #include<iostream>
// #include<string>
// using namespace std;

// int main(){
//     string s;
//     getline(cin,s);
//     cout<<s;
//     return 0;
// }
// #include<iostream>
// using namespace std;
// class myclass
// {
//     public:
//         static int count;
//         myclass()
//         {
//             count++;
//         }
// };
// int myclass :: count=0;
// int main(){
//     myclass o1,o2,o3;
//     cout<<myclass::count<<endl;
    
//     return 0;
// }