#include <QFile>

#include "csvdata.h"

//!
//! Default constructor.
//!
CsvData::CsvData()
{
}

//!
//! \brief CsvData::import
//! \param path
//! \param separator
//!
void CsvData::import(const QString path, char separator)
{
    QFile csvFile(path);

    if(csvFile.open(QIODevice::ReadOnly | QIODevice::Text))
    {
        QString line;

        // MemberList members;

        // Read the columns header
        line = csvFile.readLine();
        setColumns(line.split(separator));

        // Read member's data
        while(!csvFile.atEnd())
        {
            // Member data;

            line = csvFile.readLine();
            // data = createMember(line);

            //  members.push_back(data);
        }

        // return members;
    }
}

//!
//! Returns the list of the columns from the CSV file.
//!
QStringList CsvData::columns() const
{
    return m_Columns;
}

//!
//! Sets the list of the columns from the CSV file.
//!
void CsvData::setColumns(const QStringList &columns)
{
    m_Columns = columns;
}
