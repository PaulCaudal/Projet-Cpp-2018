#ifndef SVGFILE_H_INCLUDED
#define SVGFILE_H_INCLUDED
#include <vector>
#include <string>
#include <fstream>
#include <set>
#include"couleur.h"
constexpr char defcol[] = "black";

/*class optiongrad
{
public:
    int m_offset;
    int m_opacity;
    Couleur m_couleur;
public:
    optiongrad(int offset,int opacity,Couleur couleur);
};

class gradient
{
public:
    int m_x1;
    int m_y1;
    int m_x2;
    int m_y2;
    std::vector<optiongrad*> m_listegrad;
public:
    gradient(int x1, int y1, int x2, int y2, std::vector<optiongrad*> listegrad);
    gradient();
};*/



class Svgfile
{
    public:
        Svgfile(std::string _filename = "output.svg", int _width=1000, int _height=900);
        ~Svgfile();

        void addDisk(double x, double y, double r, std::string color=defcol);
        void addCircle(double x, double y, double r, double ep, std::string color=defcol);
        void addcarre(double x1, double y1, double x2, double y2, std::string color=defcol);
        //void addrectanglegradient(double x1, double y1, double x2, double y2,double x3, double y3,double x4, double y4, gradient G);
        void addTriangle(double x1, double y1, double x2, double y2,
                         double x3, double y3, std::string colorFill,
                          double thickness, std::string colorStroke);
        void addTriangle(double x1, double y1, double x2, double y2,
                         double x3, double y3, std::string colorFill=defcol);
        void addLine(double x1, double y1, double x2, double y2, std::string color=defcol);
        void addCross(double x, double y, double span, std::string color=defcol);
        void addellipse(double x, double y, double rx, double ry, std::string color);
        void addText(double x, double y, std::string text, std::string color=defcol);
        void addText(double x, double y, double val, std::string color=defcol);

        void addGrid(double span=100.0, bool numbering=true, std::string color="lightgrey");

        static std::string makeRGB(int r, int g, int b);

        /// Type non copiable
        Svgfile(const Svgfile&) = delete;
        Svgfile& operator=(const Svgfile&) = delete;

        static bool s_verbose;

    private:
        std::string m_filename;
        std::ofstream m_ostrm;
        int m_width;
        int m_height;

        // Pour éviter les ouverture multiples
        static std::set<std::string> s_openfiles;
};




#endif // SVGFILE_H_INCLUDED



