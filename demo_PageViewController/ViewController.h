//
//  ViewController.h
//  demo_PageViewController
//
//  Created by TuTu on 16/2/2.
//  Copyright © 2016年 teason. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface ViewController : UIViewController <UIPageViewControllerDataSource>

- (IBAction)startWalkthough:(id)sender;
@property (strong, nonatomic) UIPageViewController *pageViewController;
@property (strong, nonatomic) NSArray *pageTitles;
@property (strong, nonatomic) NSArray *pageImages;

@end

