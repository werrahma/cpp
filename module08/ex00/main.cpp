#include "easyfind.hpp"
int main()
{
    std::vector<int> vec;
    std::deque<int> mydeque;

    ///list container
    std::list<int> nums;
    // nums.assign({0,3,4,5,5});
    // std::list<int> ::iterator it = nums.begin();
    // std::cout << *it << std::endl;
    vec.push_back(4);
    vec.push_back(66);
    vec.push_back(6);
    vec.push_back(34);
    vec.push_back(1);

    mydeque.push_back(66);
    mydeque.push_back(6);
    mydeque.push_front(4);
    mydeque.push_front(3);

    nums.push_back(66);
    nums.push_back(6);
    nums.push_front(4);
    nums.push_front(3);
    easyfind(vec, 3);
    easyfind(mydeque, 3);
    easyfind(nums, 3);
}