#include <QStringList>

#include "member.h"

//!
//! Default constructor.
//!
Member::Member()
{
}

//!
//! Copy constructor, create a clone of another Member object.
//!
Member::Member(const Member &other)
    : m_strName(other.name())
    , m_strFirstname(other.firstname())
    , m_strEmail(other.email())
{
}

//!
//! \brief Member::name
//! \return
//!
QString Member::name() const
{
    return m_strName;
}

//!
//! \brief Member::setName
//! \param name
//!
void Member::setName(const QString &name)
{
    m_strName = name;
}

//!
//! \brief Member::firstname
//! \return
//!
QString Member::firstname() const
{
    return m_strFirstname;
}

//!
//! \brief Member::setFirstname
//! \param firstname
//!
void Member::setFirstname(const QString &firstname)
{
    m_strFirstname = firstname;
}

//!
//! \brief Member::email
//! \return
//!
QString Member::email() const
{
    return m_strEmail;
}

//!
//! \brief Member::setEmail
//! \param email
//!
void Member::setEmail(const QString &email)
{
    m_strEmail = email;
}
