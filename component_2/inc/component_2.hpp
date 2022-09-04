#ifndef COMPONENT_2_HPP_
#define COMPONENT_2_HPP_

#include "component_1.hpp"

#include <string>

namespace component_2
{

class Component_2
{
public:
    bool init();

    void log();

    void log(std::string msg);

private:
    component_1::Component_1 comp_1;
};

} // namespace component_2



#endif /* COMPONENT_HPP_ */
