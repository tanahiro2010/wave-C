#include <bits/stdc++.h>
#include <thread>
#include <chrono>
using namespace std;

const int ms = 20;

void sleep() {
    this_thread::sleep_for(chrono::milliseconds(ms));
}

int main(){
    int n;
    cout << "Enter the number of times you want to see the animation: ";
    cin >> n;
    cout << "Press Ctrl + C to stop the animation." << endl;

    while (true){
        cout << "#      " << endl;
        sleep();
        cout << " #     " << endl;
        sleep();
        cout << "  #    " << endl;
        sleep();
        cout << "   #   " << endl;
        sleep();
        cout << "    #  " << endl;
        sleep();
        cout << "     # " << endl;
        sleep();
        cout << "      #" << endl;
        sleep();
        cout << "     # " << endl;
        sleep();
        cout << "    #  " << endl;
        sleep();
        cout << "   #   " << endl;
        sleep();
        cout << "  #    " << endl;
        sleep();
        cout << " #     " << endl;
        sleep();
        cout << "#      " << endl;
        sleep();
    }

}