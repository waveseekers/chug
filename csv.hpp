#ifndef CHUG_CSV_HPP
#define CHUG_CSV_HPP

#include <sstream>
#include <string>
#include <vector>

namespace csv
{

/*****************************************************************************
 *
 * CSVRow represents a row of the CSV file
 *
 *****************************************************************************/
class CSVRow
{
public:
    std::string const& operator[](std::size_t index) const
    {
        return data_[index];
    }
    std::size_t size() const
    {
        return data_.size();
    }
    void readNextRow(std::istream& str)
    {
        std::string line;
        std::getline(str, line);

        std::stringstream lineStream(line);
        std::string cell;

        data_.clear();
        while(std::getline(lineStream, cell, ','))
        {
            data_.push_back(cell);
        }
    }

private:
    std::vector<std::string> data_;

};

std::istream& operator>>(std::istream& str, CSVRow& data)
{
    data.readNextRow(str);
    return str;
}

} // namespace csv

#endif //CHUG_CSV_HPP
