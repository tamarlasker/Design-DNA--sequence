
#ifndef __MAPCOMMAND_H__
#define __MAPCOMMAND_H__

#include <map>
#include <vector>
#include "load.h"
#include "new.h"
#include "save.h"
#include "dup.h"
#include "slice.h"
#include "pair.h"
#include "find.h"
#include "count.h"
#include "findAll.h"

class MapCommand
{
public:
    MapCommand();
    IExecuteHandler * getCommandMap(std::string command);

private:
    std::map<std::string, IExecuteHandler *> m_commands;
};

inline MapCommand::MapCommand()
{
    m_commands.insert(std::pair<std::string ,IExecuteHandler *>("load",new Load()));
    m_commands.insert(std::pair<std::string ,IExecuteHandler *>("new",new New()));
//    m_commands.insert(std::pair<std::string ,IExecuteHandler *>("save",new Save()));
//    m_commands.insert(std::pair<std::string ,IExecuteHandler *>("dup",new Dup()));
    m_commands.insert(std::pair<std::string ,IExecuteHandler *>("slice",new Slice()));
//    m_commands.insert(std::pair<std::string ,IExecuteHandler *>("pair",new Pair()));
//    m_commands.insert(std::pair<std::string ,IExecuteHandler *>("find",new Find()));
//    m_commands.insert(std::pair<std::string ,IExecuteHandler *>("count",new Count()));
//    m_commands.insert(std::pair<std::string ,IExecuteHandler *>("findAll",new FindAll()));

}

inline IExecuteHandler * MapCommand::getCommandMap(std::string command)
{
    return m_commands[command];
}


#endif //__MAPCOMMAND_H__
