//
//  MainViewController.h
//  FlickrBook
//
//  Created by Yavor Krastev on 2/12/14.
//  Copyright (c) 2014 Yavor Krastev. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface MainViewController : UIViewController

@property (weak, nonatomic) IBOutlet UITableView *tableView;
@property (weak, nonatomic) IBOutlet UIBarButtonItem *pingFlickrItem;
@end
