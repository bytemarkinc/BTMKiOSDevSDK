//
//  UITableView+CellRegistration.h
//  BMWhiteLabelSDK
//
//  Created by Bytemark on 4/21/15.
//  Copyright (c) 2015 co.bytemark. All rights reserved.
//

#import <UIKit/UIKit.h>


/* Define */
static NSString * reuseIdentifier = @"BMTableViewReuseIdentifier";


@interface UITableView (CellRegistration)

- (void)registerTableViewCell:(Class)cellClass;

@end
