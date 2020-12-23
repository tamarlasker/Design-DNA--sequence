
#ifndef DNA_ANALYZER_IDNASEQ_H
#define DNA_ANALYZER_IDNASEQ_H

#include <string>

class IDnaSequence{
public:
    IDnaSequence();

    virtual ~IDnaSequence(){}

    virtual const std::string getSeqAsString() const = 0;
//    virtual const std::string getSeqAsString() const = 0;

};

inline IDnaSequence::IDnaSequence() {}
#endif //DNA_ANALYZER_IDNASEQ_H
