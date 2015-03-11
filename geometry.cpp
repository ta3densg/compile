#include <geometry.h>
using namespace std;

Surface::Surface()
{
int id=0;
string nom="sol";
}

Surface::Surface(int ID, string name)
{
id=ID;
nom=name;
}

Surface::~Surface()
{}

void Surface::voir_developpe(){}

void Surface::maj_texture(){}

Plan::Plan(bool orient, int eq[4])
{
orientation=orient;
equation[4]=eq[4];
}

Plan::Plan()
{
orientation=0;
equation[0]=0;
equation[1]=0;
equation[2]=1;
equation[3]=0;
}

Plan::~Plan()
{}

Cylindre::Cylindre()
{

}

Cylindre::Cylindre(orientation, equation)
{

}

Cylindre::~Cylindre(){}
