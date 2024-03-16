#include "PmergeMe.hpp"


void    PmergeMe::CreatePairs(std::vector<int> arr, std::vector<std::pair<int, int> > &pairs)
{
    size_t ArrSize = arr.size();
    if (ArrSize % 2 != 0)
    {
        ArrSize--;
        tmp = arr[ArrSize];
    }
    std::vector<int> tmp;
    // for(size_t i = 0; i < ArrSize; i++)
    // {
    //     std::cout << "-- " << arr[i] << " --- ";
    //     tmp.push_back(arr[i]);
    // }
    std::cout << std::endl;
    for (size_t i = 0; i < tmp.size(); i++)
    {
        if (arr[i] > arr[i + 1])
        {
            std::pair<int, int> tmpPair(arr[i], arr[i + 1]);
            pairs.push_back(tmpPair);
        }
        else
        {
            std::pair<int, int> tmpPair(arr[i + 1], arr[i]);
            pairs.push_back(tmpPair);
        }
    }
}
void    PmergeMe::Psort(std::vector<int> &arr)
{
    if (arr.size() <= 1)
        return ;
    
    ////   create vector of pairs 
    //// create another vector using vec of pairs
    std::vector<std::pair<int, int> > pairs;
    CreatePairs(arr, pairs);
    std::vector<int> NewArr;
    for (size_t i = 0; i < pairs.size(); i++)
    {
        NewArr.push_back(pairs[i].first);
        std::cout << NewArr[i] << " ";
    }
    std::cout << std::endl;
    std::cout << "tmp  " << tmp << std::endl;
    Psort(NewArr);
}