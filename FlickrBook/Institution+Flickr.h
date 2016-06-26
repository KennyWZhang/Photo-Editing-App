//
//  Institution+Flickr.h
//  FlickrBook
//
//  Created by Yavor Krastev on 2/16/14.
//  Copyright (c) 2014 Yavor Krastev. All rights reserved.
//

#import "Institution.h"

@interface Institution (Flickr)

+(void)loadInstitutionsFromFlickrArray:(NSArray *)instArray
              intoManagedObjectContext:(NSManagedObjectContext *)context;

@end
