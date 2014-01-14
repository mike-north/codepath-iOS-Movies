//
//  Movie.h
//  Movies4
//
//  Created by Mike North on 1/13/14.
//  Copyright (c) 2014 Mike North. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface Movie : NSObject

@property (nonatomic, strong) NSString *title;
@property (nonatomic, strong) NSString *synopsis;
@property (nonatomic, strong) NSString *rating;
@property (nonatomic, strong) NSString *year;

//Dictionary Constructor
- (id)initWithDictionary:(NSDictionary *)dictionary;

@end
