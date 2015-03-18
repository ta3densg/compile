#ifndef DONNEES_HAUT_NIVEAU_H
#define DONNEES_HAUT_NIVEAU_H

#endif // DONNEES_HAUT_NIVEAU_H
using namespace::std;
#include<donnees_bas_niveau.h>
#include<vector>
#include<QMatrix3x3>
class GeoRef
{
private:
   float posX;
   float posY;
   float posZ;
   QMatrix3x3 rot;
public:
   GeoRef();
   ~GeoRef();
   GeoRef(float posXp, float posYp, float posZp, QMatrix3x3 rotp);
   float getPosX();
   void setPosX(float posX);
   float getPosY();
   void setPosY(float posY);
   float getPosZ();
   void setPosZ(float posZ);
   QMatrix3x3 getRot();
   void setRot(QMatrix3x3 nRot);
};
class Photo
{
private:
    string chemin_etalonnage;
    string nom;
public:
    Photo();
    Photo(string chemin_etalonnagep, string nomp);
    void setCheminEtalonnage(string chemin_etalonnage);
    string getCheminEtalonnage();
    void setNom(string nom);
    string getNom();
    ~Photo();
    void ajout_masque();
    void saisir_point_appui();
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
    Bande();
    Bande(int id, float recouvrement, vector<Photo> elts);
    void setId(int id);
    int getId();
    void setRecouvrement(float recouvrement);
    float getRecouvrement();
    void setElts(vector<Photo> elts);
    vector<Photo> getElts();
    ~Bande();
};


class NuagePoint
{
private:
    int id;
    GeoRef georef;
    vector<PointPly> compose;
public:
    NuagePoint();
    NuagePoint(int idp, GeoRef georefp, vector<PointPly> composep);
    void setId(int id);
    int getId();
    void setGeoRef(GeoRef georef);
    GeoRef getGeoRef();
    void setCompose(vector<PointPly> compose);
    vector<PointPly> getCompose();
    ~NuagePoint();
    void creation_manuelle();
    void segmentation_auto();
    void re_estimation();

};


