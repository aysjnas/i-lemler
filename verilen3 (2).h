#pragma once


#include <iostream>
#include <string>
#include <cmath>// C++ dilinde matematiksel iþlemleri gerçekleþtirmek için kullanýlýr.
#include <vector>

class Nokta { // Nokta sýnýfýmýzý oluþturdum
private:
    double x; // x ve y noktasý kullandýk ve veri tipini double yaptýk.
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
    double getY()const ;// set ve getlerle private olan x ve y noktalarýný kullanýlabilir public hale getiriyoruz.
    void set(double X, double Y);
    std::string toString();// bir sýnýfýn içinde yer alan bir metottur ve genellikle sýnýfýn içindeki verilerin bir karakter dizisine dönüþtürülerek elde edilen string bir temsilini döndürür
    void yazdir();
};

class DogruParcasi { // Dogru parçasý sýnýfýmýzý oluþturduk.
private:
    Nokta nokta1;
    Nokta nokta2;

public:
    DogruParcasi(Nokta& n1, Nokta& n2);
    DogruParcasi(DogruParcasi& otherObject);
    DogruParcasi(Nokta& ortaNokta, double lenght, double slope);// orta noktamýz uzunluðumuz ve eðimi belirttik.




    void setP1(Nokta nokta1);
    Nokta getNokta1();
    void setNokta2(Nokta nokta2);// yine private tanýmladýðýmýz nokta1 ve nokta 2 yi public yaptýk.kullanýlabilir hale getirdim.
    Nokta getNokta2();
    double uzunluk();
    Nokta kesisimNoktasi(Nokta nokta);
    Nokta ortaNokta();
    std::string toString();
    void yazdir();
};


class Daire {  // daire sýnýfýný oluþturduk.
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

class Ucgen {// üçgen sýnýfýmýzý oluþturduk.
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
    double* acilar(); // veri türü double belirtildi.
    std::string toString();
    void yazdir();

};