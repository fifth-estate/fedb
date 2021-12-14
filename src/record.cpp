#include "../include/record.hpp"


using namespace fedb;


Record::Record()
    : m_fields(std::vector<Field>())
{ }


Record::Record(const std::vector<Field>& fields)
    //: m_fields(fields)
{
    m_fields = std::vector<Field>();

    size_t i = 0;
    for (auto it = fields.begin(); it != fields.end(); it++, i++) {
        m_fields.push_back(m_fields[i]);
    }
}


Record::Record(const Record& record)
    //: m_fields(record.m_fields)
{ 
    //m_fields = record.m_fields;
}


Record::~Record()
{ }

