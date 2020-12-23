#include "new.h"


std::string New::execute(std::vector<std::string> params, Collection * collection)
{
    IAppend * append = (IAppend*)collection;
    DnaMetaData * dmd;
    strToPrint str;

    if(params.capacity() > 2)
    {
        if(params[2].at(0) == '#' | params[2].at(0) == '@')
        {
            dmd = append->appendDNA(DnaMetaData(params[1], params[2].erase(0, 1)));
        }

        else
        {
            std::string res = "Sorry, you entered an invalid argument \n please try again";
            return str.getString(res);
        }
    }

    else
    {
        dmd = append->appendDNA(DnaMetaData(params[1]));
    }

    return str.getString(dmd);
}
