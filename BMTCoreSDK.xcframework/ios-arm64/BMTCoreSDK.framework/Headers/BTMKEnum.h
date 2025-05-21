//
//  Enum.h
//  BMCoreSDK
//
//  Created by Shuyang Sun on 9/15/17.
//  Copyright © 2017 Bytemark Inc. All rights reserved.
//

#ifndef BTMKEnum_h
#define BTMKEnum_h

typedef enum: NSInteger {
    BTMKPayloadTypeUnknown = -1,
    BTMKPayloadTypeIATA,
    BTMKPayloadTypeKapsch,
    BTMKPayloadTypeUICNL,
    BTMKPayloadTypeEncrypted,
    BTMKPayloadTypeINIT,
    BTMPayloadTypeVirtualCard,
    BMTPayloadTypeEncryptedV2
} BTMKPayloadType;

typedef enum: NSInteger {
    BTMKCardPaymentMethodType = 0,
    BTMKPayPalPaymentMethodType,
    BTMKApplePayPaymentMethodType,
    BTMKiDEALPaymentMethodType,
    BTMKWalletPayPaymentMethodType,
    BTMKCommuterBenefitCardType
} BTMKPaymentMethodType;

#endif /* BTMKEnum_h */
