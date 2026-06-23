#include<iostream>
using namespace std;
// class Solution {
// public:
//     int strStr(string haystack, string needle) {
//         int n = haystack.length();
//         int m = needle.length();

//         for (int i = 0; i <= n - m; i++) {
//             bool match = true;

//             for (int j = 0; j < m; j++) {
//                 if (haystack[i + j] != needle[j]) {
//                     match = false;
//                     break;
//                 }
//             }

//             if (match)
//                 return i;
//         }

//         return -1;
//     }
// };
class Solution {
public:

    int strStr(string haystack, string needle) {
        size_t pos = haystack.find(needle);
        return (pos == string::npos) ? -1 : pos;
   
    }
};
int main(){
    Solution s1;
    int m =s1.strStr("sohan","ohan");
    cout<<"the value of index is :"<<m<<endl;
}
