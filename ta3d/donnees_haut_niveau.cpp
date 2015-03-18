#ifndef DONNEES_HAUT_NIVEAU_CPP
#define DONNEES_HAUT_NIVEAU_CPP
#include<donnees_haut_niveau.h>

#endif // DONNEES_HAUT_NIVEAU_CPP
// classe GeoRef
GeoRef::GeoRef(){

}
GeoRef::GeoRef(float posXp, float posYp, float posZp, QMatrix3x3 rotp){
    posX=posXp;
    posY=posYp;
    posZ=posZp;
    rot=rotp;
}
float GeoRef::getPosX()
{
    return posX;
}
void GeoRef::setPosX(float posXp)
{
    posX=posXp;
}

float GeoRef::getPosY()
{
    return posY;
}
void GeoRef::setPosY(float posYp)
{
    posY=posYp;
}
float GeoRef::getPosZ()
{
    return posZ;
}
void GeoRef::setPosZ(float posZp)
{
    posZ=posZp;
}
 QMatrix3x3 GeoRef::getRot()
{
    return rot;
}
void GeoRef::setRot(QMatrix3x3 nRot)
{
    rot=nRot;
}
GeoRef::~GeoRef(){

}


// class Bande fonction de manipulation

Bande::Bande()
{

}

Bande::Bande(int idp, float recouvrementp, vector<Photo> eltsp)
{
    id=idp;
    recouvrement=recouvrementp;
    elts= eltsp;
}

void Bande::setId(int idp)
{
    id=idp;
}
int Bande::getId()
{
    return id;
}

void Bande::setRecouvrement(float recouvrementp)
{
    recouvrement=recouvrementp;
}
float Bande::getRecouvrement()
{
    return recouvrement;
}

void Bande::setElts(vector<Photo> eltsp)
{
    elts=eltsp;
}
vector<Photo> Bande::getElts()
{
    return elts;
}

Bande::~Bande()
{
}


//  class NuagePoint

    NuagePoint::NuagePoint()
    {

    }
    NuagePoint::NuagePoint(int idp, GeoRef georefp, vector<PointPly> composep)
    {
        id=idp;
        georef=georefp;
        compose=composep;
    }
    void NuagePoint::setId(int idp)
    {
        id=idp;
    }
    int NuagePoint::getId()
    {
        return id;
    }



    void NuagePoint::setGeoRef(GeoRef georefp)
    {
        georef=georefp;
    }
    GeoRef NuagePoint::getGeoRef()
    {
        return georef;
    }

    void NuagePoint::setCompose(vector<PointPly> composep)
    {
        compose=composep;
    }
    vector<PointPly> NuagePoint::getCompose()
    {
        return compose;
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
    Photo::Photo(string chemin_etalonnagep, string nomp)
    {
        chemin_etalonnage=chemin_etalonnagep;
        nom=nomp;
    }
    void Photo::setCheminEtalonnage(string chemin_etalonnagep)
    {
        chemin_etalonnage=chemin_etalonnagep;
    }
    string Photo::getCheminEtalonnage()
    {
        return chemin_etalonnage;
    }
    void Photo::setNom(string nomp)
    {
        nom=nomp;
    }
    string Photo::getNom()
    {
        return nom;
    }
    Photo::~Photo(){}
