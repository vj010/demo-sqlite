#include <meta_command.h>

MetaCommand::MetaCommand(std::string &&input) : userInput(std::move(input))
{
}

MetaCommand::MetaCommand(std::string &input) : userInput(input)
{
}

QueryType MetaCommand::getType() const
{
    return type;
}

std::string MetaCommand::getUserInput() const
{
    return userInput;
}
