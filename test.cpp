#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) 
    {
        unordered_map<int, vector<char>> mp;
        unordered_map<char, int>;
        for (unsigned int i = 0; i < 9; i++)
        {
            for (unsigned int j = 0; j < 9; j++)
               mp[i].push_back(board[i][j]);
        }
        for (int i  = 0; i < 9;)
        {
            for (int j = 0; j < 9; j+=3)
            {
                for (int a = 0; )
            }
        }
        return true;
    }
};


int main()
{
    vector<vector<char>> b = {{'8','3','.','.','7','.','.','.','.'}
    ,{'6','.','.','1','9','5','.','.','.'}
    ,{'.','9','8','.','.','.','.','6','.'}
    ,{'8','.','.','.','6','.','.','.','3'}
    ,{'4','.','.','8','.','3','.','.','1'}
    ,{'7','.','.','.','2','.','.','.','6'}
    ,{'.','6','.','.','.','.','2','8','.'}
    ,{'.','.','.','4','1','9','.','.','5'}
    ,{'.','.','.','.','8','.','.','7','9'}};
    Solution obj;
    obj.isValidSudoku(b);
}