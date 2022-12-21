class Solution {
public:
    int compress(vector<char>& chars) {
        int i=0, n=chars.size() , ans=0;
        while(i<n)
        {
            int j=i+1;
            while(j<n && chars[i]==chars[j])
            {
                j++;
            }
            chars[ans++]=chars[i];
            int co=j-i;
            if(co>1)
            {
                string cnt=to_string(co);
                for(char ch: cnt)
                {
                    chars[ans++]=ch;
                }
            }
            i=j;
        }
        return ans;
    }
};