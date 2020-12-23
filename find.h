
#ifndef DNA_ANALYZER_FIND_H
#define DNA_ANALYZER_FIND_H

#include "IexecuteHandler.h"
#include "collection.h"
#include "writer.h"
#include "strToPrint.h"

class Find: public IExecuteHandler {
public:
    /*virtual*/ std::string execute(std::vector<std::string> params, Collection *collection);
};

#endif //DNA_ANALYZER_FIND_H
