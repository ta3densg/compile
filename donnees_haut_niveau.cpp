#ifndef DONNEES_HAUT_NIVEAU_CPP
#define DONNEES_HAUT_NIVEAU_CPP
#include<donnees_haut_niveau.h>

#endif // DONNEES_HAUT_NIVEAU_CPP
// classe GeoRef
GeoRef::Georef(){

}
GeoRef::Georef(float posX, float posY, float posZ, boost::multi_array rot){
    GeoRef.posX=posX;
    GeoRef.posY=posY;
    GeoRef.posZ=posZ;
    GeoRef.rot=rot;
}
float GeoRef::getPosX()
{
    return GeoRef.posX;
}
void GeoRef::setPosX(float posX)
{
    GeoRef.posX=posX;
}

float GeoRef::getPosY()
{
    return GeoRef.posY;
}
void GeoRef::setPosY(float posY)
{
    GeoRef.posY=posY;
}
float GeoRef::getPosZ()
{
    return GeoRef.posZ;
}
void GeoRef::setPosZ(float posZ)
{
    GeoRef.posZ=posZ;
}
 GeoRef::getRot()
{
    return GeoRef.rot;
}
void GeoRef::setRot(boost::multi_array nRot)
{
    GeoRef.rot=nRot;
}
GeoRef::~Georef(){

}


// class Bande fonction de manipulation

Bande::Bande()
{

}

Bande::Bande(int id, float recouvrement, vector<Photo> elts)
{
    Bande.id=id;
    Bande.recouvrement=recouvrement;
    Bande.elts= elts;
}

void Bande::setId(int id)
{
    Bande.id=id;
}
int Bande::getId()
{
    return Bande.id;
}

void Bande::setRecouvrement(float recouvrement)
{
    Bande.recouvrement=recouvrement;
}
int Bande::getRecouvrement()
{
    return Bande.recouvrement;
}

void Bande::setElts(vector<Photo> elts)
{
    Bande.elts=elts;
}
vector<Photo> Bande::getElts()
{
    return Bande.elts;
}

Bande::~Bande()
{
}


//  class NuagePoint

    NuagePoint::NuagePoint()
    {

    }
    NuagePoint::NuagePoint(int id, GeoRef georef, vector<PointPly> compose)
    {
        NuagePoint.id=id;
        NuagePoint.georef=georef;
        NuagePoint.compose=compose;
    }
    void NuagePoint::setId(int id)
    {
        NuagePoint.id=id;
    }
    int NuagePoint::getId()
    {
        return NuagePoint.id;
    }



    void NuagePoint::setGeoRef(GeoRef georef)
    {
        NuagePoint.georef=georef;
    }
    GeoRef NuagePoint::getGeoRef()
    {
        return NuagePoint.georef;
    }

    void NuagePoint::setCompose(vector<PointPly> compose)
    {
        NuagePoint.compose=compose;
    }
    vector<PointPly> NuagePoint::getCompose()
    {
        return NuagePoint.compose;
    }

    NuagePoint::~NuagePoint()
    {

    }


    // class Photo
    /*
class Photo
    string chemin_etalonnage;
    string nom;
*/
    Photo::Photo()
    {}
    Photo::Photo(string chemin_etalonnage, string nom)
    {
        Photo.chemin_etalonnage=chemin_etalonnage;
        Photo.nom=nom;
    }
    void Photo::setCheminEtalonnage(string chemin_etalonnage)
    {
        Photo.chemin_etalonnage=chemin_etalonnage;
    }
    string Photo::getCheminEtalonnage()
    {
        return Photo.chemin_etalonnage;
    }
    void Photo::setNom(string nom)
    {
        Photo.nom=nom;
    }
    string Photo::getNom()
    {
        return Photo.nom;
    }
    Photo::~Photo(){}
