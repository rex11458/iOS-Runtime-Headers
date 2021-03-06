/* Generated by RuntimeBrowser.
 */

@protocol NCInteractiveNotificationHostDelegate <NSObject>

@optional

- (void)hostViewController:(UIViewController<NCInteractiveNotificationHost> *)arg1 didEnable:(BOOL)arg2 actionAtIndex:(unsigned int)arg3;
- (void)hostViewController:(UIViewController<NCInteractiveNotificationHost> *)arg1 didRequestDismissalWithContext:(NSDictionary *)arg2;
- (void)hostViewController:(UIViewController<NCInteractiveNotificationHost> *)arg1 serviceRequestedDismissalEnabled:(BOOL)arg2;
- (void)hostViewControllerDidChangePreferredContentSize:(UIViewController<NCInteractiveNotificationHost> *)arg1;

@end
