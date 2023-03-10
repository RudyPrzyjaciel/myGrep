#include "myGrep.h"

bool my::grep::processInputArguments()
{
    bool success = true;
    my::logMessage("grep.processInputArguments(): Started");
    for(int i = 0; i < this->argc; i++)
    {
        my::logMessage(my::toString("Argument ", i+1, " : " , this->argString[i]));
    }
    my::logMessage(my::toString("grep.processInputArguments(): Finalised with status: ", success ? "success" : "failure"));
    return success;
}

my::grep::grep(int argc, char *argv[])
{
    this->argc = argc-1;
    this->argString = new std::string[this->argc];
    for (int i = 1; i < argc; i++)
    {
        this->argString[i-1] = argv[i];
    }
}

my::grep::~grep()
{
    delete[] argString;
}

void my::grep::printArguments()
{
    for(int i = 0; i < this->argc; i++)
    {
        my::logMessage(this->argString[i]);
    }
}

bool my::grep::run()
{
    bool success = true;
    my::logMessage("grep.run(): Running");
    success = this->processInputArguments();
    my::logMessage(my::toString("grep.run(): Finalised with status: ", success ? "success" : "failure"));
    return success;
}

void my::logMessage(const std::string message)
{
    std::cout << message << std::endl;
}
