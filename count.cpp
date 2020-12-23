
//#include "count.h"
//#include "seqdna.h"
//size_t Count::count(const std::string & original, const std::string & sub)
//{
//    DnaSequence originalSeq(original);
//    DnaSequence subSeq(sub);
//    size_t res = originalSeq.count(subSeq);
//
//    return res;
//}
//
//
//std::string Count::execute(std::vector<std::string> params, Collection *collection)
//{
//    IGet * get = (IGet*)collection;
//    size_t res;
//
//    if(params[1].at(0) == '@')
//    {
//        if(params[2].at(0) == '@')
//        {
//            res = count(get->getDNAByName(params[1].erase(0, 1))->getSequence(), get->getDNAByName(params[2].erase(0, 1))->getSequence());
//        }
//
//        else if(params[2].at(0) == '#')
//        {
//            res = count(get->getDNAByName(params[1].erase(0, 1))->getSequence(), get->getDNAById(stoull(params[2].erase(0, 1)))->getSequence());
//        }
//        else
//        {
//            res = count(get->getDNAByName(params[1].erase(0, 1))->getSequence(), params[2]);
//
//        }
//    }
//
//    else if(params[1].at(0) == '#')
//    {
//        if(params[2].at(0) == '@')
//        {
//            res = count(get->getDNAById(stoull(params[1].erase(0, 1)))->getSequence(), get->getDNAByName(params[2].erase(0, 1))->getSequence());
//        }
//
//        else if(params[2].at(0) == '#')
//        {
//            res = count(get->getDNAById(stoull(params[1].erase(0, 1)))->getSequence(), get->getDNAById(stoull(params[2].erase(0, 1)))->getSequence());
//        }
//
//        else
//        {
//            res = count(get->getDNAById(stoull(params[1].erase(0, 1)))->getSequence(), params[2]);
//        }
//    }
//
//    else
//    {
//        res = count(params[1], params[2]);
//    }
//
//
//    strToPrint str;
//
//    return str.getString(res);
//}
