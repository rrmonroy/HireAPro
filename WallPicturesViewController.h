//
//  WallPicturesViewController.h
//  TutorialBase
//
//  Created by Antonio MG on 6/23/12.
//  Copyright (c) 2012 AMG. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "AppDelegate.h"

@interface WallPicturesViewController : UIViewController


@property (nonatomic, strong) IBOutlet UIScrollView *wallScroll;

-(IBAction)logoutPressed:(id)sender;


    @property (strong, nonatomic) NSString *user;

@end
