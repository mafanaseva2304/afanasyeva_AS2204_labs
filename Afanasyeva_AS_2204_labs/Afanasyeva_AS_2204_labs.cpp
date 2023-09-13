#include <iostream>
#include <vector>
#include <fstream>
#include <string>
using namespace std;

struct pipe {
    double length;//km
    double diameter;//mm
    string km_mark;
    bool repair;

    void input_pipe() {
        cout << "Enter pipe length(km)";
        cin >> length;
        cout << "Enter pipe diameter";
        cin >> diameter;
        cout << "Enter pipe km mark";
        cin >> km_mark;
        repair = false;
    };

    void display_pipe() {
        cout << "Pipe length:" << length << endl;
        cout << "Pipe diameter:" << diameter << endl;
        cout << "Pipe km mark:" << km_mark << endl;
        cout << "Pipe repair status:" << repair << endl;

    };
    
    void pipe_change_repair_status() {
        repair = !repair;
    };

    void pipe_safe_file(ofstream& file) {
        file << length << endl;
        file << diameter << endl;
        file << km_mark << endl;
        file << repair << endl;
    };

    void pipe_load_from_file(ifstream& file) {
        getline(file,km_mark);
        file >> length;
        file >> diameter;
        file >> repair;
    };
};

struct station {
    string title;
    int workshop;
    int active_workshop;
    double efficiency; //пока не имею широкого представления об этой переменной и её типе, но для меня эффективностью всегда считались проценты,поэтому выбранный тип double

    void input_station() {
        cout << "Enter station title:";
        cin >> title;
        cout << "Enter quantity of workshops:";
        cin >> workshop;
        cout << "Enter quantity of active workshops:";
        cin >> active_workshop;
        cout << "Enter efficiency";
        cin >> efficiency;
        
    };
    
    void display_station() {
        cout << "Station title:" << title << endl;
        cout << "Workshops:" << workshop << endl;
        cout << "Active worksops:" << active_workshop<< endl;
        cout << "Efficiency:" << efficiency << endl;
    };

    void start_workshop() {
        if (active_workshop < workshop) {
            active_workshop++;
            cout << "You have launched workshops." << endl;
        }
        else {
            cout << "All workshops are already working." << endl;
        }
    };

    void stop_workshop() {
        if (active_workshop > 0) {
            active_workshop--;
            cout << "You have stopped workshops." << endl;
        }
        else {
            cout << "No workshops aren't working right now.";
        }
    };

    void station_safe_file(ofstream& file) {
        file << title << endl;
        file << workshop << endl;
        file << active_workshop << endl;
        file << efficiency << endl;
    };

    void station_load_from_file(ifstream& file) {
        getline(file, title);
        file >> workshop;
        file >> active_workshop;
        file >> efficiency;
    };
};

int main() {
    vector <pipe> pipes;
    vector <station> stations;
    int choice;

    while (true) {
        cout << "1) Add pipe." << endl;
        cout << "2) Add station." << endl;
        cout << "3) See all objects." << endl;
        cout << "4) Edit pipe." << endl;
        cout << "5) Edit station." << endl;
        cout << "6) Save to file." << endl;
        cout << "7) Load from file." << endl;
        cout << "0) Exit." << endl;
        cout << "Entar your choice:" << endl;
        cin >> choice;

    }
}