//
//  BackBoardServices iOS PrivateFramework Header
//
//  Created by Karim on 12/01/15
//  Copyright (c) 2015 Karim Hamm. All rights reserved.
//

#ifndef BKSHIDEvent_h
#define BKSHIDEvent_h

#import <CoreGraphics/CoreGraphics.h>
#include <IOKit/hid/IOHIDEvent.h>
#include <unistd.h>

CGPoint BKSHIDEventGetPointFromDigitizerEvent(IOHIDEventRef);

pid_t BKSHIDEventGetClientPid();

#endif /* BKSHIDEvent_h */
