/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
 */

@interface PKPassPersonalizationFooterView : UIView <UITextViewDelegate> {
    <PKPassPersonalizationFooterViewDelegate> * _delegate;
    UITextView * _privacyTextView;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <PKPassPersonalizationFooterViewDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)dealloc;
- (id)delegate;
- (id)initWithOrganizationName:(id)arg1 delegate:(id)arg2;
- (void)layoutSubviews;
- (void)setDelegate:(id)arg1;
- (struct CGSize { float x1; float x2; })sizeThatFits:(struct CGSize { float x1; float x2; })arg1;
- (BOOL)textView:(id)arg1 shouldInteractWithURL:(id)arg2 inRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg3;

@end
