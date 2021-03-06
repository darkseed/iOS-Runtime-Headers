/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

@interface NSNullFileHandle : NSFileHandle  {
}


- (void)setReadabilityHandler:(id)arg1;
- (id)readabilityHandler;
- (void)setWriteabilityHandler:(id)arg1;
- (id)writeabilityHandler;
- (int)fileDescriptor;
- (void)synchronizeFile;
- (void)truncateFileAtOffset:(unsigned long long)arg1;
- (unsigned long long)seekToEndOfFile;
- (unsigned long long)offsetInFile;
- (id)readDataToEndOfFile;
- (id)availableData;
- (id)readDataOfLength:(unsigned int)arg1;
- (void)writeData:(id)arg1;
- (void)closeFile;
- (void)seekToFileOffset:(unsigned long long)arg1;

@end
