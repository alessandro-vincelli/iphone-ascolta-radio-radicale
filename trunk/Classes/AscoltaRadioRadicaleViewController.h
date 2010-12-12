//
//  AscoltaRadioRadicaleViewController.h
//  AscoltaRadioRadicale
//
//  Created by Alessandro Vincelli on 12/9/10.
//  Copyright 2010 ICTU. All rights reserved.
//

#import <UIKit/UIKit.h>

@class AudioStreamer;

@interface AscoltaRadioRadicaleViewController : UIViewController {

	IBOutlet UIButton *playButton;
	IBOutlet UIView *volumeSlider;
	AudioStreamer *streamer;
	NSTimer *progressUpdateTimer;
}

- (IBAction)buttonPressed:(id)sender;
- (void)updateProgress:(NSTimer *)aNotification;
- (IBAction)sliderMoved:(UISlider *)aSlider;

@end

