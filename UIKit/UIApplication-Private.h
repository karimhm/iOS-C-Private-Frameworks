//
//  UIKit iOS UIApplication Private Header
//
//  Created by Karim on 1/4/16
//  Copyright (c) 2016 Karim Hamm. All rights reserved.
//

#ifndef _PRIVATEUIAPPLICATION_
#define _PRIVATEUIAPPLICATION_

#include <UIKit/UIKit.h>

#if __cplusplus
extern "C" {
#endif
	
@class UIStateRestorationRestoreStateBeginHandler;
@class UIStateRestoring;

void UIApplicationInstantiateSingleton(__unsafe_unretained Class);
	
void _UIApplicationAssertForExtensionType(NSArray *__strong);

void UIIBApplicationInitialize();

void _UIApplicationMainPreparations(int, char **, NSString *__strong, NSString *__strong);
	
void _prepareForCAFlush(UIApplication *__strong);
	
/* UIStateRestorationRestoreStateBeginHandler is unknown, this class is unavailable in UIKit */
void _restoreState(UIApplication *__strong, NSData *__strong, NSObject<UIApplicationDelegate> *__strong, NSURL *__strong, NSString *__strong, __strong UIStateRestorationRestoreStateBeginHandler);
	
void _updateWindowSizeClassOverrides(UIWindow *__strong, NSString *__strong, NSString *__strong);
	
void _UIAddViewControllerToRoots(UIViewController *);
	
void _UIAddRestorableObjectToRoots(NSObject<UIStateRestoring> *);
	
void UIStartMIGServer();

#if __cplusplus
}
#endif /* !_PRIVATEUIAPPLICATION_ */
