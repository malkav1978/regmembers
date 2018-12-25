#ifndef MEMBERLIST_H
#define MEMBERLIST_H

class QList;

class Member;

//!
//! \brief The memberList class
//!
class MemberList : public QList<Member>
{
public:
    MemberList();

};

#endif // MEMBERLIST_H
