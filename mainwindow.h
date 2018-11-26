#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

#include <member.h>
#include <memberlist.h>
#include <membersmodel.h>

namespace Ui
{
    class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private:
    Ui::MainWindow *ui;

    //! Holds the list of the association members.
    MemberList m_MembersList;

    Member createMember(const QString &csvLine, char separator = ';') const;

    MemberList importCsvFile(const QString &filename) const;


public slots:
    void import();

};

#endif // MAINWINDOW_H
