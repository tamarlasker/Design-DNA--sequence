
#ifndef DNA_ANALIZER_FINDALL_H
#define DNA_ANALIZER_FINDALL_H

#include "IexecuteHandler.h"
#include "collection.h"
#include "writer.h"
#include "strToPrint.h"

class FindAll: public IExecuteHandler {
public:
    /*virtual*/ std::string execute(std::vector<std::string> params, Collection *collection);
    std::vector<size_t> findfindAllSubs(const DnaSequence & seq, const DnaSequence & subSeq);
};

#endif //DNA_ANALIZER_FINDALL_H
