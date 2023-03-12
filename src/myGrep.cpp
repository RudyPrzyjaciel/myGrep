#include "myGrep.h"

void my::grep::processInputArguments()
{
    my::logMessage("grep.processInputArguments(): Started");
    for(int i = 0; i < this->argc; i++)
    {
        my::logMessage(my::toString("Argument ", i+1, " : " , this->argString[i]));
    }
}

void my::grep::setSearchFlags()
{
    my::logMessage("setSearchFlags(): Started");
    this->argString[0] = my::extractProgramName(this->argString[0]);
    this->resultFileName = my::toString(argString[0], ".txt");
    this->logFileName = my::toString(argString[0], ".log");
    my::logMessage(my::toString("Program Name: ", this->argString[0]));
    my::logMessage(my::toString("Result File: ", this->resultFileName));
    my::logMessage(my::toString("Log File: ", this->logFileName));
}

void my::grep::searchForPattern()
{
    my::logMessage("searchForPattern(): Started");
    //Create workers and manage search of individual files
}

void my::grep::prepareOutputFiles()
{
    my::logMessage("prepareOutputFiles(): Started");
    //Collect data and create two output files
}

void my::grep::printOutputToConsole()
{
    my::logMessage("printOutputToConsole(): Started");
    //Prepare and print final message to console
}

void my::grep::createListOfFiles()
{
    my::logMessage("createListOfFiles(): Started");
    //Create list of directories and files to be investigated
}

my::grep::grep(int argc, char *argv[])
{
    this->argc = argc;
    this->argString = new std::string[this->argc];
    for (int i = 0; i < argc; i++)
    {
        this->argString[i] = argv[i];
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

void my::grep::run()
{
    my::logMessage("grep.run(): Running");
    this->processInputArguments();
    this->setSearchFlags();
    this->searchForPattern();
    this->prepareOutputFiles();
    this->printOutputToConsole();
}


void my::logMessage(const std::string message)
{
    std::cout << message << std::endl;
}

std::string my::extractProgramName(const std::string &argument)
{
    std::size_t lastSlash = argument.find_last_of("/\\");
    return argument.substr(lastSlash+1);
}
