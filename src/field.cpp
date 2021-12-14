#include "../include/field.hpp"


fedb::Field::Field()
    : m_key("undefined")
    , m_val("undefined")
{ }


fedb::Field::Field(std::string& key, std::string& val)
    : m_key(key)
    , m_val(val)
{ }


fedb::Field::Field(fedb::Field& field)
{
    m_key = field.m_key;
    m_val = field.m_val;
}


fedb::Field::~Field()
{ }

            
void fedb::Field::key(std::string& key)
{
    m_key = key;
}


std::string fedb::Field::key() const
{
    return m_key;
}


void fedb::Field::val(std::string& val)
{
    m_val = val;
}


std::string fedb::Field::val() const
{
    return m_val;
}


std::string fedb::Field::str() const
{
    return "(" + m_key + " = " + m_val + ")";
}


std::string fedb::Field::json() const
{
    return "\"" + m_key + "\":\"" + m_val + "\"";
}

