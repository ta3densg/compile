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


/*class Bande// class Bande fonction de manipulation
{
private:
    int id;
    float recouvrement;
    vector<Photo> elts;
};
*/
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
