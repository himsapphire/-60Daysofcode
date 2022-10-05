//t.c - O(n*(max of word length))  , s.c. - O(length of max word)

class Solution
{
    public:
    //Function to reverse words in a given string.
    string reverseWords(string S) 
    { 
        // code here 
        stack<char> stk;
        string ans;
        for(int i=S.length()-1;i>=0;i--){
            if(S[i]!='.')
              stk.push(S[i]);
            else{
                while(!stk.empty())
                   {ans+=stk.top();
                    stk.pop();}
                    
                ans+='.';   
            }  
              
        }
        while(!stk.empty())
                   {ans+=stk.top();
                    stk.pop();}
        return ans;
    } 
};


// t.c- O(N), s.c-O(1)

class Solution
{
    public
    //Function to reverse words in a given string.
    string reverseWords(string S) 
    { 
        // code here 
        int l=0,h=S.length();
        string temp,ans;char c;
        while(l<h){
            c=S[l];
            if(c!='.')
               temp+=S[l];
            else{
                // if ans is empty
                if(ans=="")
                   ans=temp;
                else
                   ans=temp+"."+ans;
                
                temp="";   
            }  
            l++;
        }
        //since after last word there is no dot, its not added
        //corner case can be when here is single word e.g. hi
        
        if(temp!="" and ans!="")
           ans=temp+"."+ans;
        else
           ans=temp;
        return ans;
    } 
};
