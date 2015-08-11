//
//  Telephony Utilities iOS Private Framework
//
//  Created by Karim on 8/11/15
//  Copyright (c) 2015 Karim Hamm. All rights reserved.
//

#ifndef _TELEPHONYUTILITIES_
#define _TELEPHONYUTILITIES_


#if __cplusplus
extern "C" {
#endif
	
int TUHomeCountryCode()
	
int TUActiveCountryCode();
	
int TUNetworkCountryCode();

BOOL TUDialAssistIsEnabled();
    
#if __cplusplus
}
#endif


#endif /* !_TELEPHONYUTILITIES_ */