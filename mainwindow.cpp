#include <QDebug>
#include <QFileDialog>

#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    connect(ui->actionImport, SIGNAL(triggered()), SLOT(import()));
}

MainWindow::~MainWindow()
{
    delete ui;
}

//!
//! \brief MainWindow::createMember
//! \param csvLine
//! \param separator
//! \return
//!
Member MainWindow::createMember(const QString &csvLine, char separator) const
{
    QStringList items;

    items = csvLine.split(separator);
    if(!items.empty())
    {
        Member data;

        data.setName(items.at(0));
        data.setFirstname(items.at(1));
        data.setEmail(items.at(8));

        return data;
    }
    else
    {
        return Member();
    }
}

//!
//! Import members data from the specified CSV file.
//!
//! \param filename
//! \return
//!
MemberList MainWindow::importCsvFile(const QString &filename) const
{
    QFile csvFile(filename);

    if(csvFile.open(QIODevice::ReadOnly | QIODevice::Text))
    {
        QString line;

        MemberList members;

        // Read the header, data are not used currently
        line = csvFile.readLine();

        // Read member's data
        while(!csvFile.atEnd())
        {
            Member data;

            line = csvFile.readLine();
            data = createMember(line);

            members.push_back(data);
        }

        return members;
    }
    else
    {
        return MemberList();
    }
}

//!
//! \brief MainWindow::import
//!
void MainWindow::import()
{
    QString filename;

    filename = QFileDialog::getOpenFileName(this, tr("Importer un fichier de membres..."), QDir::homePath(), tr("Fichier CSV (*.csv)"));
    if(!filename.isEmpty())
    {
        // Import data from CSV file
        m_MembersList = importCsvFile(filename);

        foreach(Member item, m_MembersList)
        {
            qDebug() << " > " << item.name();
        }

        // Creating the model
        MembersModel *pModel = new MembersModel(ui->treeView);
        pModel->setMembersList(m_MembersList);

        // ui->treeView->reset();
        ui->treeView->setModel(pModel);
    }
}
