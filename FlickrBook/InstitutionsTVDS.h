//
//  InstitutionsTVDS.h
//  FlickrBook
//
//  Created by Yavor Krastev on 2/16/14.
//  Copyright (c) 2014 Yavor Krastev. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <CoreData/CoreData.h>

@interface InstitutionsTVDS : NSObject <UITableViewDataSource>
@property(strong, nonatomic)UITableView *tableView;
@property(strong, nonatomic)NSFetchedResultsController *fetchedResultsController;
-(id)initWithTableView:(UITableView *)tableView;

@end
