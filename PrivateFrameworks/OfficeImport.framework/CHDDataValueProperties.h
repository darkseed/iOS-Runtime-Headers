/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@class CHDDataLabel, OADGraphicProperties, CHDMarker;

@interface CHDDataValueProperties : NSObject <EDKeyedObject> {
    CHDDataLabel *mDataLabel;
    CHDMarker *mMarker;
    unsigned int mDataValueIndex;
    OADGraphicProperties *mGraphicProperties;
}

+ (id)dataValueProperties;

- (id)init;
- (void)dealloc;
- (unsigned int)key;
- (id)shallowCopyWithIndex:(int)arg1;
- (id)dataLabel;
- (void)setDataLabel:(id)arg1;
- (id)marker;
- (unsigned int)dataValueIndex;
- (void)setDataValueIndex:(unsigned int)arg1;
- (void)setMarker:(id)arg1;
- (void)setGraphicProperties:(id)arg1;
- (id)graphicProperties;

@end
