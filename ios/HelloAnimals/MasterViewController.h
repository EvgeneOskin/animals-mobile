//
//  MasterViewController.h
//  HelloAnimals
//
//  Created by Eugene Oskin on 29.06.15.
//  Copyright (c) 2015 Eugene Oskin. All rights reserved.
//

#import <UIKit/UIKit.h>

@class DetailViewController;

@interface MasterViewController : UITableViewController

@property (strong, nonatomic) DetailViewController *detailViewController;


@end

