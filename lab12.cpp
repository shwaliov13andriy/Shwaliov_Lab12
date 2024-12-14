#include <iostream>
#include <string>
using namespace std;
class Machine {
protected:
    string status;
public:
    Machine() : status("out of service") {}

    void start() {
        status = "it works?";
        cout << "Kchayyyyyyyyy!!! status: " << status << endl;
    }

    string getStatus() const {
        return status;
    }
};
class Printer : public Machine {
private:
    int inklvl;

public:
    Printer(int ink) : inklvl(ink) {}

    void printDocument(string document) {
        if (inklvl > 0) {
            cout << "Kchayyyyyy: " << document << endl;
            inklvl--;
            cout << "lvl of ink was decreased; yes,and?: " << inklvl << endl;
        } else {
            cout << "Pls refill me, darling.\n";
        }
    }

    int getinklvl() const {
        return inklvl;
    }

    void refill_ink(int amount) {
        inklvl += amount;
        cout << "Ink was refilled; yes, and?: " << inklvl << endl;
    }
};

int main() {
    Printer printer(10);
    printer.start();
    printer.printDocument("GG!");
    cout << "status: " << printer.getStatus() << endl;
    cout << "lvl of ink: " << printer.getinklvl() << endl;
    printer.refill_ink(1);

    return 0;
}
