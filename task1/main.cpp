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

    checkEqual(left, right);

    return 0;
}
