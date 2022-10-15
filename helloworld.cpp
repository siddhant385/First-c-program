#include<iostream>
#include <math.h>
#include<string>
using namespace std;
int main()
{
    string opt = "yes";
    while (opt == "yes")
    {
        string name;
        cout << "Enter your Name: ";
        cin >> name;
        //-----------------------------------------
        int age;
        cout << "Enter your age: ";
        cin >> age;
        //-----------------------------------------
        int weight;
        cout << "Enter your weignt in kg: ";
        cin >> weight;
        //----------------------------------------
        double height;
        cout << "Enter your height in cm : ";
        cin >> height;
        cout << "your name is: "<< name << endl;
        cout << "your age is: " << age << endl;
        //-----------------------------------------
        double maina,bmi;
        height = height/100;
        maina = height * height;
        // cout << maina <<"\n";
        bmi = ceil(weight/maina);
        cout << "Your bmi is:" << bmi <<"\n";
        if (bmi > 18 && bmi < 30){
            cout << "Hey You are welcome to our club";
        } else{
            cout << "You are unfit for this program\nBetter Luck next time :-(\n";
        }
        cout << "Do you want to continue: ";
        cin >> opt;
    }
    
    return 0;
}