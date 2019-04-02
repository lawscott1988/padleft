
#include <padleft.hpp>

namespace pl {


std::string pad_left(const std::string& str, int num_spaces)
{
    if(num_spaces >= 0)
        return std::string(num_spaces, ' ') + str;
    return str;
}

}
