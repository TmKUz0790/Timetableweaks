#include <iostream>
#include <ctime>
#include <fstream>
#pragma clang diagnostic push
#pragma ide diagnostic ignored "UnreachableCode"
using namespace std ;
int main() {
    ifstream file;
    int choose;
    char *day[] = {"MOnday", "Tuesday", "Wednesday", "Thursday", "Friday"};
    time_t now = time(nullptr);
    tm c_time = *localtime(addressof(now));
    cout << "Are you wont to see todays time table or u wonna see an others days timetable \n"
         << "Press 1 to see todays timetable\n"
         << "2 for choose an other days timetable " << endl;
    cin >> choose;
    switch (choose) {
        case 1:


            // cout<<c_time.tm_wday ;
            switch (c_time.tm_wday) {
                case 4 :
                    file.open("monday.csv");
                    while (file.good()) {
                        string line;
                        getline(file, line, ',');
                        cout << line << endl;
                        break;
                    }
                    break;
                case 1 :
                    cout << day[0];

                case 2:
                    cout << day[1];
                case 3:
                    cout << day[2];
                    break;

                    break;
                    break;}
        case 2:
            string days;
            cout<<"               "<<endl ;

            cout << "Write the day which u wonna see :  " << flush;
            cin>>days ;
            transform(days.begin(), days.end(), days.begin(), ::toupper);
            if (days == "MONDAY") {
                file.open("monday.csv");
                while (file.good()) {
                    string line;
                    getline(file, line, ',');
                    cout << line << endl;
                    break ;
                }
            }
            return 0;
    }
}

#pragma clang diagnostic pop