#include "RPN.hpp"


int    Solution::evaluateOperator()
{
    int top = this->stack.top();
    this->stack.pop();
    return top;
}

void    Solution::EvaluateReversePolishNotion(char *av)
{
    removespaces(av);
    for (size_t i = 0; i < strlen(av); i++)
    {
        std::string tmpp[4];
        switch (av[i])
        {
            case '+':
                if (stack.size() <= 1)
                    throw (std::invalid_argument("Error"));
                this->stack.push(evaluateOperator() + evaluateOperator());
                break;
            case '-':
            {
                if (stack.size() <= 1)
                    throw (std::invalid_argument("Error"));
                int val1 = evaluateOperator();
                int val2 = evaluateOperator();
                this->stack.push(val2 - val1);
                break;
            }
            case '*':
                if (stack.size() <= 1)
                    throw (std::invalid_argument("Error"));
                this->stack.push(evaluateOperator() * evaluateOperator());
                break;
            case '/':
            {
                if (stack.size() <= 1)
                    throw (std::invalid_argument("Error"));
                int val1 = evaluateOperator();
                int val2 = evaluateOperator();
                this->stack.push(val2 / val1);
                break;
            }
            default:
                char tmp[2] = {av[i], '\0'};
                if (!isdigit(av[i]) || atoi(tmp) >= 10)
                    throw (std::invalid_argument("Error"));
                this->stack.push(atoi(tmp));
                break;
        }
    }
    if (stack.size() > 1)
        throw (std::invalid_argument("Error"));
    std::cout << stack.top() << std::endl;
}

void    Solution::removespaces(char *str)
{
    int   j = 0;
    for (size_t i = 0; i < strlen(str); i++){
        if (str[i] != ' ')
        {
            str[j] = str[i];
            j++;
        }
    }
    str[j] = '\0';
}