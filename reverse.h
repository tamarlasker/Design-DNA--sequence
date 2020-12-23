
#ifndef DNA_ANALYZER_REVERSE_H
#define DNA_ANALYZER_REVERSE_H

#include "Idecorator.h"
#include "IexecuteHandler.h"
#include "Iappend.h"
#include "collection.h"
#include "writer.h"
#include "strToPrint.h"

class Reverse : public IExecuteHandler , public IDecorator{

    /*virtual*/ std::string execute(std::vector<std::string> params, Collection *collection);
};
#endif //DNA_ANALYZER_REVERSE_H
