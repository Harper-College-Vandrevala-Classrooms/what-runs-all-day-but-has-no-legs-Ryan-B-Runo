#include <iostream>
#include <thread>
#include "Timer.h"

using namespace std;

int main(){
    Timer t;

    t.start();

    this_thread::sleep_for(chrono::seconds(10));

    t.stop();

    cout << t.elapsed().count() << endl;
    return  0;
}