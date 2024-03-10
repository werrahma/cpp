#include "BitcoinExchange.hpp"

void    Bitcoin::FullDataUseDatabase()
{
    std::ifstream DataFile("data.csv");
    if (!DataFile.is_open())
        throw (std::invalid_argument("Failed to open data base"));
    std::string line;
    std::getline(DataFile, line);
    while (std::getline(DataFile, line))
        this->data[line.substr(0, line.find(","))] = &line[line.find(",") + 1];
}


void    Bitcoin::CheckIfValidInput(char *FileName)
{
    std::ifstream InputFile(FileName);
    if (!InputFile.is_open())
        throw (std::invalid_argument("Failed to open InputFile"));
    std::string line;
    std::getline(InputFile, line);
    if (line !=  "date | value")
        throw (std::invalid_argument("invalid first line"));
    while (std::getline(InputFile, line))
        ParsInput(line);
}

void    Bitcoin::ParsInput(std::string line)
{
    try
    {
        if (line.find("|") != std::string::npos)
        {
            this->date = line.substr(0, line.find("|")), this->Svalue = &line[line.find("|")+1];
            this->RemoveSpaces();
            this->CheckDateAndValue();
            this->PrintValueMultipliedByExchange();
        }
        else
        {
            std::string tmp = "Error: bad input => " + line;
            throw (std::invalid_argument(tmp));
        }
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << "\n";
    }   
}

void    Bitcoin::PrintValueMultipliedByExchange()
{
    for (std::map<std::string, std::string>::iterator it = this->data.begin(); it != this->data.end(); it++)
    {
        if (it->first == this->date)
        {
            float exchange;
            std::istringstream iss(it->second);
            iss >> exchange;
            std::cout << this->date << " => " << this->Svalue << " = " << exchange * this->value << std::endl;
            return ;
        }
    }
    std::map<std::string, std::string>::iterator it = this->data.lower_bound(this->date);
    if (it != this->data.end()) {
        it--;
        float exchange;
        std::istringstream iss(it->second);
        iss >> exchange;
        std::cout << this->date << " => " << this->Svalue << " = " << exchange * this->value << std::endl;
    }
}

void    Bitcoin::RemoveSpaces()
{
    std::string tmp;
    for (size_t i = 0; i < date.size(); i++)
    {
        if (date[i] != ' ' && date[i] != '\r')
            tmp.push_back(date[i]);
    }
    this->date = tmp;
    if (tmp.empty())
        throw (std::invalid_argument("Error: empty date"));
    tmp = "";
    for (size_t i = 0; i < Svalue.size(); i++)
    {
        if (Svalue[i] != ' ' && Svalue[i] != '\r')
            tmp.push_back(Svalue[i]);
    }
    this->Svalue = tmp;
    if (tmp.empty())
        throw (std::invalid_argument("Error: empty value"));
}

int isDigit(std::string nb)
{
    for (size_t i = 0; i < nb.size(); i++)
    {
        if (!isdigit(nb[i]))
            return 0;
    }
    return 1;
}

int isFloat(std::string nb)
{
    for (size_t i = 0; i < nb.size(); i++)
    {
        if (!isdigit(nb[i]) && nb[i] != '.')
        {
            if (nb[i] == '-')
                throw (std::invalid_argument("Error: not a positive number."));
            return 0;
        }
    }
    return 1;
}

void    Bitcoin::CheckDateAndValue()
{
        std::string date[3];
        std::string tmp = this->date;
        for(int i = 0; i < 3; i++)
        {
            if (tmp.find("-") == std::string::npos && i < 2)
                throw (std::invalid_argument("follow this format: Year-Month-Day."));
            date[i] = tmp.substr(0, tmp.find("-"));
            tmp.erase(0, tmp.find("-")+1);
        }
        if (atoi(date[0].c_str()) < 2009 || atoi(date[0].c_str()) > 2022 || !isDigit(date[0]) || date[0].size() > 4)
            throw (std::invalid_argument("Error : year out of db rang"));
        if (atoi(date[1].c_str()) < 1 || atoi(date[1].c_str()) > 12  || !isDigit(date[1]) || date[1].size() > 2)
            throw (std::invalid_argument("Error : invalid Month"));
        if (atoi(date[2].c_str()) < 1 || atoi(date[2].c_str()) > 31  || !isDigit(date[2]) || date[2].size() > 2)
            throw (std::invalid_argument("Error : invalid Day"));
        if (!isFloat(this->Svalue))
            throw (std::invalid_argument("Error: input value not number."));
        std::istringstream iss(this->Svalue);
        iss >> this->value;
        if (this->value < 0 || this->value > 1000)
            throw (std::invalid_argument("Error: too large a number."));
}