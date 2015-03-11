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
            Surface voisine;
    public:
            void voir_developpe();
            void maj_texture();

};

class Plan : public Surface
{
private:
    bool orientation;
    int  equation[4];
};


class Cylindre : public Surface
{
private:
    bool orientation;
    int  equation[1];
};

