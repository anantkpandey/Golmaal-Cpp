// golmaal_scheme.cpp - Madhav helps Gopal fool and flirt
#include <iostream>
using namespace std;

int main() {
    cout << "Golmaal Scheme - Madhav ka Plan for Gopal" << endl;

    // Scheme data (badal le, Gopal!)
    string goal = "Fool Couple & Flirt Nirali";
    int coverStrength = 70;    // Cover story strength (0-100)
    int charmLevel = 60;       // Flirting charm (0-100)
    bool coupleSuspicious = false; // Are they onto us?

    // Decision logic with if-else and logical operators
    if (coverStrength >= 60 && charmLevel >= 50 && !coupleSuspicious) {
        cout << "Plan on, Gopal! Fool the couple, flirt with " << goal << "!" << endl;
        cout << "Cover: " << coverStrength << "%, Charm: " << charmLevel << "%, Suspicion: Nahi" << endl;
    } else if (coverStrength >= 60 && charmLevel < 50) {
        cout << "Cover’s good (" << coverStrength << "%), but charm’s low (" << charmLevel << "%). Work on Nirali, bhai!" << endl;
    } else if (coverStrength < 60 && charmLevel >= 50 && !coupleSuspicious) {
        cout << "Charm’s " << charmLevel << "%, but cover’s weak (" << coverStrength << "%). Tighten the story!" << endl;
    } else if (coverStrength >= 60 && coupleSuspicious) {
        cout << "Cover’s " << coverStrength << "%, but they’re suspicious. Lay low, flirt later!" << endl;
    } else {
        cout << "Abort, bhai—Cover: " << coverStrength << "%, Charm: " << charmLevel << "%, Suspicion: Haan. Run!" << endl;
    }

    // Madhav ka tip
    if (coverStrength > 80 || charmLevel > 70) {
        cout << "Cover ya charm zabardast? Full *Golmaal* mode—nail it, Gopal!" << endl;
    }

    return 0;
}