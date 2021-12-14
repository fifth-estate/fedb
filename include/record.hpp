#ifndef __FEDB_RECORD_HPP_INCLUDED__
#define __FEDB_RECORD_HPP_INCLUDED__


#include "field.hpp"
#include <vector>


namespace fedb {
    class Record {
        public:
            Record();
            Record(const std::vector<Field>&);
            Record(const Record&);
            ~Record();

            size_t len() const;
            Field field(size_t) const;
            void field(size_t, Field&);

            void push_back(const Field&);

            std::string operator [](size_t) const;
            std::string operator [](const std::string&) const;

            std::string str() const;
            std::string json() const;

        private:
            std::vector<Field> m_fields;
    };
}


#endif // __FEDB_RECORD_HPP_INCLUDED__

