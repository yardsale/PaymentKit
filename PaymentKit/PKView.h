//
//  PKPaymentField.h
//  PKPayment Example
//
//  Created by Alex MacCaw on 1/22/13.
//  Copyright (c) 2013 Stripe. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "PKCard.h"
#import "PKCardNumber.h"
#import "PKCardExpiry.h"
#import "PKCardCVC.h"
#import "PKAddressZip.h"
#import "PKUSAddressZip.h"

@class PKView, PKTextField;

@protocol PKViewDelegate <NSObject>
@optional
- (void) paymentView:(PKView*)paymentView withCard:(PKCard*)card isValid:(BOOL)valid;
@end

@interface PKView : UIView

- (BOOL)isValid;

@property (readonly, nonatomic) UIView *opaqueOverGradientView;
@property (readonly, nonatomic) PKCardNumber* cardNumber;
@property (readonly, nonatomic) PKCardExpiry* cardExpiry;
@property (readonly, nonatomic) PKCardCVC* cardCVC;
@property (readonly, nonatomic) PKAddressZip* addressZip;

@property (strong, readonly, nonatomic) UIView* innerView;
@property (strong, readonly, nonatomic) UIView* clipView;
@property (strong, readonly, nonatomic) PKTextField* cardNumberField;
@property (strong, readonly, nonatomic) PKTextField* cardExpiryField;
@property (strong, readonly, nonatomic) PKTextField* cardCVCField;
@property (strong, readonly, nonatomic) UIImageView* placeholderView;

@property (weak) id <PKViewDelegate> delegate;
@property (strong, readonly) PKCard* card;

@end
