//
//  Preferences iOS PrivateFramework Header
//
//  Created by Karim on 8/11/15
//  Copyright (c) 2015 Karim Hamm. All rights reserved.
//

#ifndef _PREFERENCES_
#define _PREFERENCES_

#include <CoreFoundation/CoreFoundation.h>

#if __cplusplus
extern "C" {
#endif
	
    /* Dettect if there is no SIM inserted in the device */
BOOL PSSimIsMissing();
    
BOOL PSIsiPhone();
    
BOOL PSIsiPad();
    
UIImage *PSBlankIconImage();
    
#if __cplusplus
}
#endif /* !_PREFERENCES_ */
