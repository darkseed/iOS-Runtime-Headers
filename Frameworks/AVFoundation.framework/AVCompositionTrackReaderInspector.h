/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

@interface AVCompositionTrackReaderInspector : AVTrackReaderInspector  {
    struct OpaqueFigMutableComposition { } *_figMutableComposition;
}

@property(getter=_mutableComposition,readonly) struct OpaqueFigMutableComposition { }* mutableComposition;


- (void)dealloc;
- (struct OpaqueFigMutableComposition { }*)_mutableComposition;
- (id)segmentForTrackTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1;
- (id)_initWithAsset:(id)arg1 trackID:(int)arg2 trackIndex:(long)arg3;
- (void)finalize;
- (id)segments;

@end
