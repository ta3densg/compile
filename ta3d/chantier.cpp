#include<chantier.h>


Chantier::Chantier()// constructeur par défaut
{

}
Chantier::Chantier(vector<Surface> dSurfVect, vector<PointTerrain> dTopoVect)// constructeur complet
{
    surfVect=dSurfVect;
    topoVect=dTopoVect;
}
Chantier::~Chantier(void)
{

}
void Chantier::setSurfVect(vector<Surface> newSurfVect)
{
    surfVect=newSurfVect;
}


vector<Surface> Chantier::getSurfVect()
{
  return  surfVect;
}


void Chantier::setTopoVect(vector<PointTerrain> newTopoVect)
{
    topoVect=newTopoVect;
}


vector<PointTerrain> Chantier::getTopoVect()
{
  return  topoVect;
}
