/* Generated by RuntimeBrowser.
 */

@protocol RUITableViewRowDelegate

@required

- (void)rowActivatedLink:(void *)arg1 attributes:(void *)arg2 completion:(void *)arg3; // needs 3 arg types, found 9: NSString *, NSDictionary *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, BOOL, NSError *, void*
- (void)rowDidChange:(RUITableViewRow *)arg1;
- (void)rowDidEndEditing:(RUITableViewRow *)arg1;
- (void)rowIsFirstResponder:(RUITableViewRow *)arg1;
- (NSURL *)sourceURLForRUITableViewRow;
- (Class)tableCellClassForTableViewRow:(RUITableViewRow *)arg1;
- (id)textFieldRow:(RUITableViewRow *)arg1 changeCharactersInRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg2 replacementString:(NSString *)arg3;

@end