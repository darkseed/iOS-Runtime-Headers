/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices
 */

@class NSString;

@interface AFSpeechCorrectionInfo : NSObject  {
    int _alternativeSelectionCount;
    int _characterModificationCount;
    NSString *_fullText;
}

@property int alternativeSelectionCount;
@property int characterModificationCount;
@property(copy) NSString * fullText;


- (void)dealloc;
- (int)characterModificationCount;
- (int)alternativeSelectionCount;
- (id)fullText;
- (void)setCharacterModificationCount:(int)arg1;
- (void)setAlternativeSelectionCount:(int)arg1;
- (void)setFullText:(id)arg1;
- (id)dkPlistRepresentation;
- (id)initWithDKPlistRepresentation:(id)arg1;

@end
