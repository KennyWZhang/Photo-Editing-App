//
//  Photo+Flickr.h
//  FlickrBook
//
//  Created by Yavor Krastev on 2/16/14.
//  Copyright (c) 2014 Yavor Krastev. All rights reserved.
//

#import "Photo.h"

@interface Photo (Flickr)

+(Photo *)photoWithFlickrInfo:(NSDictionary *)info inManagedObjectContext:(NSManagedObjectContext *)context;
+(void)loadPhotosFromFlickrArray:(NSArray *)array intoManagedObjectContext:(NSManagedObjectContext *)context;

@end
