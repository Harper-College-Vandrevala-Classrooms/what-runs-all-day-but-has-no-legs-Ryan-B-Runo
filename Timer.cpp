# include <chrono>
#include <exception>

#include "Timer.h"

using namespace std;

Timer::Timer() {
    this->state = stopped;
}

void Timer::start() {
    this->startTime = chrono::system_clock::now();
    this->state = running;
}

void Timer::stop() {
    this->endTime = chrono::system_clock::now();
    this->state = stopped;
}

chrono::duration<double> Timer::elapsed() {
    if(this->state == stopped){
        this->elapsedTime = this->endTime - this->startTime;
        return this->elapsedTime;
    }else{
        throw ;
    }
}