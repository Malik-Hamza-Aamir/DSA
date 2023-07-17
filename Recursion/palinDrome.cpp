#include<iostream>
using namespace std;

int helper(string s, int start, int end){
    if (start >= end){
        return 1;
    }

    if (s[start] != s[end])
    {
        return 0;
    }
    
    return helper(s, start+1, end-1);
    
}

int palind(string s){
    int e = s.size()-1; //length of string
    return helper(s, 0, e);
}

int main(){
    cout<<endl;
    cout<<"plaindrome : ";
      cout<< palind("abcba") << endl;
      
      cout<< palind("Hamza");
}