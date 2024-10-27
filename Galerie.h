#ifndef GALERIE_H
#define GALERIE_H
#include<vector>
#include<string>



class Galerie
{
    public:
        Galerie();
        ~Galerie();

       void Stocker(const std::string& image);
       void Afficher_Images()const;

    protected:

    private:
    std::vector<std::string> images

        ;
};

#endif // GALERIE_H
