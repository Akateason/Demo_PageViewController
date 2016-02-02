//
//  PageContentViewController.h
//  demo_PageViewController
//
//  Created by TuTu on 16/2/2.
//  Copyright © 2016年 teason. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface PageContentViewController : UIViewController

@property (nonatomic,weak) IBOutlet UIImageView *backgroundImageView ;
@property (nonatomic,weak) IBOutlet UILabel *titleLabel ;
@property NSUInteger pageIndex;
@property NSString *titleText;
@property NSString *imageFile;

@end
