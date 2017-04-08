#include "mainwindow.h"
#include <QMessageBox>
#include <QPixmap>

///////////////////////ABOUT///////////////////////

void MainWindow::on_actionAbout_triggered()
{
    QMessageBox about;

    about.setTextFormat(Qt::RichText);   //this is what makes the links clickable
    about.setText("<p align='left'>ubunsys</p></br>"
                  "<p align='left'>Configurable app referent to packages, updates and configurations</p></br>"
                  "<p align='left'>Credits to <a href='https://thenounproject.com/bernar.novalyi/'>Bernar Novalyi</a> from Noun Project "
                  "that creates the app <a href='https://thenounproject.com/term/terminal/715962/'>icon</a> used here. Beautiful!</p></br>"
                  "<p align='left'><a href='https://launchpad.net/~adgellida/+archive/ubuntu/ubunsys'>Launchpad PPA</a></p></br>"
                  "<p align='left'><a href='https://github.com/adgellida/ubunsys'>Git Repo</a></p></br>");

    about.setInformativeText("Copyright 2017\n\n\GPL v2\n\nAntonio David Gellida Lavara\n\nadgellida@gmail.com"
                             "\n\nv2017.04.08");

    about.setWindowTitle("About");

    about.setStandardButtons(QMessageBox::Ok);
    about.setIconPixmap(QPixmap(":/images/ubunsys.ico"));
    about.setWindowIcon(QIcon(":/images/ubunsys.ico"));
    //about.setIcon(":/images/ubunsys.ico");
    about.setDefaultButton(QMessageBox::Ok);

    about.show();
    about.exec();
}