
#ifndef DNA_ANALIZER_INEW_H
#define DNA_ANALIZER_INEW_H

#include <exception>
#include "IexecuteHandler.h"
#include "dnaMetaData.h"
#include "Iappend.h"
#include "collection.h"
#include "strToPrint.h"


class INew: public IExecuteHandler {
public:
    virtual std::string execute(std::vector<std::string> params, Collection *collection) = 0;
};
#endif //DNA_ANALIZER_INEW_H
