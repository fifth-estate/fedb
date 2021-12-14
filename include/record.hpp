#ifndef __FEDB_RECORD_HPP_INCLUDED__
#define __FEDB_RECORD_HPP_INCLUDED__


#include "field.hpp"
#include <vector>


namespace fedb {
    class Record {
        public:
            Record();
            Record(std::vector<Field>&);
            Record(Record&);
            ~Record();

            size_t len() const;
            Field field(size_t) const;
            void field(size_t, Field&);

            std::string operator [](size_t) const;
            std::string operator [](const std::string&) const;

        private:
            std::vector<Field> m_fields;
    };
}


#endif // __FEDB_RECORD_HPP_INCLUDED__

