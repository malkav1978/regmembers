#ifndef MEMBERFILE_H
#define MEMBERFILE_H

 #include <memberlist.h>

//!
//! \brief The memberFile class
//!
class MemberFile
{
public:
    MemberFile();

    // Handles CSV files
    MemberList loadCsv(const QString &filename);

};

#endif // MEMBERFILE_H
