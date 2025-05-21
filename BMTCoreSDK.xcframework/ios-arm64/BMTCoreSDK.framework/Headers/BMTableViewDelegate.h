//
//  BMTableViewDelegate.h
//  BMWhiteLabelSDK
//
//  Created by Kevin Rejko on 7/7/14.
//  Copyright (c) 2014 co.bytemark. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

@class BMTableViewDataSource;


typedef void (^TableViewCellWillDisplay)(UITableView *tableView, id tableViewCell, NSIndexPath *indexPath, id dataSourceItem);
typedef void (^TableViewCellSelectionAction)(UITableView *tableView, NSIndexPath *indexPath, id dataSourceItem);
typedef CGFloat (^TableViewCellHeightValue)(UITableView *tableView, NSIndexPath *indexPath);


@interface BMTableViewDelegate : NSObject <UITableViewDelegate>

/* Cell Behavior */
@property (nonatomic, copy) TableViewCellWillDisplay cellWillDisplay;
@property (nonatomic, copy) TableViewCellSelectionAction cellSelectionAction;
@property (nonatomic, copy) TableViewCellHeightValue cellHeightBlock;
@property (nonatomic) CGFloat cellHeight;
@property (nonatomic) BOOL cellWillBeDeselected;
@property (nonatomic) BOOL shouldCallbackForNoInfoCell;

/* Header Properties */
@property (nonatomic) UIColor *headerTextColor;
@property (nonatomic) UIColor *headerBackgroundColor;
@property (nonatomic) NSNumber *headerHeight;
@property (nonatomic, copy) NSString *headerText;

/* Footer Properties */
@property (nonatomic) NSNumber *footerHeight;

- (BMTableViewDataSource *)dataSourceForTableView:(UITableView *)tableView;

@end
