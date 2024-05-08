#ifndef META_COMMAND_H
#define META_COMMAND_H

#include <iostream>
#include <query.h>

class MetaCommand : public Query
{
private:
    std::string userInput;
    QueryType type = Meta;
    std::string getUserInput() const;

public:
    MetaCommand(std::string &);
    MetaCommand(std::string &&input);
    QueryType getType() const;
};

#endif
