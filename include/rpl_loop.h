#ifndef RPL_LOOP_H
#define RPL_LOOP_H

#include <iostream>

class RPLLoop
{
private:
    std::string inputBuffer;
    bool stopLoop = false;
    void readInput();
    void execute();

public:
    void beginLoop();
    void endLoop();
};

#endif
