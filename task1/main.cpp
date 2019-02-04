#include <iostream>
#include <string>
#include <exception>

void checkEqual(const std::string &left, const std::string &right)
{
    if(left != right) throw std::runtime_error(left + " != " + right);
}

int main()
{
    std::string left = "apple";
    std::string right = "plum";

    try{
        checkEqual(left, right);
    }
    catch(std::runtime_error *er){
        std::cout << er->what();
    }

    return 0;
}
