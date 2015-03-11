#include<donnees_bas_niveau.h>
#include<string>
using namespace::std;

PointTerrain::PointTerrain()//constructeur par défaut
{

}

PointTerrain::PointTerrain( string nom ,int code_activite, float position[3], float ecarts_type[3])// constructeur complet
{
    PointTerrain.nom=nom;
    PointTerrain.code_activite=code_activite;
    PointTerrain.position=position;
    PointTerrain.ecarts_type=ecarts_type;
}



// assesseurs et mutateurs
void PointTerrain::setNom(string nom)
{
    PointTerrain.nom=nom;
}


string PointTerrain::getNom()
{
    return PointTerrain.nom;
}





void PointTerrain::setCodeActivite(int code_activite)
{
    PointTerrain.code_activite=code_activite;
}


int PointTerrain::getCodeActivite()
{
    return PointTerrain.code_activite;
}





void PointTerrain::setPosition(float position[3])
{
    PointTerrain.position=position;

}


float PointTerrain::getPosition()
{
    return PointTerrain.position;
}





void PointTerrain::setEcartType(float ecarts_type[3])
{
    PointTerrain.ecarts_type=ecarts_type;
}


string PointTerrain::getEcartType()
{
    return PointTerrain.ecarts_type;
}

PointTerrain::~PointTerrain()
{

}

// Point Photo >> fonctions de manipulations
PointPhoto::PointPhoto()
{

}
PointPhoto::PointPhoto(float posX, float posY,float posZ, int id_surface)
{
    PointPhoto.posX=posX;
    PointPhoto.posY=posY;
    PointPhoto.posZ=posZ;
    PointPhoto.id_surface=id_surface;
}

void PointPhoto::setPosX(float posX)
{
    PointPhoto.posX=posX;
}

float PointPhoto::getPosX()
{
    return PointPhoto.getPosX;
}
void PointPhoto::setPosY(float posY)
{
    PointPhoto.posY=posY;
}

float PointPhoto::getPosY()
{
    return PointPhoto.posY;
}
void PointPhoto::setPosZ(float posZ)
{
    PointPhoto.posZ=posZ;
}

float PointPhoto::getPosZ()
{
    return PointPhoto.posZ;
}
void PointPhoto::setIdSurface(int id_surface)
{
    PointPhoto.id_surface=id_surface;
}
int PointPhoto::getIdSurface()
{
    return PointPhoto.id_surface;
}

PointPhoto::~PointPhoto()
{

}
//classe Point PLY, assesseur, mutateurs, constructeurs et destructeurs
PointPly::PointPly()
{

}
PointPly::PointPly(float posX, float posY,float posZ, int id_surface, int id_nuage)
{
    PointPly.posX=posX;
    PointPly.posY=posY;
    PointPly.posZ=posZ;
    PointPly.id_surface=id_surface;
    PointPly.id_nuage=id_nuage;
}

void PointPly::setPosX(float posX)
{
    PointPly.posX=posX;
}

float PointPly::getPosX()
{
    return PointPly.posX;
}
void PointPly::setPosY(float posY)
{
    PointPly.posY=posY;
}

float PointPly::getPosY()
{
    return PointPly.posY;
}
void PointPly::setPosZ(float posZ)
{
    PointPly.posZ=posZ;
}

float PointPly::getPosZ()
{
    return PointPly.posZ;
}
void PointPly::setIdSurface(int id_surface)
{
    PointPly.id_surface=id_surface;
}
int PointPly::getIdSurface()
{
    return PointPly.id_surface;
}
void PointPly::setIdNuage(int id_nuage)
{
    PointPly.id_nuage=id_nuage;
}
int PointPly::getIdNuage()
{
    return PointPly.id_nuage;
}

PointPly::~PointPly()
{

}
// pour la classe mesure
Mesure::Mesure(){

}

Mesure::Mesure(int posX,int posY,PointPhoto pointPhoto,Photo photo){
    Mesure.posX=posX;
    Mesure.posY=posY;
    Mesure.pointPhoto=pointPhoto;
    Mesure.Photo=photo;
}
void Mesure::setPosX(float posX)
{
    Mesure.posX=posX;
}

float Mesure::getPosX()
{
    return Mesure.posX;
}
void Mesure::setPosY(float posY)
{
    Mesure.posY=posY;
}

float Mesure::getPosY()
{
    return Mesure.posY;
}

void Mesure::setPointPhoto(PointPhoto pointPhoto)
{
    Mesure.pointPhoto=pointPhoto;
}

PointPhoto Mesure::getPointPhoto()
{
    return Mesure.pointPhoto;
}
void Mesure::setPhoto(Photo photo)
{
    Mesure.photo=photo;
}

Photo Mesure::getPhoto()
{
    return Mesure.photo;
}
Mesure::~Mesure()
{

}
