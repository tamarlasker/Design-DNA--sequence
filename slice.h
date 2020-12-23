
#ifndef DNA_ANALIZER_SLICE_H
#define DNA_ANALIZER_SLICE_H

#include "Idecorator.h"
#include "IexecuteHandler.h"
#include "Iappend.h"
#include "collection.h"
#include "writer.h"
#include "strToPrint.h"

class Slice: public IExecuteHandler, public IDecorator{
public:
    Slice();

    Slice(IDnaSequence * dnaSeq, size_t start , size_t end);

    /*virtual*/ std::string execute(std::vector<std::string> params, Collection *collection);

    const std::string getSeqAsString() const;

private:
    IDnaSequence* m_seq;

    size_t m_begin;

    size_t m_end;
};

inline Slice::Slice(){}

inline Slice::Slice(IDnaSequence * dnaSeq, size_t start , size_t end) : m_seq(dnaSeq), m_begin(start), m_end(end){}

#endif //DNA_ANALIZER_SLICE_H
