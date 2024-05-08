#include <parser.h>
#include <meta_command.h>
#include <utility>
Parser::Parser()
{
}

std::shared_ptr<Query> Parser::parse(std::string &userInput)
{
    if (userInput.substr(0, 1) == ".")
    {
        std::shared_ptr<MetaCommand> metaQuery = std::make_shared<MetaCommand>(std::move(userInput));
        return metaQuery;
    }

    return nullptr;
}
