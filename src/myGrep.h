#include <iostream>
#include <sstream>

namespace my
{
    class grep
    {
        int argc;
        std::string* argString;
        std::string startDirectory;
        std::string resultFileName;
        std::string logFileName;

        bool processInputArguments();

    public:
        grep(int argc, char* argv[]);
        ~grep();
        bool run();
        void printArguments();
    
    };

    void logMessage(const std::string message);


//  nice templates to concatenate multiple strings using variadic template function
//  based on shaffooo's response to topic on stackoverflow
//  stackoverflow.com/questions/21806561/concatenating-strings-and-numbers-in-variadic-template-function
    template<typename T>
    inline std::string toString(const T& t)
    {
        std::stringstream stringStream;
        stringStream << t;
        return stringStream.str();
    }  
    
    template<typename T, typename ... Args>
    inline std::string toString(const T& first, Args ... args)
    {
        return my::toString(first) + my::toString(args...);
    }
}
