/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@class NSArray, NSMutableDictionary, SSDownloadManager;

@interface MPDownloadManager : NSObject <SSDownloadManagerObserverPrivate> {
    struct dispatch_queue_s { } *_dispatchQueue;
    SSDownloadManager *_downloadManager;
    NSMutableDictionary *_downloadsByID;
    struct __CFArray { } *_observers;
}

@property(readonly) NSArray * downloads;

+ (BOOL)isCellularDataRestricted;

- (void)cancelDownloads:(id)arg1 completionBlock:(id)arg2;
- (void)removeObserver:(id)arg1;
- (id)init;
- (void)dealloc;
- (id)_copyObservers;
- (void)_applyBlockToObservers:(id)arg1;
- (void)_rebuildCacheIfNecessary;
- (id)downloadWithIdentifier:(long long)arg1;
- (void)downloadManagerNetworkUsageDidChange:(id)arg1;
- (void)downloadManagerDownloadsDidChange:(id)arg1;
- (void)downloadManager:(id)arg1 downloadStatesDidChange:(id)arg2;
- (id)downloads;
- (void)addObserver:(id)arg1;
- (void)downloadManager:(id)arg1 downloadsDidChange:(id)arg2;

@end
