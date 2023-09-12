#include <iostream>

struct pipe {
    double length;//km
    double diameter;//mm
    std::string km_mark;
    bool repair;
};

struct station {
    std::string title;
    int workshop;
    int active_workshop;
    double efficiency; //пока не имею широкого представления об этой переменной и её типе, но для меня эффективностью всегда считались проценты,поэтому выбранный тип double
};

int main()
{
    pipe nord_steam;
    nord_steam.length = 917;
    nord_steam.diameter = 1420;
    nord_steam.km_mark = "910-Germany";//тут тоже не совсем пока поняла, что писать, на лекции уточню
    nord_steam.repair = true;
    std::cout << "Length: " << nord_steam.length << "\tDiameter: " << nord_steam.diameter <<"\tKm_Mark:"<<nord_steam.km_mark<<"\tRepair:"<<nord_steam.repair<< std::endl;
}