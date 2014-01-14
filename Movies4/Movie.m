//
//  Movie.m
//  Movies4
//
//  Created by Mike North on 1/13/14.
//  Copyright (c) 2014 Mike North. All rights reserved.
//

#import "Movie.h"

@implementation Movie

- (id)initWithDictionary:(NSDictionary *)dictionary {
    self = [super init];
    if (self) {
        self.title = [dictionary objectForKey:@"title"];
        self.synopsis = [dictionary objectForKey:@"synopsis"];
        self.rating = [dictionary objectForKey:@"mpaa_rating"];
        self.year = [NSString stringWithFormat:@"%d", [[dictionary objectForKey:@"year"] intValue]];
    }
    return self;
}

@end
