/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

@interface PXSnapBackController : NSObject <UIGestureRecognizerDelegate> {
    BOOL  _enabled;
    UILongPressGestureRecognizer * _longPressGestureRecognizer;
    UINavigationController * _navigationController;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (getter=isEnabled, nonatomic) BOOL enabled;
@property (readonly) unsigned int hash;
@property (nonatomic, readonly) UILongPressGestureRecognizer *longPressGestureRecognizer;
@property (nonatomic, readonly) UINavigationController *navigationController;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_backButtonView;
- (void)_enumerateDestinationViewControllersUsingBlock:(id /* block */)arg1;
- (void)_handleLongPressGestureRecognizer:(id)arg1;
- (void)_loadGestureRecognizer;
- (void)_presentHistory;
- (void)_unloadGestureRecognizer;
- (BOOL)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (id)init;
- (id)initWithNavigationController:(id)arg1;
- (BOOL)isEnabled;
- (id)longPressGestureRecognizer;
- (id)navigationController;
- (void)setEnabled:(BOOL)arg1;

@end