#include <iostream>

namespace one{
    int x = 1;
}

namespace two{
    int x = 2;
}

typedef std::vector<std::pair<std::string, int>> pairlist_t;

int main(){

    pairlist_t pairlist;

    

    using namespace one;

    //std::cout == standard charachter ouput
    //<< == output
    //std::endl == standard end of line == '\n'
    //while the std::endl and \n reach the same goal, 
    //the first flushes the output buffer

    std::cout << "Hello World!" << std::endl;

    //Variable Types

    int i = 0;
    double floatingNumber = 0.1;
    char carattereSingolo = 'A';
    std::string world = "World";
    std::cout << world << std::endl;

    std::cout << "Hello " + world << std::endl;

    const double PI = 3.14159;

    //int x = 0;

    std::cout << two::x << std::endl;



    return 0;
}