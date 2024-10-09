// #include <iostream>
// #include <vector>
// using namespace std;
// int main()
// {
//     vector<int> socks;
//     int n;
//     int max = 0;
//     cin >> n;
//     cin.ignore();
//     string s;
//     getline(cin, s);
//     for (char i : s)
//     {
//         int index = i - '0';
//         if (socks.empty())
//         {
//             socks.push_back(index);
//         }
//         else
//         {
//             for (int j = 0; j < socks.size(); j++)
//             {
//                 if (socks[j] == index)
//                 {
//                     socks.erase(socks.begin() + j);
//                 }
//                 else
//                 {
//                     socks.push_back(index);
//                 }
//                 if (socks.size() > max)
//                 {
//                     max = socks.size();
//                 }
//             }
//         }
//     }
//     cout << "max socks=" << max;
//     return 0;
// }

#include <iostream>
#include <vector>
using namespace std;

int main() {
    
    int n;
    vector<char> socks;
    int max = 0;
    cin >> n;
    cin.ignore();
    string s;
    getline(cin, s);

    for (char i : s) {
        bool found = false;

        for (int j = 0; j < socks.size(); j++) {
            if (socks[j] == i) {
                socks.erase(socks.begin() + j);
                found = true;
                break; 
            }
        }

        if (!found) {
            socks.push_back(i);
        }

        if (socks.size() > max) {
            max = socks.size();
        }
    }

    cout << "max socks=" << max;
    return 0;
}
