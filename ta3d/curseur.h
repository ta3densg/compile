#ifndef MONAPPLI_H
#define MONAPPLI_H
#include <QHBoxLayout>
#include <QPushButton>
#include <QMessageBox>
#include <vector>
#include <iostream>
#include <QCoreApplication>
#include <QPushButton>
#include <QHBoxLayout>
#include <QTextStream>
#include <QCursor>
#include <QMouseEvent>
#include <QApplication>
#include <QMessageBox>
#include <QString>
#include<vector>
#include <QMatrix3x3>

using namespace std;

class MonAppli : public QWidget
{
private:
    QPushButton *monBouton;
    int posx; // coordonnées images
    int posy;
    // le compteur de click
    int c1=0;
    // on définit un plan infini en Z
    //int hp=100000;
    //vector<int> tableauX;
    //vector<int> tableauY;
    //Plan plans;


public:
    /*QWidget::QWidget(QWidget *parent= 0) : QWidget(parent);*/
    ~MonAppli();
    void boutonPressed(void);
public slots:
    void mousePressEvent(QMouseEvent * ev);
    vector<double> calculPlan(QMatrix3x3 defMat, double zm );
};

#endif // MONAPPLI_H

