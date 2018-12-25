#include <QDate>
#include <QString>

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
    : m_Name(other.name())
    , m_Firstname(other.firstname())
    , m_Email(other.email())
    , m_PhoneNumber(other.phoneNumber())
    , m_Alias(other.alias())
    , m_Birthdate(other.birthdate())
    , m_Birthplace(other.birthplace())
    , m_Address(other.address())
    , m_Postcode(other.postcode())
    , m_City(other.city())
    , m_MembershipDate(other.membershipDate())
{
}

QString Member::name() const
{
    return m_Name;
}

void Member::setName(const QString &name)
{
    m_Name = name;
}

QString Member::firstname() const
{
    return m_Firstname;
}

void Member::setFirstname(const QString &firstname)
{
    m_Firstname = firstname;
}

QString Member::email() const
{
    return m_Email;
}

void Member::setEmail(const QString &email)
{
    m_Email = email;
}

QString Member::phoneNumber() const
{
    return m_PhoneNumber;
}

void Member::setPhoneNumber(const QString &phoneNumber)
{
    m_PhoneNumber = phoneNumber;
}

QString Member::alias() const
{
    return m_Alias;
}

void Member::setAlias(const QString &alias)
{
    m_Alias = alias;
}

QDate Member::birthdate() const
{
    return m_Birthdate;
}

void Member::setBirthdate(const QDate &birthdate)
{
    m_Birthdate = birthdate;
}

QString Member::birthplace() const
{
    return m_Birthplace;
}

void Member::setBirthplace(const QString &birthplace)
{
    m_Birthplace = birthplace;
}

QString Member::address() const
{
    return m_Address;
}

void Member::setAddress(const QString &address)
{
    m_Address = address;
}

QString Member::postcode() const
{
    return m_Postcode;
}

void Member::setPostcode(const QString &postcode)
{
    m_Postcode = postcode;
}

QString Member::city() const
{
    return m_City;
}

void Member::setCity(const QString &city)
{
    m_City = city;
}

QDate Member::membershipDate() const
{
    return m_MembershipDate;
}

void Member::setMembershipDate(const QDate &membershipDate)
{
    m_MembershipDate = membershipDate;
}
