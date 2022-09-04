#include "component_2.hpp"

#include <iostream>

namespace component_2
{

bool Component_2::init()
{
    std::cout << "Initialization ...." << std::endl;
    
    return true;
}

void Component_2::log()
{
    comp_1.log();
}

void Component_2::log(std::string msg)
{
    comp_1.log(msg);
}

} // namespace component_2
