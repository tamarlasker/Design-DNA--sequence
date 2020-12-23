#include "dnaMetaData.h"
size_t DnaMetaData::s_id = 0;
size_t DnaMetaData::s_name = 0;

//DnaMetaData::DnaMetaData(std::string dnaSeq, std::string name): m_dnaSeq(std::make_shared<IDnaSequence>(new DnaSequence(dnaSeq))) ,m_name(name), m_id(s_id)

DnaMetaData::DnaMetaData(std::string dnaSeq, std::string name) : m_dnaSeq((IDnaSequence*)new DnaSequence(dnaSeq)) ,m_name(name), m_id(s_id)

{
    if(m_name == "")
    {
        m_name = "sequence" + std::to_string(s_name);
        ++s_name ;
    }
    ++s_id;
}

DnaMetaData::DnaMetaData(IDnaSequence* dnaSeq , std::string name): m_dnaSeq(dnaSeq) , m_name(name) , m_id(s_id) {

    if (m_name == "") {
        m_name = "sequence" + std::to_string(s_name);
        ++s_name;
    }
    ++s_id;
}

std::string DnaMetaData::getName()
{
    return m_name;
}

size_t DnaMetaData::getId()
{
    return m_id;
}

DnaSequence * DnaMetaData::getSeqMember()
{
    DnaSequence * res = dynamic_cast<DnaSequence * >(m_dnaSeq);

    return res;
}

const DnaSequence::Nucleotide * DnaMetaData::getSequence()
{
    DnaSequence * a = (DnaSequence *)m_dnaSeq;

    return a->getSeq();
}

//
//std::string & DnaMetaData::getSequenceAsString()
//{
//    DnaSequence * a = (DnaSequence *)m_dnaSeq;
//
//    return a->getSeqAsString();
//}

IDnaSequence * DnaMetaData::getSequenceObject()
{
    //TODO try not to create a temporary object
    return (IDnaSequence *)m_dnaSeq;
}
