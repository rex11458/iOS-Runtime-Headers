/* Generated by RuntimeBrowser.
 */

@protocol AFUISiriViewDelegate <NSObject>

@required

- (float)audioRecordingPowerLevelForSiriView:(AFUISiriView *)arg1;
- (BOOL)siriView:(AFUISiriView *)arg1 attemptUnlockWithPassword:(NSString *)arg2;
- (void)siriView:(AFUISiriView *)arg1 didReceiveSiriActivationMessageWithSource:(int)arg2;
- (void)siriViewDidReceiveAudioRouteAction:(AFUISiriView *)arg1;
- (void)siriViewDidReceiveBugButtonLongPress:(AFUISiriView *)arg1;
- (void)siriViewDidReceiveHelpAction:(AFUISiriView *)arg1;
- (void)siriViewDidReceiveReportBugAction:(AFUISiriView *)arg1;
- (void)siriViewDidRecieveStatusViewHoldDidBeginAction:(AFUISiriView *)arg1;
- (void)siriViewDidRecieveStatusViewHoldDidEndAction:(AFUISiriView *)arg1;
- (void)siriViewDidRecieveStatusViewTappedAction:(AFUISiriView *)arg1;

@end