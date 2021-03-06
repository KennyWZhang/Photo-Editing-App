//
//  FlickrJSResponseSerializer.m
//  FlickrBook
//
//  Created by Yavor Krastev on 2/16/14.
//  Copyright (c) 2014 Yavor Krastev. All rights reserved.
//

#import "FlickrJSResponseSerializer.h"
#define JSON_START 14

@implementation FlickrJSResponseSerializer

- (id)responseObjectForResponse:(NSURLResponse *)response
                           data:(NSData *)data
                          error:(NSError *__autoreleasing *)error
{
    NSString *respString = [[NSString alloc]initWithData:data encoding:NSUTF8StringEncoding];

//    To remove the "jsonFlickrApi(...)" wrapper e.g., http://www.flickr.com/services/rest/?method=flickr.test.echo&format=json&api_key=eee64cbd3ad05b3a8cfd5e1fb3dc1caf :

    respString = [respString substringFromIndex:JSON_START];
    respString = [respString substringToIndex:[respString length] - 1];
    NSData *respData = [respString dataUsingEncoding:NSUTF8StringEncoding];
    return [super responseObjectForResponse:response data:respData error:error];
}


@end
