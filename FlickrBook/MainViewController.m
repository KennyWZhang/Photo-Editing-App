//
//  MainViewController.m
//  FlickrBook
//
//  Created by Yavor Krastev on 2/12/14.
//  Copyright (c) 2014 Yavor Krastev. All rights reserved.
//

#import "MainViewController.h"
#import "Institution+Flickr.h"
#import "InstitutionsTVDS.h"
#import "Store.h"


@interface MainViewController () <NSURLSessionDataDelegate>
@property(strong, nonatomic)InstitutionsTVDS *dataSource;
@end

@implementation MainViewController

- (id)init{
    UIStoryboard *sb = [UIStoryboard storyboardWithName:@"Main_iPhone" bundle:nil];
    MainViewController *_mvc = [sb instantiateViewControllerWithIdentifier:@"MainViewController"];
    return _mvc;
}


-(void)viewWillAppear:(BOOL)animated{
    [self.navigationController setToolbarHidden:NO animated:YES];
}


- (void)viewDidLoad
{
    [super viewDidLoad];
    self.dataSource = [[InstitutionsTVDS alloc]initWithTableView:self.tableView];
}

- (void)didReceiveMemoryWarning
{
    [super didReceiveMemoryWarning];
    // Dispose of any resources that can be recreated.
}

@end
