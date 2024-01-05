#pragma once


#include <iostream>
#include <string>
#include <cmath>// C++ dilinde matematiksel i�lemleri ger�ekle�tirmek i�in kullan�l�r.
#include <vector>

class Nokta { // Nokta s�n�f�m�z� olu�turdum
private:
    double x; // x ve y noktas� kulland�k ve veri tipini double yapt�k.
    double y;

public:
    Nokta();
    Nokta(double value);
    Nokta(double x, double y);
    Nokta(const Nokta& otherNokta);
    Nokta(Nokta& otherNokta, double offset_x, double offset_y);

    void setX(double X);
    double getX() const;
    void setY(double Y);
    double getY()const ;// set ve getlerle private olan x ve y noktalar�n� kullan�labilir public hale getiriyoruz.
    void set(double X, double Y);
    std::string toString();// bir s�n�f�n i�inde yer alan bir metottur ve genellikle s�n�f�n i�indeki verilerin bir karakter dizisine d�n��t�r�lerek elde edilen string bir temsilini d�nd�r�r
    void yazdir();
};

class DogruParcasi { // Dogru par�as� s�n�f�m�z� olu�turduk.
private:
    Nokta nokta1;
    Nokta nokta2;

public:
    DogruParcasi(Nokta& n1, Nokta& n2);
    DogruParcasi(DogruParcasi& otherObject);
    DogruParcasi(Nokta& ortaNokta, double lenght, double slope);// orta noktam�z uzunlu�umuz ve e�imi belirttik.




    void setP1(Nokta nokta1);
    Nokta getNokta1();
    void setNokta2(Nokta nokta2);// yine private tan�mlad���m�z nokta1 ve nokta 2 yi public yapt�k.kullan�labilir hale getirdim.
    Nokta getNokta2();
    double uzunluk();
    Nokta kesisimNoktasi(Nokta nokta);
    Nokta ortaNokta();
    std::string toString();
    void yazdir();
};


class Daire {  // daire s�n�f�n� olu�turduk.
private:
    double yaricap;
    Nokta merkez;





public:
    Daire(Nokta& merkez, double yaricap);
    Daire(Daire& daire1);
    Daire(Daire& daire1, double x);
    double alan();
    double cevre();
    double kesisim(Daire daire1);
    std::string toString();
    void yazdir();
};

class Ucgen {// ��gen s�n�f�m�z� olu�turduk.
private:


    Nokta nokta3;

    Nokta nokta1;

    Nokta nokta2;

public:
    Ucgen(Nokta nokta1, Nokta nokta2, Nokta nokta3);
    void setNokta1(Nokta nokta1);
    Nokta getNokta1();
    void setNokta2(Nokta nokta2);
    Nokta getNokta2();
    void setNokta3(Nokta nokta3);
    Nokta getNokta3();
    double alan();
    double cevre();
    double* acilar(); // veri t�r� double belirtildi.
    std::string toString();
    void yazdir();

};