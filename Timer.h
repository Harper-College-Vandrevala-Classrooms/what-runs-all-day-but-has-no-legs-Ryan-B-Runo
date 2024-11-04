#ifndef WHAT_RUNS_ALL_DAY_BUT_HAS_NO_LEGS_RYAN_B_RUNO_TIMER_H
#define WHAT_RUNS_ALL_DAY_BUT_HAS_NO_LEGS_RYAN_B_RUNO_TIMER_H

# include <chrono>
#include <string>

using namespace std;

class Timer {
private:
    enum TimerState{stopped, running};
    TimerState state;
    chrono::time_point<chrono::system_clock> startTime;
    chrono::time_point<chrono::system_clock> endTime;
    chrono::duration<double> elapsedTime;
public:
    void start();
    void stop();
    chrono::duration<double> elapsed();

    Timer();
};

#endif //WHAT_RUNS_ALL_DAY_BUT_HAS_NO_LEGS_RYAN_B_RUNO_TIMER_H
