//
// Created by pgouasmi on 4/16/24.
//

#ifndef COMMANDMANAGER_HPP
#define COMMANDMANAGER_HPP

#include <vector>
#include "ICommand.hpp"
#include <map>


class CommandManager {

private:
	static CommandManager *instance;
	std::map<std::string, ICommand *> _commandsMap;

public:
	CommandManager();
	~CommandManager();
	static CommandManager *getInstance();
	ICommand *getCommand(const std::string &key) const;
	bool doesCommandExist(const std::string &key) const;

};


#endif //INC_42_IRC_COMMANDMANAGER_HPP
