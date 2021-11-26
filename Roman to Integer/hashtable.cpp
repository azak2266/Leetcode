#include <iostream>
#include <string>
#include <map>
using namespace std;

class Solution
{
public:
    int romanToInt(string s)
    {
        int ans = 0;
        int point = 0;
        map<char, int> array = createmap();
        map<char, int>::iterator iter;
        map<char, int>::iterator iter2;
        if (s.size()==1)
        {
            iter = array.find(s[0]);
            return ans + iter->second;
        }
        for (int i = 1; i < s.size();)
        {
            iter = array.find(s[i]);
            iter2 = array.find(s[i - 1]);
            if ((iter->first == 'V' ||iter->first == 'X') && iter2->first == 'I')
            {
                ans = ans + (iter->second - iter2->second);
                i +=2;
                if (i == s.size())
                {
                    iter = array.find(s[i-1]);
                    ans += iter->second;
                } 
            }
            else if ((iter->first == 'L' ||iter->first == 'C') && iter2->first == 'X')
            {
                ans = ans + (iter->second - iter2->second);
                i +=2;
                if (i == s.size())
                {
                    iter = array.find(s[i-1]);
                    ans += iter->second;
                }    
            }
            else if ((iter->first == 'D' ||iter->first == 'M') && iter2->first == 'C')
            {
                ans = ans + (iter->second - iter2->second);
                i +=2;
                if (i == s.size())
                {
                    iter = array.find(s[i-1]);
                    ans += iter->second;
                } 
            }
            
            else
            {
                ans = ans + iter2->second;
                i+=1;
                if (i >= s.size())
                    ans += iter->second;
            }
        }
        return ans;
    }
    map<char, int> createmap()
    {
        map<char, int> arr;
        arr['I'] = 1;
        arr['V'] = 5;
        arr['X'] = 10;
        arr['L'] = 50;
        arr['C'] = 100;
        arr['D'] = 500;
        arr['M'] = 1000;
        return arr;
    }
};

int main()
{
    Solution s;
    int ans;
    string input = "IV"; //1695
    ans = s.romanToInt(input);
    cout<<ans<<endl;
    return 0;
}