#include <iostream>
#include <iomanip>

using namespace std;

//Funktio summan laskemiseen ja tulostamiseen
void calcSum(int a, int b) {
    cout << "Summa: " << a + b << endl;
}

//Funktio osamäärän laskemiseen ja tulostamiseen
void calcDiv(int a, int b) {
    if (b == 0) {
        cout << "Virhe: Jakaja on nolla!" << endl;
    } else {
        cout << "Osamäärä: " << fixed << setprecision(2) << (float)a / b << endl;
    }
}

//Funktio summan laskemiseen ja palauttamiseen
int retSum(int a, int b) {
    return a + b;
}

//Funktio osamäärän laskemiseen ja palauttamiseen
float retDiv(int a, int b) {
    if (b == 0) {
        cout << "Virhe: Jakaja on nolla!" << endl;
        return 0;  // Palautetaan nolla, jos jakaja on nolla
    } else {
        return (float)a / b;
    }
}

int main() {
    int a, b;

    // Kysytään käyttäjältä kaksi kokonaislukua
    cout << "Syötä ensimmäinen kokonaisluku (a): ";
    cin >> a;
    cout << "Syötä toinen kokonaisluku (b): ";
    cin >> b;

    //Kutsutaan calcSum ja calcDiv funktiot
    calcSum(a, b);
    calcDiv(a, b);

    //Kutsutaan retSum ja retDiv funktiot ja tulostetaan tulokset
    cout << "RetSum: " << retSum(a, b) << endl;
    float divisionResult = retDiv(a, b);
    if (divisionResult != 0) {
        cout << "RetDiv: " << fixed << setprecision(2) << divisionResult << endl;
    }

    return 0;
}
