#include "curseur.h"
//#include "plan.h"

using namespace std;
// retourne un vecteur de deux coordonnées (X,Y)
void MonAppli::mousePressEvent(QMouseEvent * ev)
{
    posx = ev->x();// récupération des coordonnées
    posy = ev->y();
}




void MonAppli::boutonPressed(void)
{
    // récupère la position de la souris
    QPoint cursorPos = QCursor::pos();

    // créé un évènement, et envoie le à ton appli
    this->mousePressEvent(new QMouseEvent(QEvent::MouseButtonPress,
              cursorPos,
              Qt::LeftButton,
              Qt::LeftButton,
              Qt::NoModifier));
}

MonAppli::~MonAppli()
{}

/*QWidget::QWidget(QWidget *parent= 0) : QWidget(parent)
{
    monBouton = new QPushButton(tr("Quitter"));
    QHBoxLayout *layout = new QHBoxLayout;
    layout->addWidget(monBouton);
    setLayout(layout);

    connect( monBouton, SIGNAL(clicked()), this, SLOT(close()));

    // connecte le signal pressed du bouton à une method de l'appli
    this->connect(monBouton, SIGNAL(pressed()), SLOT(boutonPressed()));

}*/




vector<double> MonAppli::calculPlan(QMatrix3x3 defMat, double zm)
{/*matrice def[x1,x2,x3]
              [y1,y2,y3]
              [z1,z2,z3]*/
    double x1=defMat(0,1);
    /*double x2=defMat[0][1];
    double x3=defMat[0][2];
    double y1=defMat[1][0];
    double y2=defMat[1][1];
    double y3=defMat[1][2];
    double z1=defMat[2][0];
    double z2=defMat[2][1];
    double z3=defMat[2][2];
    double ABx=x2-x1;//ABx
    double ABy=y2-y1;//ABy
    double ABz=z2-z1;
    double ACx = x3-x1;
    double ACy = y3-y1;
    double ACz = z3-z1;
    vector<double> n(4);
    // on calcule un produit vectoriel, équation ax+by+cz=d
     n[0] = ABy*ABz-ABz*ACy; //a
     n[1] = ABz*ACx-ABx*ACz;//b
     n[2] = ABx*ACy-ABy*ACx;//c
     n[3] = x1*n[0]+y1*n[1]+n[2]*zm;//d
    return n;*/
}

