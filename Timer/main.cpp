#include <iostream>
#include <ctime>
#include <chrono>
#include <stdlib.h>
using namespace std;
//To take time details returns time in seconds
int take_details(int hrs=0 , int mins=0 , int sec=0)
{
    int total = (hrs * 3600) + (mins * 60) + sec;
    return total;
}
void timer(int total_time)
{
    chrono :: time_point < chrono::system_clock>timept;
    timept = chrono::system_clock::now();
    time_t start_time = chrono::system_clock::to_time_t(timept);
    cout << "Starting timer at " << endl;
    cout<<ctime(&start_time) << endl;
    time_t final = chrono::system_clock::to_time_t(timept + chrono::seconds(total_time));
    for (;;)
    {
        time_t now = chrono::system_clock::to_time_t(chrono::system_clock::now());
        if(now == final)
        {
            cout << "Timed out" <<endl;
            cout <<ctime(&final);
            system("python play_sound.py");
            break;
        }
    }
}
int main()
{
    cout<<"Enter time in hrs , mins , sec" << endl;
    int hours , minutes , seconds , total  = hours = minutes = seconds = total = 0;
    cout << "Hours : "; cin >> hours; cout <<'\n';
    cout << "Minutes : "; cin>>minutes; cout <<'\n';
    cout << "Seconds : "; cin>>seconds; cout <<'\n';
    total = take_details(hours, minutes , seconds);
    timer(total);
    return 0;
}