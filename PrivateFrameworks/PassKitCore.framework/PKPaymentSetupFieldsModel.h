/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

@interface PKPaymentSetupFieldsModel : NSObject {
    PKPaymentSetupFieldFooter * _footerField;
    NSMutableArray * _paymentSetupFields;
}

// Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore

+ (id)defaultPaymentSetupProvisioningFields;
+ (id)fakePaymentSetupProvisioningFields;

- (void).cxx_destruct;
- (id)footerPaymentSetupField;
- (BOOL)hasFooterPaymentSetupField;
- (BOOL)hasIncompletePaymentSetupFields;
- (id)incompletePaymentSetupFields;
- (id)initWithPaymentSetupFields:(id)arg1;
- (unsigned int)numberOfPaymentSetupFields;
- (id)paymentSetupFieldAtIndex:(unsigned int)arg1;
- (id)paymentSetupFieldIdentifiers;
- (id)paymentSetupFieldWithIdentifier:(id)arg1;
- (id)paymentSetupFields;
- (void)replaceAllPaymentSetupFields:(id)arg1;
- (void)replaceAllPaymentSetupFieldsPreservingCurrentValues:(id)arg1;
- (void)resetAllPaymentSetupFieldValues;
- (id)secureSubmissionValuesForDestination:(id)arg1;
- (id)submissionValuesForDestination:(id)arg1;
- (void)updateWithPaymentSetupFields:(id)arg1;

// Image: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI

- (float)minimumRequiredWidthForFieldIdentifiers:(id)arg1 withFont:(id)arg2;

@end
