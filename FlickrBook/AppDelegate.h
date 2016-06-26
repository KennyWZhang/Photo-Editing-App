//
//  AppDelegate.h
//  FlickrBook
//
//  Created by Yavor Krastev on 2/12/14.
//  Copyright (c) 2014 Yavor Krastev. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "Store.h"
@interface AppDelegate : UIResponder <UIApplicationDelegate>

@property (strong, nonatomic) UIWindow *window;
@property (strong, nonatomic) Store *store;

@end
