#ifndef GEOMETRY_H
#define GEOMETRY_H
#endif // GEOMETRY_H
using namespace::std;
#include <string>

class Surface
{
    protected:
            int id;
            string nom;
    public:
            void voir_developpe();
            void maj_texture();
            Surface();
            Surface(int ID, string name);
            ~Surface();
};

class Plan : public Surface
{
private:
    bool orientation;
    double  equation[4];
public:
    Plan();
    Plan(bool orient, double eq[],int id, string name);
    ~Plan();
};


class Cylindre : public Surface
{
private:
    bool orientation;
    double  equation;
public:
    Cylindre();
    Cylindre(bool orien, double eq,int id, string name);
    ~Cylindre();
};
