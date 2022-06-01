#include <iostream>
#include <string.h>

void    byPtr(std::string* str)
{
    *str += " and ponies";
}

void    byConstPtr(std::string const * str)
{
    std::cout << *str << std::endl;
}

void    byRef(std::string& str)
{
    str += " and ponies";
}

void byConstRef(std::string const & str)
{
    std::cout << str << std::endl;
}

int main()
{
    std::string str ="i like butterflies";

    std:: cout << str << std::endl;
    byConstPtr(&str);
    byPtr(&str); 
    byConstPtr(&str);
    
    str = "i like otters";

    std::cout << str << std::endl;
    byRef(str);
    byConstRef(str);

    return (0);    
}