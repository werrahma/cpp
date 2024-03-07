#include <vector>
#include <stack>
#include <iostream>
#include <list>

int main()
{
    // std::stack<int, std::vector<int> > stack;
    std::list <int> stack;
    stack.push_back(3);
    stack.push_back(2);
    std::list<int>::iterator it = stack.end();
    // std::cout << *it << std::endl;
    // std::cout << stack.top() << std::endl;
    // std::stack<int, std::vector<int>>::iterator it;

    std::vector<int> vec;
    for (int i =0 ; i < 10; i++)
    {
        vec.push_back(i);
        std::cout << "capacity " << vec.capacity() << std::endl;;
    }
    // vec.push_front();
}