#ifndef CSVDATA_H
#define CSVDATA_H

#include <QString>
#include <QStringList>
#include <QMap>

//!
//! \brief The CsvData class
//!
class CsvData
{
public:
    CsvData();

    // Handling CSV file
    void import(const QString path, char separator = ';');

    // Accessing data
    QStringList columns() const;

private:
    //! Holds the list of the columns from the CSV file.
    QStringList m_Columns;

    //! Holds the data imported from the CSV file.
    QMap<QString,QString> m_Data;

    // Handling columns
    void setColumns(const QStringList &columns);

};

#endif // CSVDATA_H
