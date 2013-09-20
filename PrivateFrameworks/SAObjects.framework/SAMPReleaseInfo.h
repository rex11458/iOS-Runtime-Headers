/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@class SACalendar;

@interface SAMPReleaseInfo : AceObject <SAAceSerializable> {
}

@property(retain) SACalendar * releaseDate;
@property int releaseYear;

+ (id)releaseInfo;
+ (id)releaseInfoWithDictionary:(id)arg1 context:(id)arg2;

- (id)encodedClassName;
- (id)groupIdentifier;
- (id)releaseDate;
- (int)releaseYear;
- (void)setReleaseDate:(id)arg1;
- (void)setReleaseYear:(int)arg1;

@end