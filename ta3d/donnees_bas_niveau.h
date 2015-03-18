#ifndef DONNÉES_BAS_NIVEAU_H
#define DONNÉES_BAS_NIVEAU_H

#endif // DONNÉES_BAS_NIVEAU_H
using namespace::std;
#include<string>;
#include<vector>;
// note: la donnée bas niveau est sutout employée comm entrée/ sortie de fonctions de calculs définies dans geometry et haut_niveau
// ici les fonctions ne concernent donc que la manipulation d'objet
class PointTerrain
{
private:
    string nom;
    int code_activite;
    vector<float> position;
    vector<float> ecarts_type;
public:
    PointTerrain();
    ~PointTerrain();
    PointTerrain( string nom ,int code_activite, vector<float> position[3], vector<float> ecarts_type[3]);
    void setNom(string nom);
    string getNom();
    void setCodeActivite(int code_activite);
    int getCodeActivite();
    void setPosition(vector<float> position);
    vector<float> getPosition();
    void setEcartType(vector<float> ecarts_type);
    vector<float> getEcartType();
};

class PointPhoto
{
private:
  float posX;
  float posY;
  float posZ;
  int id_surface;
public:
  PointPhoto();
  ~PointPhoto();
  PointPhoto(float posX, float posY,float posZ, int id_surface);
  void setPosX(float posX);
  float getPosX();
  void setPosY(float posY);
  float getPosY();
  void setPosZ(float posZ);
  float getPosZ();
  void setIdSurface(int id_surface);
  int getIdSurface();
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
  PointPly();
  ~PointPly();
  PointPly(float posX, float posY,float posZ, int id_surface,int id_nuage);
  void setPosX(float posX);
  float getPosX();
  void setPosY(float posY);
  float getPosY();
  void setPosZ(float posZ);
  float getPosZ();
  void setIdSurface(int id_surface);
  int getIdSurface();
  void setIdNuage(int id_nuage);
  int getIdNuage();
};
class Mesure
{
private:
    int posX;
    int posY;
    PointPhoto pointPhoto;

public:
    Mesure();
    ~Mesure();
    Mesure(int posX, int posY, PointPhoto pointPhoto);
    void setPosX(float posX);
    float getPosX();
    void setPosY(float posY);
    float getPosY();
    void setPointPhoto(PointPhoto pointPhoto);
    PointPhoto getPointPhoto();
};
