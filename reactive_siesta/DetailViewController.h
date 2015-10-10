//
//  DetailViewController.h
//  reactive_siesta
//
//  Created by Andrew and Rebecca Rahn on 10/10/15.
//  Copyright © 2015 Andrew Rahn. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface DetailViewController : UIViewController

@property (strong, nonatomic) id detailItem;
@property (weak, nonatomic) IBOutlet UILabel *detailDescriptionLabel;

@end

