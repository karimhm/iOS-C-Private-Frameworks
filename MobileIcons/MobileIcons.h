//
//  MobileIcons iOS PrivateFramework Header
//
//  Created by Karim on 6/29/15
//  Copyright (c) 2015 Karim Hamm. All rights reserved.
//

#ifndef _MOBILEICONS_
#define _MOBILEICONS_

#include <CoreFoundation/CoreFoundation.h>
#include <CoreGraphics/CoreGraphics.h>

#if __cplusplus
extern "C" {
#endif
	
enum {
	LIIconPrecomposed     		= 0,
	LIIconNotPrecomposed   	 	= 1
};

	
CFArrayRef LICopyIconPathsFromBundle(CFBundleRef bundle);
	
	/*
	 Variants:
	 0	57×57		The large icon in home screen (iPhone)
	 1	72×72		The large icon in home screen (iPad)
	 2	29×29		DefaultSmallAppIcon.png
	 3	50×50		DefaultSmallAppIcon-72.png
	 4	29×29		DefaultSmallAppIcon.png
	 15	114×114		The large icon in home screen (iPhone 2x)
	 16	58×58		DefaultSmallAppIcon@2x.png
	 17	58×58		DefaultSmallAppIcon@2x.png
	 24	57×57	The large icon in home screen in grayscale (iPhone)
	 25	114×114	The large icon in home screen in grayscale (iPhone 2x)
	 26	72×72	The large icon in home screen in grayscale (iPad)
	 
	 create the default icon "looks like the icon for applications that doesnt have an icon"
	 */
CGImageRef LICreateDefaultIcon(int variant);
	
	/* Create the icon for a bundle "Application" */
CGImageRef LICreateIconForBundle(CFBundleRef bundle);

	/* Create an icon from the specified image */
CGImageRef LICreateIconForImage(CGImageRef image, int variant, int precomposed);
	
CGImageRef LICreateIconForBundleURLWithFiles(CFURLRef bundleURL, CFStringRef bundleIdentifier);
	
	/* Create icon with same size as the icon on the home screen */
CGImageRef LICreateDeviceAppropriateHomeScreenIconImageFromBundle(CFBundleRef bundle);

CFDataRef LICreateCachedUncompressedDataFromImage(CGImageRef image);

	/*
	 LIIconStyleDomain:
	 	LSApplicationStyleDomain
	 	LSDocumentStyleDomain
	 
	 LIIconType:
	 	UIHomeScreenIcon
	 	UIHomeScreenGhostlyIcon
	 	UISpotLightIcon
	 	UITableUIGameListIcon
	 */
CFStringRef LIGetStyleFallbackContainer(CFStringRef LIIconStyleDomain,CFStringRef LIIconType);

#if __cplusplus
}
#endif /* !_MOBILEICONS_ */
