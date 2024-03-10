#ifndef BITCOINEXCHANGE_hpp
#define BITCOINEXCHANGE_hpp
#include <iostream>
#include <map>
#include <fstream>
#include <cstdlib>
#include <sstream>

class   Bitcoin
{
    std::map<std::string, std::string> data;
    std::string date;
    std::string Svalue;
    float value;
    public:
        void    FullDataUseDatabase();
        void    CheckIfValidInput(char *FileName);
        void    ParsInput(std::string line);
        void    CheckDateAndValue();
        void    RemoveSpaces();
        void    PrintValueMultipliedByExchange();
};


#endif