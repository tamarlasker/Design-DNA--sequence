
#ifndef DNAANALIZER_DNAMETADATA_H
#define DNAANALIZER_DNAMETADATA_H

#include <iostream>
//#include <bits/shared_ptr.h>
#include "seqDna.h"
#include "IdnaSeq.h"
#include <memory>


class DnaMetaData{

public:
    DnaMetaData(std::string dnaSeq, std::string name="");
    
    DnaMetaData(IDnaSequence* dnaSeq , std::string name="");

    std::string convertToString(DnaSequence::Nucleotide * seq) const;

    std::string getName();

    DnaSequence * getSeqMember();

    size_t getId();

    const DnaSequence::Nucleotide * getSequence();

//    const std::string & getSequenceAsString();

    IDnaSequence * getSequenceObject();

private:

//    std::shared_ptr<IDnaSequence> m_dnaSeq;
    IDnaSequence* m_dnaSeq;
	
    std::string m_name;

    size_t m_id;

    static size_t s_id;

    static size_t s_name;
};


#endif //DNAANALIZER_DNAMETADATA_H
