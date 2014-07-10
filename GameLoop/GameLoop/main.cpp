//
//  main.cpp
//  GameLoop
//
//  Created by Seonghyeon Choe on 7/10/14.
//  Copyright (c) 2014 shuan. All rights reserved.
//

#include <iostream>
#include <ctime>
#include <thread>
#include <chrono>

using namespace std;

const double MS_PER_FRAME = 1000.0 / 60.0;

void processInput();
void update(double elapsed);
void render();

int main(int argc, const char * argv[])
{
    time_t lastTime = time(nullptr);
    while (true) {
        time_t current = time(nullptr);
        double elapsed = difftime(current, lastTime);
        
        processInput();
        update(elapsed);
        render();
        
        lastTime = current;
    }
    
    return 0;
}


void processInput() {
}

void update(double elapsed) {
}

void render() {
}
