/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@class NSString, <SAAceSerializable>;

@interface SAUISayIt : SABaseClientBoundCommand  {
}

@property(retain) <SAAceSerializable> * context;
@property(copy) NSString * message;

+ (id)sayIt;
+ (id)sayItWithDictionary:(id)arg1 context:(id)arg2;

- (id)groupIdentifier;
- (id)message;
- (void)setMessage:(id)arg1;
- (id)context;
- (void)setContext:(id)arg1;
- (id)encodedClassName;
- (BOOL)requiresResponse;

@end
