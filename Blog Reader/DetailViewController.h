//
//  DetailViewController.h
//  Blog Reader
//
//  Created by kenobisan on 8/27/13.
//  Copyright (c) 2013 kenobisan. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface DetailViewController : UIViewController

@property (strong, nonatomic) id detailItem;

@property (weak, nonatomic) IBOutlet UILabel *detailDescriptionLabel;
@end
