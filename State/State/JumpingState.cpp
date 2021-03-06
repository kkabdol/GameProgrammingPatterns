//
//  JumpingState.cpp
//  State
//
//  Created by Seonghyeon Choe on 6/11/14.
//  Copyright (c) 2014 kkabdol. All rights reserved.
//

#include "JumpingState.h"
#include "DivingState.h"
#include "StandingState.h"
#include <iostream>

JumpingState JumpingState::state;

void JumpingState::onEnter(Heroine& heroine) {
    std::cout << "JumpingState onEnter()" << std::endl;
    
    heroine.jumpTime_ = 0.0f;
    heroine.setGraphics(IMAGE_JUMP);
    heroine.setYVelocity(JUMP_VELOCITY);
}
void JumpingState::onExit(Heroine& heroine) {
    std::cout << "JumpingState onExit()" << std::endl;
}

void JumpingState::handleInput(Heroine& heroine, Input input) {
    std::cout << "JumpingState::handleInput(" << input << ")" << std::endl;
    
    if (input == PRESS_DOWN) {
        heroine.changeState(&DivingState::state);
    }
}

void JumpingState::update(Heroine& heroine) {
    std::cout << "JumpingState::update()" << std::endl;
    
    heroine.jumpTime_ += 1.0f;
    if (heroine.jumpTime_ >= MAX_JUMP) {
        heroine.changeState(&StandingState::state);
    }
}
