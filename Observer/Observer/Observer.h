//
//  Observer.h
//  Observer
//
//  Created by Seonghyeon Choe on 5/28/14.
//  Copyright (c) 2014 kkabdol. All rights reserved.
//

#ifndef Observer_Observer_h
#define Observer_Observer_h

#include "Entity.h"
#include "Event.h"
#include <list>

class Subject;

class Observer
{
public:
    ~Observer();
    virtual void onNotify(const Entity& entity, Event event) = 0;
    void addSubject(Subject* subject);
private:
    std::list<Subject*> subjects_;
    
};


#endif /* defined(__Observer__Observer__) */
