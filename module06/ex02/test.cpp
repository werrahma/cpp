#include <iostream>
#include <vector>
using namespace std;
#include <string>
#include <map>
#include<bits/stdc++.h> 
class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs)
    {
        vector<vector<string>> result;
        vector<string> vec_tmp;
        string tmp;
        for(size_t i = 0; i < strs.size(); i++)
        {
            sort(strs[i].begin(), strs[i].end());
        }
        for (size_t i = 0; i < strs.size(); i++)
        {
            tmp = strs[i];
            for (vector<string>::iterator it = strs.begin(); it < strs.end(); it++)
            {
                if (tmp == *it)
                {
                    vec_tmp.push_back(*it);
                    it = strs.erase(it);
                }
            }
            result.push_back(vec_tmp);
        }
        return result;
    }
};
// int main()
// {
//     Solution obj;
//     vector<string> ss = {"eat","tea","tan","ate","nat","bat"};
//     vector<vector<string>> result = obj.groupAnagrams(ss);
//     cout << result[0][0] << endl;
//     for (size_t i = 0; i < result[i].size(); i++)
//     {
//         for (size_t j = 0; j < result[i].size(); j++)
//         {
//             cout << result[i][j] << endl;
//         }
//     }
// }

int main()
{
    int *a;
    std::cout << &a << std::endl;
    uintptr_t tmp = reinterpret_cast<uintptr_t>(a);
    cout << &tmp << endl;
}
