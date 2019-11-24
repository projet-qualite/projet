#ifndef JOUEUR_H
#define JOUEUR_H
#include<string>

class Joueur
{
    public:
        Joueur(string nom, int x, int y);
        virtual  void up();
        virtual void down();
        virtual void right();
        virtual void left();
        void rightup();
        void leftup();
        void rightdown();
        void leftdown;
        int posx() const;
        int posy() const;
        virtual ~Joueur();

    protected:

    private:
        string d_nom;
        int d_x;
        int d_y;
};

#endif // JOUEUR_H
