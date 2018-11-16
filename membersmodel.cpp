#include <QFont>

#include "membersmodel.h"

MembersModel::MembersModel(QObject *parent)
    : QAbstractTableModel(parent)
{
    m_Titles << tr("Prénom") << tr("Nom") << tr("E-Mail");
}

void MembersModel::setMembersList(const MemberList &list)
{
    membersList = list;
}

int MembersModel::columnCount(const QModelIndex &parent) const
{
    Q_UNUSED(parent);
    return m_Titles.size();
}

int MembersModel::rowCount(const QModelIndex &parent) const
{
    Q_UNUSED(parent);
    return membersList.size();
}

QVariant MembersModel::data(const QModelIndex &index, int role) const
{
    QBrush brush;
    QVariant data;

    switch(role)
    {
    case Qt::DisplayRole:
        data = displayItem(index.row(), index.column());
        break;

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

QModelIndex MembersModel::index(int row, int column, const QModelIndex &parent) const
{
    return QModelIndex();
}

QModelIndex MembersModel::parent(const QModelIndex &index) const
{
    return QModelIndex();
}
