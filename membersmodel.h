#ifndef MEMBERSMODEL_H
#define MEMBERSMODEL_H

#include <QAbstractItemModel>
#include <QStringList>

#include <member.h>
#include <memberlist.h>

//!
//! \brief The MembersModel class
//!
class MembersModel : public QAbstractItemModel
{
    Q_OBJECT
public:
    explicit MembersModel(QObject *parent = nullptr);

    //
    void setMembersList(const MemberList &list);

    // Reimplemented functions from QAbstractItemModel
    virtual int columnCount(const QModelIndex &parent = QModelIndex()) const;
    virtual int rowCount(const QModelIndex &parent = QModelIndex()) const;

    virtual QVariant data(const QModelIndex &index, int role = Qt::DisplayRole) const;
    virtual QVariant headerData(int section, Qt::Orientation orientation, int role) const;

    virtual QModelIndex index(int row, int column, const QModelIndex &parent = QModelIndex()) const;
    virtual QModelIndex parent(const QModelIndex &index) const;

signals:

public slots:

private:
    //! Holds the titles from the horizontal header.
    QStringList m_Titles;

    //! Holds the list of
    MemberList m_MembersList;

    QString displayItem(int row, int column) const;

};

#endif // MEMBERSMODEL_H
