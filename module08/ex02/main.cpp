#include "MutantStack.hpp"
// template<typename T, typename Container = std::deque<T> >

// class iterable_stack : public std::stack<T, Container>
// {
//     // using std::stack<T, Container>::c;
//     public:
//     typedef typename Container::iterator iterator;
//     typedef typename Container::const_iterator const_iterator;


//     // expose just the iterators of the underlying container

//         iterator begin()  {
//             return this->c.begin();
//             }
//         iterator end()  {
//             return this->c.end();
//             }

//         iterator begin() const {
//             return this->c.begin();
//             }
//         iterator end() const {
//             return this->c.end();
//             }
// };

// int main()
// {
//     MutantStack<int> st;

//     st.push(2);
//     st.push(5);
//     st.push(3);
//     st.push(7);
//     st.push(9);
//     MutantStack<int>::iterator begin = st.begin();
//     MutantStack<int>::iterator end = st.end();
//     while (begin != end)
//     {
//         std::cout << *begin << std::endl;
//         begin++;
//     }
// }

int main()
{
    MutantStack<int> s1;
    s1.push(5);
    s1.push(17);
    MutantStack<int> s2(s1);
    std::cout << s2.top() << std::endl;;
}

// int main()
// {
//     MutantStack<int> mstack;
//     mstack.push(5);
//     mstack.push(17);
//     std::cout << mstack.top() << std::endl;
//     mstack.pop();
//     std::cout << mstack.size() << std::endl;
//     mstack.push(3);
//     mstack.push(5);
//     mstack.push(737);
//     //[...]
//     mstack.push(0);
//     MutantStack<int>::iterator it = mstack.begin();
//     MutantStack<int>::iterator ite = mstack.end();
//     ++it;
//     --it;
//     while (it != ite)
//     {
//     std::cout << *it << std::endl;
//     ++it;
//     }
//     std::stack<int> s(mstack);
//     ////
//     std::cout << "-----------------------------std::list test ------------------------------" << std::endl;
//     std::list<int> list;
//     list.push_back(5);
//     list.push_back(17);
//     std::cout << list.back() << std::endl;
//     list.pop_back();
//     std::cout << list.size() << std::endl;
//     list.push_back(3);
//     list.push_back(5);
//     list.push_back(737);
//     //[...]
//     list.push_back(0);
//     std::list<int>::iterator itList = list.begin();
//     std::list<int>::iterator iteList = list.end();
//     ++itList;
//     --itList;
//     while (itList != iteList)
//     {
//     std::cout << *itList << std::endl;
//     ++itList;
//     }
//     std::list<int> a(list);
//     return 0;
// }