//
//  AscoltaRadioRadicaleAppDelegate.h
//  AscoltaRadioRadicale
//
//  Created by Alessandro Vincelli on 12/9/10.
//  Copyright 2010 ICTU. All rights reserved.
//

#import <UIKit/UIKit.h>

@class AscoltaRadioRadicaleViewController;

@interface AscoltaRadioRadicaleAppDelegate : NSObject <UIApplicationDelegate> {
    UIWindow *window;
    AscoltaRadioRadicaleViewController *viewController;
}

@property (nonatomic, retain) IBOutlet UIWindow *window;
@property (nonatomic, retain) IBOutlet AscoltaRadioRadicaleViewController *viewController;

@end

