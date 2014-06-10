//
//  DetailViewController.h
//  Swarmify
//
//  Created by RomeoFlauta on 6/10/14.
//  Copyright (c) 2014 CodeMagnus. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface DetailViewController : UIViewController

@property (strong, nonatomic) id detailItem;

@property (weak, nonatomic) IBOutlet UILabel *detailDescriptionLabel;
@end
