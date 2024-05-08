#ifndef PARSER_H
#define PARSER_H

#include <query.h>
#include <memory>
class Parser
{
private:
    Parser();

public:
    static std::shared_ptr<Query> parse(std::string &);
};

#endif
