#include<iostream>
#include<string>
using namespace std;

class Solution {
public:
    string combine(string word1, string word2) {
    int i;
    
    for(i=0;i<10;i++){
    if(i<=word1.length()){
     cout<<word1;
    }
    if(i<=word2.length()){
   cout<<word2;
    }
    }
    }
};
int main()
{  Solution st;
    string word1,word2,merge;
    // str.mergeAlternately("abc","pqr");
    cout<<st.combine("abc","pqr")<<endl;
    return 0;
}
