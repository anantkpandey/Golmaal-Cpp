#include <iostream>
#include <vector>
#include <string>
#include <sstream>
#include <algorithm>

using namespace std;

// Function to split a string by a delimiter
vector<string> splitString(const string& str, char delimiter) {
    vector<string> tokens;
    string token;
    istringstream tokenStream(str);
    while (getline(tokenStream, token, delimiter)) {
        tokens.push_back(token);
    }
    return tokens;
}

// Function to handle a simple misunderstanding (common in Golmaal)
void resolveMisunderstanding(const string& situation) {
    cout << "\nLooks like there's a bit of a misunderstanding in " << situation << "!\n";
    cout << "Let's try to clear things up with some classic Golmaal tactics...\n";
    cout << "(Imagine Baburao, Raju, and Shyam creating hilarious chaos to reveal the truth)\n";
    cout << "Hopefully, the confusion is now resolved with a good laugh!\n";
}

// Function to find a lost item (another common scenario)
string findLostItem(const string& itemName, const vector<string>& possibleLocations) {
    cout << "\nOh no! The '" << itemName << "' is missing!\n";
    cout << "Let's start searching in these places:\n";
    for (const string& location : possibleLocations) {
        cout << "- " << location << endl;
    }

    cout << "\n(After a comical search sequence involving mistaken identities and slapstick)\n";

    // Simulate finding the item (you can make this more interactive)
    for (const string& location : possibleLocations) {
        if (location.find("secret hiding spot") != string::npos || location.find(itemName) != string::npos) {
            cout << "\n मिल गया! (Mil gaya!) We found the '" << itemName << "' in the " << location << "!\n";
            return location;
        }
    }

    cout << "\n लग गई! (Lag gayi!) We haven't found it yet. Maybe it's somewhere completely unexpected!\n";
    return "unknown location";
}

// Function to deal with a tricky situation requiring cleverness
void handleTrickySituation(const string& problem) {
    cout << "\nThis situation - '" << problem << "' - is quite tricky!\n";
    cout << "Time for some 'jugaad' and quick thinking, Golmaal style!\n";
    cout << "(Imagine the trio hatching a convoluted but ultimately successful plan)\n";
    cout << "With a bit of wit and a lot of luck, the problem is cleverly solved!\n";
}

int main() {
    cout << "Welcome to the Golmaal Problem Solver!\n";
    cout << "Our protagonist is ready to help his folks with their troubles.\n";

    int choice;
    do {
        cout << "\nWhat kind of problem are we facing?\n";
        cout << "1. A simple misunderstanding.\n";
        cout << "2. A lost item.\n";
        cout << "3. A tricky situation.\n";
        cout << "0. Exit.\n";
        cout << "Enter your choice: ";
        cin >> choice;
        cin.ignore(); // Consume the newline character

        switch (choice) {
            case 1: {
                string situation;
                cout << "Describe the misunderstanding: ";
                getline(cin, situation);
                resolveMisunderstanding(situation);
                break;
            }
            case 2: {
                string itemName;
                cout << "What item is lost? ";
                getline(cin, itemName);
                string locationsInput;
                cout << "List some possible locations (comma-separated): ";
                getline(cin, locationsInput);
                vector<string> possibleLocations = splitString(locationsInput, ',');
                for (string& location : possibleLocations) {
                    // Trim leading/trailing whitespace
                    location.erase(0, location.find_first_not_of(" \t\n\r"));
                    location.erase(location.find_last_not_of(" \t\n\r") + 1);
                }
                findLostItem(itemName, possibleLocations);
                break;
            }
            case 3: {
                string problem;
                cout << "Describe the tricky situation: ";
                getline(cin, problem);
                handleTrickySituation(problem);
                break;
            }
            case 0: {
                cout << "धन्यवाद! (Danyavaad!) Problem solved for today!\n";
                break;
            }
            default: {
                cout << "Invalid choice. Please try again.\n";
            }
        }
    } while (choice != 0);

    return 0;
}
