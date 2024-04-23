#include <iostream>
#include <chrono>
#include <ctime>
#include<windows.h>
using namespace std;

void displaytime(){

    //Get the current system time
    auto currentTime = chrono::system_clock::now();

    //Convert the system time to a time point
    time_t time = chrono::system_clock::to_time_t(currentTime);

    //Convert the time point to a string
    string timeString = ctime(&time);

    //Print the current system time
    cout<<timeString;
}


int main() {
    cout<<"\033[1;36m]"; //Set text color to bright cyan
    for(;;){             // set  infinite loop
        displaytime();
        Sleep(1000);
        system("cls");
    }

    return 0;
}
