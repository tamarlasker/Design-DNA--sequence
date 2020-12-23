
#ifndef DNAANALIZER_NEW_H
#define DNAANALIZER_NEW_H

#include <exception>
#include "IexecuteHandler.h"
#include "dnaMetaData.h"
#include "Iappend.h"
#include "collection.h"
#include "strToPrint.h"
#include "Inew.h"

class New: public IExecuteHandler /*, public INew*/{
public:
    /*virtual*/ std::string execute(std::vector<std::string> params, Collection *collection);
};

#endif //DNAANALIZER_NEW_H
