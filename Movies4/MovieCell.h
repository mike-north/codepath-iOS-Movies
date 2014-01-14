//
//  MovieCell.h
//  Movies4
//
//  Created by Mike North on 1/13/14.
//  Copyright (c) 2014 Mike North. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface MovieCell : UITableViewCell
@property (weak, nonatomic) IBOutlet UILabel *titleLabel;
@property (weak, nonatomic) IBOutlet UILabel *synopsisLabel;

@end
