#ifndef DONNÉES_BAS_NIVEAU_H
#define DONNÉES_BAS_NIVEAU_H

#endif // DONNÉES_BAS_NIVEAU_H
using namespace::std;
#include<string>;
#include<geometry.h>
#include<donnees_haut_niveau.h>
// note: la donnée bas niveau est sutout employée comm entrée/ sortie de fonctions de calculs définies dans geometry et haut_niveau
// ici les fonctions ne concernent donc que la manipulation d'objet
class PointTerrain
{
private:
    string nom;
    int code_activite;
    float position[3];
    float ecarts_type[3];
public:
    PointTerrain::PointTerrain();
    PointTerrain::PointTerrain(int nom,int code_activite,float position[3], float ecarts_type[3]);
    void PointTerrain::setNom(string nom);
    string PointTerrain::getNom();
    void PointTerrain::setCodeActivite(int code_activite);
    int PointTerrain::getCodeActivite();
    void PointTerrain::setPosition(float position[3]);
    float PointTerrain::getPosition();
    void PointTerrain::setEcartType(float ecarts_type[3]);
    string PointTerrain::getEcartType();
};

class PointPhoto
{
private:
  float posX;
  float posY;
  float posZ;
  int id_surface;
public:
  PointPhoto::PointPhoto();
  PointPhoto::PointPhoto(float posX, float posY,float posZ, int id_surface);
  void PointPhoto::setPosX(float posX);
  float PointPhoto::getPosX();
  void PointPhoto::setPosY(float posY);
  float PointPhoto::getPosY();
  void PointPhoto::setPosZ(float posZ);
  float PointPhoto::getPosZ();
  void PointPhoto::setIdSurface(int id_surface);
  float PointPhoto::getIdSurface();
};

class PointPly
{
private:
  float posX;
  float posY;
  float posZ;
  int id_surface;
  int id_nuage;
public:
  PointPly::PointPly();
  PointPly::PointPly(float posX, float posY,float posZ, int id_surface,int id_nuage);
  void PointPly::setPosX(float posX);
  float PointPly::getPosX();
  void PointPly::setPosY(float posY);
  float PointPly::getPosY();
  void PointPly::setPosZ(float posZ);
  float PointPly::getPosZ();
  void PointPly::setIdSurface(int id_surface);
  float PointPly::getIdSurface();
  void PointPly::setIdNuage(int id_nuage);
  float PointPly::getIdNuage();
};
class Mesure
{
private:
    int posX;
    int posY;
    PointPhoto pointPhoto;
    Photo photo;
public:
    Mesure::Mesure();
    Mesure::Mesure(int posX, int posY, PointPhoto pointPhoto, Photo photo);
    void Mesure::setPosX(int posX);
    float Mesure::getPosX();
    void Mesure::setPosY(int posY);
    float Mesure::getPosY();
    void Mesure::setPointPhoto(PointPhoto pointPhoto);
    PointPhoto Mesure::getPointPhoto();
    void Mesure::setPhoto(Photo photo);
    Photo Mesure::getPhoto();
};
