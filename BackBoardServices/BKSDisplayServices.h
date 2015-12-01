//
//  BackBoardServices iOS PrivateFramework Header
//
//  Created by Karim on 12/1/15
//  Copyright (c) 2015 Karim Hamm. All rights reserved.
//

#ifndef BKSDisplayServices_h
#define BKSDisplayServices_h

#include <CoreFoundation/CoreFoundation.h>

Boolean BKSDisplayServicesStart();

CFPropertyListRef BKSDisplayServicesCopyVideoOutSettingForKey(CFStringRef key);

#endif /* BKSDisplayServices_h */
