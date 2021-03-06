#ifndef DONNEES_HAUT_NIVEAU_H
#define DONNEES_HAUT_NIVEAU_H

#endif // DONNEES_HAUT_NIVEAU_H
using namespace::std;
#include<donnees_bas_niveau.h>
#include<vector>
#include<boost/multi_array.hpp>
class GeoRef
{
private:
   float posX;
   float posY;
   float posZ;
   boost::multi_array rot;
public:
   GeoRef::Georef();
   GeoRef::Georef(float posX, float posY, float posZ, boost::multi_array rot);
   float GeoRef::getPosX();
   void GeoRef::setPosX(float posX);
   float GeoRef::getPosY();
   void GeoRef::setPosY(float posY);
   float GeoRef::getPosZ();
   void GeoRef::setPosZ(float posZ);
   boost::multi_array GeoRef::getRot();
   void GeoRef::setRot(boost::multi_array nRot);
};

class Masque
{
// pour une version ultérieure
};

class Bande
{
private:
    int id;
    float recouvrement;
    vector<Photo> elts;
public:
    Bande::Bande();
    Bande::Bande(int id, float recouvrement, vector<Photo> elts);
    void Bande::setId(int id);
    int Bande::getId();
    void Bande::setRecouvrement(float recouvrement);
    float Bande::getRecouvrement();
    void Bande::setElts(vector<Photo> elts);
    vector<Photo> Bande::getElts();
    Bande::~Bande();
};


class NuagePoint
{
private:
    int id;
    GeoRef georef;
    vector<PointPly> compose;
public:
    NuagePoint::NuagePoint();
    NuagePoint::NuagePoint(int id, GeoRef georef, vector<PointPly> compose);
    void NuagePoint::setId(int id);
    int NuagePoint::getId();
    void NuagePoint::setGeoRef(GeoRef georef);
    GeoRef NuagePoint::getGeoRef();
    void NuagePoint::setCompose(vector<PointPly> compose);
    vector<PointPly> NuagePoint::getCompose();
    NuagePoint::~NuagePoint();
    void creation_manuelle();
    void segmentation_auto();
    void re_estimation();

};

class Photo
{
private:
    string chemin_etalonnage;
    string nom;
public:
    Photo::Photo();
    Photo::Photo(string chemin_etalonnage, string nom);
    void Photo::setCheminEtalonnage(string chemin_etalonnage);
    string Photo::getCheminEtalonnage();
    void Photo::setNom(string nom);
    string Photo::getNom();
    Photo::~Photo();
    void ajout_masque();
    void saisir_point_appui();
};


