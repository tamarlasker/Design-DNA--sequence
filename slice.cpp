#include "slice.h"



std::string Slice::execute(std::vector<std::string> params, Collection *collection)
{
    IAppend * append = (IAppend*)collection;
    IGet * get = (IGet*)collection;
    DnaMetaData * dmd;
    strToPrint str;
    std::string dnaSeq = "";

    if(params.size() == 4)
    {
        if(params[1].at(0) == '@')
        {
            //dmd holds a pointer to the relevant dnaMetaData
            dmd = get->getDNAByName(params[1].erase(0, 1));
        }

        else if(params[1].at(0) == '#')
        {
            dmd = get->getDNAById(stoull(params[1].erase(0, 1)));
        }

        else{
            std::string res = "Sorry, invalid arguments" ;

            return str.getString(res);
        }

        std::string seq = dmd->getSeqMember()->slice(stoull(params[2]), stoull(params[3]));

        return str.getString(seq);
    }

    else if(params.size() > 4)
    {
        if(params[1].at(0) == '#')
        {
            size_t num = stoull(params[1].erase(0, 1));
            IDnaSequence * _ = new Slice(get->getDNAById(num)->getSequenceObject(), stoull(params[2]), stoull(params[3]));
            dmd = append->appendDNA(DnaMetaData(_,  params[5].erase(0, 1)));
        }

        else if(params[5].at(0) == '@')
        {
            std::string str = params[1].erase(0, 1);
            DnaMetaData * firstP = get->getDNAByName(str);
            IDnaSequence * aa = firstP->getSequenceObject();
            IDnaSequence * _ = new Slice(aa,stoull(params[2]), stoull(params[3]));
            dmd = append->appendDNA(DnaMetaData(_, params[5].erase(0, 1)));
        }
    }

    return str.getString(dmd);
}

const std::string Slice::getSeqAsString() const
{
    std::string _ = "";
    std::string str = m_seq->getSeqAsString();

    for (size_t i = m_begin; i < m_end; i++)
    {
        _ += (str[i]);
    }

    return _;
}

//
///*slice*/
//std::string Slice::slice(std::string dnaSeq, size_t start , size_t end)
//{
//    string mySlicedString = "";
//
//    for (size_t i = start ; i < end ; i++)
//    {
//
//        mySlicedString += dnaSeq[i];
//    }
//
//    return mySlicedString;
//}


