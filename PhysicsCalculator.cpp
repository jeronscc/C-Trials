#include<iostream>
using namespace std;


void Speed ();
void Density ();
void Weight ();
void Mass ();
void Power ();

int main() {

    bool Exit = false;
    int choice;

    while (!Exit) {
    cout<< "===Welcome to Physics Calculator!==="<<endl;
    cout<< "Select preferred formula to use.\n";
    cout<< "1. Speed\n2. Density\n3. Weight\n4. Mass\n5. Power\n6. Exit";
    cout<< "\nEnter the number of choice:";
    cin>> choice;

    switch (choice) {
        case 1: Speed();
            break;
        case 2: Density ();
            break;
        case 3: Weight ();
            break;
        case 4: Mass ();
            break;
        case 5: Power ();
            break;
        case 6: Exit = true;
            break;
        default:
            cout<< "Invalid number.";
            break;
        }
    }
    return 0; 
}

void Speed () {

    bool Exit = false;
    string option;
    float val1, val2, total;

    while (!Exit){

        cout<< "Enter the value of distance (in meters): ";
        cin>>val1;
        cout<< "Enter the value of time (in seconds): ";
        cin>>val2;
        total = val1/val2;
        cout<< "The value of speed is: " << total << " m/s" <<endl;
        cout<< "Type \"Exit\" to go back to Main Menu."<<endl;
        cin>>option; 
        break;

        if (option == "Exit"){
            Exit = true;
        }
        
    }      
    return;
}

void Density () {

    bool Exit = false;
    string option;
    float val1, val2, total;

    while (!Exit){

        cout<< "Enter the value of mass (in kilograms): ";
        cin>>val1;
        cout<< "Enter the value of volume (in cubic meter): ";
        cin>>val2;
        total = val1/val2;
        cout<< "The value of density is: " << total << " kg/m^3" <<endl;
        cout<< "Type \"Exit\" to go back to Main Menu."<<endl;
        cin>>option; 
        break;

        if (option == "Exit"){
            Exit = true;
        }
        
    }
    return;
}

void Weight () {

    bool Exit = false;
    string option;
    float gravity = 9.8;
    float val1, val2, total;

    while (!Exit){

        cout<< "Enter the value of mass (in kilograms): ";
        cin>>val1;
        total = val1*gravity;
        cout<< "The value of weight is: " << total << " N" <<endl;
        cout<< "Type \"Exit\" to go back to Main Menu."<<endl;
        cin>>option; 
        break;

        if (option == "Exit"){
            Exit = true;
        }
        
    }
    return;
}

void Mass () {

    bool Exit = false;
    string option;
    float val1, val2, total;

    while (!Exit){

        cout<< "Enter the value of density (in kilogram per cubic meter): ";
        cin>>val1;
        cout<< "Enter the value of volume (in cubic meter): ";
        cin>>val2;
        total = val1*val2;
        cout<< "The value of mass is: " << total << " kg" <<endl;
        cout<< "Type \"Exit\" to go back to Main Menu."<<endl;
        cin>>option; 
        break;

        if (option == "Exit"){
            Exit = true;
        }
        
    }
    return;
}

void Power () {

    bool Exit = false;
    string option;
    float val1, val2, total;

    while (!Exit){

        cout<< "Enter the value of work (in Joules): ";
        cin>>val1;
        cout<< "Enter the value of time (in seconds): ";
        cin>>val2;
        total = val1/val2;
        cout<< "The value of power is: " << total  << " W" <<endl;
        cout<< "Type \"Exit\" to go back to Main Menu."<<endl;
        cin>>option; 
        break;

        if (option == "Exit"){
            Exit = true;
        }
        
    }
    return;
}