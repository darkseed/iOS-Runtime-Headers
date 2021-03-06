/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/EventKit.framework/EventKit
 */

@class NSDate;

@interface EKReminder : EKCalendarItem  {
}

@property(readonly) NSDate * dueDate;
@property(getter=isCompleted) BOOL completed;
@property(copy) NSDate * completionDate;

+ (id)reminderWithEventStore:(id)arg1;

- (id)description;
- (void)dealloc;
- (BOOL)isCompleted;
- (void)clearParentUUID;
- (void)setCompleted:(BOOL)arg1;
- (int)compareDueDateWithReminder:(id)arg1;
- (void)setDueDateComponents:(id)arg1;
- (id)parentUUID;
- (void)setCompletionDate:(id)arg1;
- (id)completionDate;
- (id)_persistentReminder;
- (void)setStartDateComponents:(id)arg1;
- (id)startDateComponents;
- (id)dueDateComponents;
- (id)dueDate;
- (void)_sendModifiedNote;
- (id)externalURI;
- (BOOL)validate:(id*)arg1;
- (BOOL)commit:(id*)arg1;
- (id)initWithPersistentObject:(id)arg1;

@end
