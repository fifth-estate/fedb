#ifndef __FEDB_FIELD_HPP_INCLUDED__
#define __FEDB_FIELD_HPP_INCLUDED__


#include <string>


namespace fedb {
    class Field {
        public:
            Field();
            Field(std::string, std::string);
            Field(Field &);
            ~Field();

            void key(std::string);
            std::string key() const;
            void val(std::string);
            std::string val() const;

            std::string str() const;
            std::string json() const;

        private:
            std::string m_key;
            std::string m_val;
    };
}


#endif // __FEDB_FIELD_HPP_INCLUDED__

