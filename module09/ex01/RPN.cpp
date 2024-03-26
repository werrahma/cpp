#include "RPN.hpp"


int    Solution::evaluateOperator()
{
    int top = this->stack.top();
    this->stack.pop();
    return top;
}

void    Solution::EvaluateReversePolishNotion(char *av)
{
    for (size_t i = 0; i < strlen(av); i++)
    {
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
                if (val1 == 0)
                    throw (std::invalid_argument("Error"));
                this->stack.push(val2 / val1);
                break;
            }
            case ' ':
                break;
            default:
                convertTostring(av, i);
                if (atoi(this->string.c_str()) >= 10 || !iisdigit(this->string))
                    throw (std::invalid_argument("Error"));
                this->stack.push(atoi(this->string.c_str()));
                this->string.clear();
                break;
        }
    }
    if (stack.size() > 1 || stack.empty())
        throw (std::invalid_argument("Error"));
    std::cout << stack.top() << std::endl;
}

void    Solution::convertTostring(char *av, int index)
{
    for (size_t i = index; i < strlen(av); i++)
    {
        if (av[i] == ' ')
            return ;
        this->string.push_back(av[i]);
    }
}

int    Solution::iisdigit(const std::string &nb)
{
    for (std::string::const_iterator it = nb.begin(); it != nb.end(); it++)
    {
        if (!isdigit(*it))
            return 0;
    }
    return 1;
}