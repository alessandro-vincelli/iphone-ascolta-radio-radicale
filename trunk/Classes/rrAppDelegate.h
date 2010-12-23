//
//  rrAppDelegate.h
//  rr
//
//  Created by Alessandro Vincelli on 12/20/10.
//  Copyright 2010 ICTU. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface rrAppDelegate : NSObject <UIApplicationDelegate, UITabBarControllerDelegate> {
    UIWindow *window;
    UITabBarController *tabBarController;
}

@property (nonatomic, retain) IBOutlet UIWindow *window;
@property (nonatomic, retain) IBOutlet UITabBarController *tabBarController;

@end
