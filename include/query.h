#ifndef QUERY_H
#define QUERY_H

#include <iostream>

enum QueryType
{
    Meta,
    Statement
};

class Query
{
public:
    virtual QueryType getType() const = 0;
    virtual std::string getUserInput() const = 0;
};

#endif
