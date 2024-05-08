#include <rpl_loop.h>
#include <memory>
#include <parser.h>
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
        std::shared_ptr<Query> query = Parser::parse(inputBuffer);
        std::cout << "query type:" << query->getType() << std::endl;
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
