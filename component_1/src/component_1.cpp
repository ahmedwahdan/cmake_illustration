#include "component_1.hpp"

#include <iostream>

namespace component_1
{

void Component_1::log()
{
    std::cout << "Hello World" << std::endl;
}

void Component_1::log(std::string msg)
{
    std::cout << msg << std::endl;
}

} // component_1
