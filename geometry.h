#ifndef GEOMETRY_H
#define GEOMETRY_H
#endif // GEOMETRY_H
using namespace::std;
#include <string>

 class Surface
{
    private:
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
    int  equation[4];
public:
    Plan();
    Plan(bool orient, int eq[4]);
    ~Plan();
};


class Cylindre : public Surface
{
private:
    bool orientation;
    int  equation;
    Cylindre();
    Cylindre(orientation,equation);
    ~Cylindre();
};
