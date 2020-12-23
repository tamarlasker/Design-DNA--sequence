
#ifndef DNA_ANALYZER_IDECORATOR_H
#define DNA_ANALYZER_IDECORATOR_H

#include "IdnaSeq.h"

class IDecorator : public IDnaSequence{

public:
    IDecorator();
    IDecorator(IDnaSequence * IDnaSeq);
    virtual ~IDecorator(){}
    virtual const std::string getSeqAsString() const = 0;


private:
    IDnaSequence * m_IDnaSequence;
};

inline IDecorator::IDecorator() {}

inline IDecorator::IDecorator(IDnaSequence * IDnaSeq) : m_IDnaSequence(IDnaSeq){}

#endif //DNA_ANALYZER_IDECORATOR_H
