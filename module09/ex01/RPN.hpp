#ifndef RPN_HPP
#define RPN_HPP
#include <stack>
#include <cstring>
#include <iostream>
#include <stdlib.h>

class Solution
{
    std::stack<int> stack;
    public:
        void    EvaluateReversePolishNotion(char *av);
        int    evaluateOperator();
        void    removespaces(char *str);
};



#endif