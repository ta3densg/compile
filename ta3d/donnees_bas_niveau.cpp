#include<donnees_bas_niveau.h>
#include<string>
using namespace::std;

PointTerrain::PointTerrain()//constructeur par défaut
{

}

PointTerrain::PointTerrain( string nom ,int code_activite, vector<float> position[3], vector<float> ecarts_type[3])// constructeur complet
{
    nom=nom;
    code_activite=code_activite;
    position=position;
    ecarts_type=ecarts_type;
}



// assesseurs et mutateurs
void PointTerrain::setNom(string nomp)
{
    nom=nomp;
}


string PointTerrain::getNom()
{
    return nom;
}





void PointTerrain::setCodeActivite(int code_activite)
{
    code_activite=code_activite;
}


int PointTerrain::getCodeActivite()
{
    return code_activite;
}





void PointTerrain::setPosition(vector<float> positionp)
{
    position=positionp;

}


vector<float> PointTerrain::getPosition()
{
    return position;
}





void PointTerrain::setEcartType(vector<float> ecarts_types)
{
    ecarts_type=ecarts_types;
}


vector<float> PointTerrain::getEcartType()
{
    return ecarts_type;
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
    posX=posX;
    posY=posY;
    posZ=posZ;
    id_surface=id_surface;
}

void PointPhoto::setPosX(float posX)
{
    posX=posX;
}

float PointPhoto::getPosX()
{
    return posX;
}
void PointPhoto::setPosY(float posYp)
{
    posY=posYp;
}

float PointPhoto::getPosY()
{
    return posY;
}
void PointPhoto::setPosZ(float posZp)
{
    posZ=posZp;
}

float PointPhoto::getPosZ()
{
    return posZ;
}
void PointPhoto::setIdSurface(int id_surfac)
{
    id_surface=id_surfac;
}
int PointPhoto::getIdSurface()
{
    return id_surface;
}

PointPhoto::~PointPhoto()
{

}
//classe Point PLY, assesseur, mutateurs, constructeurs et destructeurs
PointPly::PointPly()
{

}
PointPly::PointPly(float posXp, float posYp,float posZp, int id_surfacep, int id_nuagep)
{
    posX=posXp;
    posY=posYp;
    posZ=posZp;
    id_surface=id_surfacep;
    id_nuage=id_nuagep;
}

void PointPly::setPosX(float posXp)
{
    posX=posXp;
}

float PointPly::getPosX()
{
    return posX;
}
void PointPly::setPosY(float posYp)
{
    posY=posYp;
}

float PointPly::getPosY()
{
    return posY;
}
void PointPly::setPosZ(float posZp)
{
    posZ=posZp;
}

float PointPly::getPosZ()
{
    return posZ;
}
void PointPly::setIdSurface(int id_surfacep)
{
    id_surface=id_surfacep;
}
int PointPly::getIdSurface()
{
    return id_surface;
}
void PointPly::setIdNuage(int id_nuagep)
{
    id_nuage=id_nuagep;
}
int PointPly::getIdNuage()
{
    return id_nuage;
}

PointPly::~PointPly()
{

}
// pour la classe mesure
Mesure::Mesure(){

}

Mesure::Mesure(int posXp,int posYp,PointPhoto pointPhotop){
    posX=posXp;
    posY=posYp;
    pointPhoto=pointPhotop;

}
void Mesure::setPosX(float posXp)
{
    posX=posXp;
}

float Mesure::getPosX()
{
    return posX;
}
void Mesure::setPosY(float posYp)
{
    posY=posYp;
}

float Mesure::getPosY()
{
    return posY;
}

void Mesure::setPointPhoto(PointPhoto pointPhotop)
{
    pointPhoto=pointPhotop;
}

PointPhoto Mesure::getPointPhoto()
{
    return pointPhoto;
}
Mesure::~Mesure()
{

}
