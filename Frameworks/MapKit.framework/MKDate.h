/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/MapKit.framework/MapKit
 */

@class NSDate, NSTimeZone;

@interface MKDate : NSDate  {
    NSDate *_date;
    NSTimeZone *_tz;
}

@property(retain) NSTimeZone * timeZone;
@property(readonly) NSDate * nsDate;

+ (id)dateWithNSDate:(id)arg1;

- (int)dayOfCommonEra;
- (id)description;
- (void)dealloc;
- (id)descriptionWithLocale:(id)arg1;
- (id)initWithTimeIntervalSinceReferenceDate:(double)arg1;
- (id)timeZone;
- (void)setTimeZone:(id)arg1;
- (double)timeIntervalSinceReferenceDate;
- (id)nsDate;
- (id)initWithNSDate:(id)arg1;

@end
