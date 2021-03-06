/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@class MPMediaItemCollection, MPMusicPlayerController, MPMediaQuery;

@interface MPMusicPlayerControllerInternal : MPServerObjectProxy <MPMusicPlayerController> {
    MPMusicPlayerController *_musicPlayerController;
    unsigned int _clientPort;
    struct __CFRunLoopSource { } *_runLoopSource;
    int _playbackState;
    int _playbackNotificationObservers;
    MPMediaQuery *_query;
    MPMediaItemCollection *_itemCollection;
    int _inBlockHandlingPlaybackStateChangedMessageFromServer;
    unsigned int _didCheckIn : 1;
    unsigned int _useApplicationSpecificQueue : 1;
    unsigned int _useCachedPlaybackState : 1;
    unsigned int _cachedPlaybackStateIsValid : 1;
    unsigned int _allowsRemoteUIAccess : 1;
}

@property BOOL inBlockHandlingPlaybackStateChangedMessageFromServer;


- (void)serverConnectionDied;
- (void)didPrepareForRemoteSelectorInvocation;
- (BOOL)prepareForRemoteSelectorInvocation;
- (BOOL)inBlockHandlingPlaybackStateChangedMessageFromServer;
- (void)setInBlockHandlingPlaybackStateChangedMessageFromServer:(BOOL)arg1;
- (id)initWithMusicPlayerController:(id)arg1;

@end
