#include "easyfind.hpp" 
#include <vector>

int main()
{
    std::vector<int> vec;
    vec.push_back(4);
    vec.push_back(66);
    vec.push_back(6);
    vec.push_back(34);
    vec.push_back(1);
    easyfind(vec, 3);
}