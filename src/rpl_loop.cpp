#include <rpl_loop.h>

void RPLLoop::beginLoop()
{
    stopLoop = false;
    while (true)
    {
        if (stopLoop)
        {
            break;
        }

        std::cout << "db>";
        readInput();
    }
}

void RPLLoop::endLoop()
{
    stopLoop = true;
    std::cout << "exiting db shell" << std::endl;
}

void RPLLoop::readInput()
{
    std::getline(std::cin, inputBuffer, '\n');
}

void RPLLoop::execute()
{
    std::cout << "executing" << std::endl;
}
