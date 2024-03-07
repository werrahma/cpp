#include "Span.hpp"
#include <bits/stdc++.h>
using namespace std;

class Solution
{
    public:
        vector<vector<string>> groupAnagrams(vector<string>& strs)
        {
            vector<vector<string>> vec;
            vector<string> tmp;
            // / use map containere
            unordered_map<string, unsigned int> map;
            for (unsigned int i = 0; i < strs.size(); i++)
            {
                sort(strs[i].begin(), strs[i].end());
                // sort(strs[i].begin(), strs[i].end());
                map[strs[i]] = i;
            }
            // sort(map.begin(), map.end());
            for(unordered_map<string, unsigned int>::iterator it = map.begin(); it != map.end(); ++it)
            {
                std::cout << it->first << std::endl;
            }
            // for (vector<string>::iterator it = strs.begin(); it != strs.end(); ++it)
            // unsigned int it = 0;
            // unsigned int j = 0;
            // for (unsigned int i = 0; i < map.size(); i++)
            // {
            //     if (tmp[i] != tmp[it])
            //     {
            //         j++;
            //         it = i;
            //     }
            //     else
            //         vec[j].push_back(strs[i]);
            // }
            return vec;
        }
};

int main()
{
    Solution obj;
    vector<string> vec = {"eat","tea","tan","ate","nat","bat"};
    obj.groupAnagrams(vec);
}