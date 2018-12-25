#ifndef MEMBER_H
#define MEMBER_H

class QDate;
class QString;

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

    QString phoneNumber() const;
    void setPhoneNumber(const QString &phoneNumber);

    QString alias() const;
    void setAlias(const QString &alias);

    QDate birthdate() const;
    void setBirthdate(const QDate &birthdate);

    QString birthplace() const;
    void setBirthplace(const QString &birthplace);

    QString address() const;
    void setAddress(const QString &address);

    QString postcode() const;
    void setPostcode(const QString &postcode);

    QString city() const;
    void setCity(const QString &city);

    QDate membershipDate() const;
    void setMembershipDate(const QDate &membershipDate);

private:
    //! Holds the member's name.
    QString m_Name;

    //! Holds the member's first name
    QString m_Firstname;

    //! Holds the member's e-mail address
    QString m_Email;

    //! Holds the member's phone number.
    QString m_PhoneNumber;

    //! Holds the member's nickname.
    QString m_Alias;

    //! Holds the member's birtdate.
    QDate m_Birthdate;

    //! Holds the member's birth place.
    QString m_Birthplace;

    //! Holds the member's address.
    QString m_Address;

    //! Holds the member's post code.
    QString m_Postcode;

    //! Holds the member's home city.
    QString m_City;

    //! Holds the member's last registration date.
    QDate m_MembershipDate;

};

#endif // MEMBER_H
