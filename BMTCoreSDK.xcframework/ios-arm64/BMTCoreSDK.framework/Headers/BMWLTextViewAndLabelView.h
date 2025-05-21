//
//  BMWLTextViewAndLabelView.h
//  BMWhiteLabelSDK
//
//  Created by Chandan Kumar on 13/06/20.
//  Copyright © 2020 co.bytemark. All rights reserved.
//

#import <BMTCoreSDK/BMTCoreSDK.h>


@protocol BMWLTextViewAndLabelViewDelegate <NSObject>

- (void)textViewDidChange:(id _Nonnull )sender;
- (void)textViewDidEndEditing:(id _Nonnull)sender;

@end

@interface BMWLTextViewAndLabelView : UIView <BTMKThemeDelegate>

@property (nonatomic, strong) UILabel *_Nonnull textViewPlaceHolderLabel;
@property (nonatomic, strong) UITextView *_Nonnull formTextViewInput;
@property (nonatomic, strong) UILabel * _Nonnull label;
@property (nonatomic, strong) UILabel * _Nullable labelAccessory;
@property (nonatomic, weak) id< BMWLTextViewAndLabelViewDelegate > _Nullable textViewAndLabelViewDelegate;

@end
