/* Generated by RuntimeBrowser.
 */

@protocol UIPopoverControllerDelegate <NSObject>

@optional

- (void)popoverController:(UIPopoverController *)arg1 willRepositionPopoverToRect:(inout struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; }*)arg2 inView:(inout id*)arg3;
- (void)popoverControllerDidDismissPopover:(UIPopoverController *)arg1;
- (BOOL)popoverControllerShouldDismissPopover:(UIPopoverController *)arg1;

@end