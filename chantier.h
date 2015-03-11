#ifndef CHANTIER_H
#define CHANTIER_H
using namespace::std;
#include<vector>
#include<geometry.h>
#include<donnees_bas_niveau.h>
#endif // CHANTIER_H
class Chantier
{
private:
    vector<Surface> surfVect;
    vector<PointTerrain> topoVect;
public:
    // fonctions de manipulations des objets
    Chantier();
    Chantier(vector<Surface> dSurfVect, vector<PointTerrain> dTopoVect);
    void Chantier::setSurfVect(vector<Surface> newSurfVect);
    void Chantier::setTopoVect(vector<PointTerrain> newTopoVect);
    vector Chantier::getSurfVect();
    vector Chantier::getTopoVect();
    Chantier::~Chantier();
    // fonction de gestion des données
    void ajout_surface();
    void import_photo();
    void import_ply();
    void import_topo();
    void compenser();
    void point_liaison();
    void recherche_photo();
};
