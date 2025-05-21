//
//  BMTableViewDelegate.h
//  NY Waterway
//
//  Created by Kevin Rejko on 4/15/14.
//  Copyright (c) 2014 Bytemark Inc,. All rights reserved.
//

#import <Foundation/Foundation.h>

#import "UITableView+CellRegistration.h"

typedef UITableViewCell *(^TableViewCellCreation)(NSIndexPath *indexPath);
typedef void (^TableViewCellCustomization)(id cell, id dataSourceItem);
typedef void (^TableViewCellEditingAction)(UITableView *tableView, NSIndexPath *indexPath, UITableViewCellEditingStyle editingStyle, id dataSourceItem);


@interface BMTableViewDataSource : NSObject <UITableViewDataSource>

@property (nonatomic, weak) UITableView *tableView;
@property (nonatomic, copy) NSArray *data;
@property (nonatomic, copy) TableViewCellCreation cellCreation;
@property (nonatomic, copy) TableViewCellCustomization cellCustomization;
@property (nonatomic, copy) TableViewCellEditingAction cellEditingAction;
@property (nonatomic, copy) NSString *noInformationCellText;


/* Accessors & Mutators */
- (id)dataItemAtIndexPath:(NSIndexPath *)indexPath;
- (void)indicateReloadingDataSource;

/* Conditionals */
- (BOOL)isDataEmpty;

/* Cell Creation */
- (UITableViewCell *)tableView:(UITableView *)tableView cellAtIndexPath:(NSIndexPath *)indexPath;
- (UITableViewCell *)cellForDataItem:(id)dataItem indexPath:(NSIndexPath *)index; /* ABSTRACT */
- (void)performCustomizationForCell:(UITableViewCell *)cell withDataItem:(id)dataItem;

- (UITableViewCell *)noInformationCell;
- (NSString *)noInformationCellText;
- (NSString *)dequeueIdentifier;

/* Conditionals */
- (BOOL)isDisplayingNoInfoOrLoadingCell;

@end
