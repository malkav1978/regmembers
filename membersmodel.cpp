#include <iostream>

#include <QDebug>
#include <QFont>

#include "membersmodel.h"

//!
//! \brief MembersModel::MembersModel
//! \param parent
//!
MembersModel::MembersModel(QObject *parent)
    : QAbstractItemModel(parent)
{
    m_Titles << tr("Prénom") << tr("Nom") << tr("E-Mail");
}

//!
//! \brief MembersModel::setMembersList
//! \param list
//!
void MembersModel::setMembersList(const MemberList &list)
{
    m_MembersList = list;
}

//!
//! \brief MembersModel::columnCount
//! \param parent
//! \return
//!
int MembersModel::columnCount(const QModelIndex &parent) const
{
    Q_UNUSED(parent);
    return m_Titles.size();
}

//!
//! \brief MembersModel::rowCount
//! \param parent
//! \return
//!
int MembersModel::rowCount(const QModelIndex &parent) const
{
    Q_UNUSED(parent);
    return m_MembersList.size();
}

QVariant MembersModel::data(const QModelIndex &index, int role) const
{
    // QBrush brush;
    QVariant data;

    switch(role)
    {
    case Qt::DisplayRole:
        data = displayItem(index.row(), index.column());
        break;

        /*
    case Qt::TextAlignmentRole:
        if(index.column() > 0)
        {
            data = Qt::AlignHCenter;
        }
        break;

    case Qt::ForegroundRole:
        if(index.column() == LicenseInfoModel::Expiration)
        {
            brush.setStyle(Qt::SolidPattern);
            brush.setColor(getStatusColor(index.row()));
            data= brush;
        }
        break;
        */

    default:
        data.clear();
        break;
    }

    return data;
}

QVariant MembersModel::headerData(int section, Qt::Orientation orientation, int role) const
{
    QFont Font;
    QVariant data;

    switch(role)
    {
    case Qt::DisplayRole:
        if(orientation == Qt::Horizontal)
        {
            data = m_Titles.at(section);
        }
        break;

    case Qt::FontRole:
        Font.setBold(true);
        data = Font;
        break;

    case Qt::TextAlignmentRole:
        if(section > 0)
        {
            data = Qt::AlignHCenter;
        }
        break;

    default:
        data.clear();
        break;
    }

    return data;
}

//!
//! \brief MembersModel::index
//! \param row
//! \param column
//! \param parent
//! \return
//!
QModelIndex MembersModel::index(int row, int column, const QModelIndex &parent) const
{
    if(hasIndex(row, column, parent))
    {
        return createIndex(row, column, nullptr);
    }
    else
    {
        return QModelIndex();
    }
}

QModelIndex MembersModel::parent(const QModelIndex &index) const
{
    Q_UNUSED(index);
    return QModelIndex();
}

//!
//! \brief MembersModel::displayItem
//! \param row
//! \param column
//! \return
//!
QString MembersModel::displayItem(int row, int column) const
{
    QString strItem;

    switch(column)
    {
    case 0:
        strItem = m_MembersList.at(row).name();
        break;

    case 1:
        strItem = m_MembersList.at(row).firstname();
        break;

    case 2:
        strItem = m_MembersList.at(row).email();
        break;

    default:
        strItem.clear();
        break;
    }

    return strItem;
}
