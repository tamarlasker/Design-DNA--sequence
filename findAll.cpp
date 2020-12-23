
//#include "findAll.h"
//#include "seqdna.h"
//
//
//std::vector<size_t> findAllSubs(const DnaSequence & originSeq, const DnaSequence & sub)
//{
//    DnaSequence originalSeq(originSeq);
//    DnaSequence subSeq(sub);
//    std::vector<size_t> allSubSeq = originSeq.findallsubSeq(sub);
//    return allSubSeq;
//}
//
//std::string FindAll::execute(std::vector<std::string> params, Collection *collection)
//{
//    IGet * get = (IGet*)collection;
//    std::vector<size_t> res;
//
//    if(params[1].at(0) == '@')
//    {
//        if(params[2].at(0) == '@')
//        {
//            res = findAllSubs(get->getDNAByName(params[1].erase(0, 1))->getSequence(), get->getDNAByName(params[2].erase(0, 1))->getSequence());
//        }
//
//        else if(params[2].at(0) == '#')
//        {
//            res = findAllSubs(get->getDNAByName(params[1].erase(0, 1))->getSequence(),
//                                get->getDNAById(stoull(params[2].erase(0, 1)))->getSequence());
//        }
//        else
//        {
//            res = findAllSubs(get->getDNAByName(params[1].erase(0, 1))->getSequence(), params[2]);
//
//        }
//    }
//
//    else if(params[1].at(0) == '#')
//    {
//        if(params[2].at(0) == '@')
//        {
//            res = findAllSubs(get->getDNAById(stoull(params[1].erase(0, 1)))->getSequence(),
//                                get->getDNAByName(params[2].erase(0, 1))->getSequence());
//        }
//
//        else if(params[2].at(0) == '#')
//        {
//            res = findAllSubs(get->getDNAById(stoull(params[1].erase(0, 1)))->getSequence(),
//                                get->getDNAById(stoull(params[2].erase(0, 1)))->getSequence());
//        }
//
//        else
//        {
//            res = findAllSubs(get->getDNAById(stoull(params[1].erase(0, 1)))->getSequence(), params[2]);
//        }
//    }
//
//    else
//    {
//        res = findAllSubs(params[1], params[2]);
//    }
//
//
//    strToPrint str;
//
//    return str.getString(res);
//}
//
