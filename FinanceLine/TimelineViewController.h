//
//  ViewController.h
//  FinanceLine
//
//  Created by Tristan Hume on 2013-06-18.
//  Copyright (c) 2013 Tristan Hume. All rights reserved.
//

#import <UIKit/UIKit.h>

#import "TimelineView.h"
#import "AnnuityTrackView.h"
#import "SelectionEditViewController.h"
#import "Selection.h"
#import "DataTrack.h"

@interface TimelineViewController : UIViewController <TrackSelectionDelegate, UITextFieldDelegate> {
  Selection *currentSelection;
  DataTrack *selectedTrack;
}

- (IBAction)selectionAmountChanged: (UITextField*)sender;
- (IBAction)clearSelection;

@property (nonatomic, strong) IBOutlet UITextField *yearlyCost;
@property (nonatomic, strong) IBOutlet UITextField *monthlyCost;
@property (nonatomic, strong) IBOutlet UITextField *dailyCost;

@property (nonatomic, strong) IBOutlet TimelineView *timeLine;
@property (nonatomic, strong) IBOutlet SelectionEditViewController *selectEditor;

@end
