//
//  CanvasViewController.h
//  DrawingBoard
//
//  Created by Michael MacDougall on 3/29/14.
//  Copyright (c) 2014 Eric Schlanger. All rights reserved.
//
// Michael MacDougall, Eric Schlanger, Joe Canero, Lindsey Nice

#import <UIKit/UIKit.h>
#import "OptionViewController.h"
#import "MPCHandler.h"
#import "PRYColorPicker.h"
#import "FancyPoint.h"
#import <zlib.h>
#import "UIAlertView+Blocks.h"
#import "CanvasScrollView.h"
#import "NKOColorPickerView.h"
#import "WYPopoverController.h"
#import "DMRNotificationView.h"
#import "RNGridMenu.h"

@interface CanvasViewController : UIViewController <UIScrollViewDelegate, ChangeOptionsDelegate,MCBrowserViewControllerDelegate,PRYColorPickerDelegate,WYPopoverControllerDelegate>


// UIImageView for entire image with all strokes merged
@property (nonatomic, strong) IBOutlet UIImageView *mainImageView;

// UIImageView for current stroke
@property (nonatomic, strong) IBOutlet UIImageView *currentStrokeView;

// CanvasScrollView, subclass of UIScrollView that sends touch events to the nextResponder
@property (nonatomic, strong) IBOutlet CanvasScrollView *panScrollView;

// Outlet for undo button to disable when peers are connected
@property (nonatomic, strong) IBOutlet UIBarButtonItem *undoButton;

// IBActions (Toolbar Actions)
- (IBAction)connect:(id)sender;
- (IBAction)clearCanvas:(id)sender;
- (IBAction)saveImage:(id)sender;
- (IBAction)undo:(id)sender;
- (IBAction)openOptions:(id)sender;


@end
