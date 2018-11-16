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

    MemberList membersList;
    MembersModel model;

    Member createMember(const QString &csvLine, char separator = ';') const;

    MemberList importCsvFile(const QString &filename) const;


public slots:
    void import();

};

#endif // MAINWINDOW_H
