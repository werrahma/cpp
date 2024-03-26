#ifndef RPN_HPP
#define RPN_HPP
#include <stack>
#include <cstring>
#include <iostream>
#include <stdlib.h>
#include <cctype>
#include <string>

class Solution
{
    std::stack<int> stack;
    std::string string;
    public:
        void    EvaluateReversePolishNotion(char *av);
        int    evaluateOperator();
        int    iisdigit(const std::string &nb);
        void     convertTostring(char *av, int index);
};




#endif