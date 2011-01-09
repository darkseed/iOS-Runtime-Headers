/* Generated by RuntimeBrowser on iPhone OS 2.2.1
   Image: /System/Library/Frameworks/CoreFoundation.framework/CoreFoundation
 */



@interface NSMutableData : NSData 
{
}

+ (id)allocWithZone:(struct _NSZone { }*)arg1;
+ (id)dataWithCapacity:(NSUInteger)arg1;
+ (id)dataWithLength:(NSUInteger)arg1;

- (void*)mutableBytes;
- (void)setLength:(NSUInteger)arg1;
- (Class)classForCoder;
- (void)replaceBytesInRange:(struct _NSRange { NSUInteger x1; NSUInteger x2; })arg1 withBytes:(const void*)arg2 length:(NSUInteger)arg3;
- (void)appendBytes:(const void*)arg1 length:(NSUInteger)arg2;
- (void)appendData:(id)arg1;
- (void)increaseLengthBy:(NSUInteger)arg1;
- (void)replaceBytesInRange:(struct _NSRange { NSUInteger x1; NSUInteger x2; })arg1 withBytes:(const void*)arg2;
- (void)resetBytesInRange:(struct _NSRange { NSUInteger x1; NSUInteger x2; })arg1;
- (void)setData:(id)arg1;
- (id)initWithCapacity:(NSUInteger)arg1;
- (id)initWithLength:(NSUInteger)arg1;
- (void)abAppendString:(id)arg1;
- (void)appendQuotedPrintableDataForHeaderBytes:(const char *)arg1 length:(NSUInteger)arg2;
- (void)appendRFC2231CompliantValue:(id)arg1 forKey:(id)arg2;
- (void)appendCString:(const char *)arg1;
- (void)appendByte:(BOOL)arg1;
- (void)convertNetworkLineEndingsToUnixInRange:(struct _NSRange { NSUInteger x1; NSUInteger x2; })arg1;
- (void)convertNetworkLineEndingsToUnix;
- (void)appendLELong:(long)arg1;
- (void)replaceBytesInRange:(struct _NSRange { NSUInteger x1; NSUInteger x2; })arg1 withLELong:(long)arg2;
- (void)appendLEShort:(short)arg1;
- (void)appendString:(id)arg1 encoding:(NSUInteger)arg2;

@end