#ifndef IUI_H
#define IUI_H

class IUI
{
public:
	virtual std::string read() = 0;
    	virtual std::vector<std::string> parse(std::string & s) = 0;
    	virtual void write(std::string action_result) = 0;
};


#endif // IUI_H







