/* Generated by RuntimeBrowser.
 */

@protocol FCNetworkReachabilityRequirement <NSObject>

@required

- (BOOL)isSatisfied;
- (<FCNetworkReachabilityRequirementObserving> *)observer;
- (int)offlineReason;
- (void)setObserver:(id <FCNetworkReachabilityRequirementObserving>)arg1;

@end
