#ifndef MEMBER_H
#define MEMBER_H

#include <QString>

//!
//! \brief The Member class stores the information related to a single member.
//!
class Member
{
public:
    // Construction
    Member();
    Member(const Member &other);

    // Accessors
    QString name() const;
    void setName(const QString &name);

    QString firstname() const;
    void setFirstname(const QString &firstname);

    QString email() const;
    void setEmail(const QString &email);

private:
    //! Holds the member's name.
    QString m_strName;

    //! Holds the member's first name
    QString m_strFirstname;

    //! Holds the member's e-mail address
    QString m_strEmail;

};

#endif // MEMBER_H
