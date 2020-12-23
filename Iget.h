
#ifndef DNA_ANALIZER_IGET_H
#define DNA_ANALIZER_IGET_H
#include <iostream>


class IGet{
public:
    virtual DnaMetaData* getDNAByName(std::string name) = 0;
    virtual DnaMetaData* getDNAById(size_t id) = 0;
};

#endif //DNA_ANALIZER_IGET_H
