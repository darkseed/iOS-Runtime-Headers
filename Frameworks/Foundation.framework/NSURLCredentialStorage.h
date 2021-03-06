/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

@class NSURLCredentialStorageInternal;

@interface NSURLCredentialStorage : NSObject  {
    NSURLCredentialStorageInternal *_internal;
}

+ (id)sharedCredentialStorage;

- (id)_internalInit;
- (void)setCredential:(id)arg1 forProtectionSpace:(id)arg2;
- (id)init;
- (void)dealloc;
- (id)allCredentials;
- (void)removeCredential:(id)arg1 forProtectionSpace:(id)arg2;
- (void)setDefaultCredential:(id)arg1 forProtectionSpace:(id)arg2;
- (id)credentialsForProtectionSpace:(id)arg1;
- (id)defaultCredentialForProtectionSpace:(id)arg1;

@end
