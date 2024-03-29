1. t.c. O(n)  s.c. o(26)

class Solution {
public:
   bool isAnagram(string s, string t) {
       
      
      if(s.length()!=t.length())
          return false;
       
       int freq[26]={0};
       for(int i=0;i<s.length();i++){
           ++freq[s[i]-'a'-'\0'];
           --freq[t[i]-'a'-'\0'];
       }
       
       for(int i=0;i<26;i++){
           if(freq[i]<0)
               return false;
       }
        return true;
    }
};

2.using sort on both and then comparing.
t.c.  O(nlogn)    s.c O(1) 
