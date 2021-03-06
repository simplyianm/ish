#pragma once

#include <string>
#include <vector>

class Program {

  public:
    Program(std::string str);
    Program(std::vector<std::string> tokens);
    std::string getExecutable();
    std::vector<std::string> getArguments();
    std::vector<std::string> getArgumentsWithoutOptions();
    std::vector<std::string> getOptions();
    char** argv();
    std::string toString();
    void describe();

  private:
    std::string executable;
    std::vector<std::string> arguments;
    std::vector<std::string> argsWithPrefix(std::string prefix, bool negate);

};
