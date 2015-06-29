//
//  DetailViewController.h
//  HelloAnimals
//
//  Created by Eugene Oskin on 29.06.15.
//  Copyright (c) 2015 Eugene Oskin. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface DetailViewController : UIViewController

@property (strong, nonatomic) id detailItem;
@property (weak, nonatomic) IBOutlet UILabel *detailDescriptionLabel;

@end

