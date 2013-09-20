/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PowerlogLoggerSupport.framework/PowerlogLoggerSupport
 */

@class NSDate;

@interface PLTimeSnapshot : NSObject <NSCopying> {
    double _cachedWakeTime;
    NSDate *_lastSleepTimestamp;
    NSDate *_lastWakeTimestamp;
    double _sleepSeconds;
    NSDate *_startTimestamp;
    BOOL _staticSnapshot;
    NSDate *_timestamp;
}

@property double cachedWakeTime;
@property(retain) NSDate * lastSleepTimestamp;
@property(retain) NSDate * lastWakeTimestamp;
@property(readonly) double sleepHours;
@property(readonly) double sleepMinutes;
@property double sleepSeconds;
@property(retain) NSDate * startTimestamp;
@property BOOL staticSnapshot;
@property(retain) NSDate * timestamp;
@property(readonly) double wakeHours;
@property(readonly) double wakeMinutes;
@property(readonly) double wakeSeconds;

- (double)cachedWakeTime;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)init;
- (id)lastSleepTimestamp;
- (id)lastWakeTimestamp;
- (void)setCachedWakeTime:(double)arg1;
- (void)setLastSleepTimestamp:(id)arg1;
- (void)setLastWakeTimestamp:(id)arg1;
- (void)setSleepSeconds:(double)arg1;
- (void)setStartTimestamp:(id)arg1;
- (void)setStaticSnapshot:(BOOL)arg1;
- (void)setTimestamp:(id)arg1;
- (double)sleepHours;
- (double)sleepMinutes;
- (double)sleepSeconds;
- (id)startTimestamp;
- (BOOL)staticSnapshot;
- (id)timestamp;
- (double)wakeHours;
- (double)wakeMinutes;
- (double)wakeSeconds;

@end