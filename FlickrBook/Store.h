//
//  Store.h
//  FlickrBook
//
//  Created by Yavor Krastev on 2/12/14.
//  Copyright (c) 2014 Yavor Krastev. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface Store : NSObject
+(NSManagedObjectContext *) managedObjectContext;
+(NSString *) flickrApiKey;
@end
