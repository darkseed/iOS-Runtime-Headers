/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@class OADDrawableProperties, <OADClient>, OADDrawable<OADDrawableContainer>;

@interface OADDrawable : NSObject  {
    BOOL mHidden;
    unsigned int mId;
    OADDrawableProperties *mDrawableProperties;
    <OADClient> *mClientData;
    OADDrawable<OADDrawableContainer> *mParent;
}


- (void)dealloc;
- (BOOL)hidden;
- (void)setHidden:(BOOL)arg1;
- (void)setDrawableProperties:(id)arg1;
- (id)createOrientedBoundsWithBounds:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (id)createWordClientDataWithTextType:(int)arg1;
- (id)initWithPropertiesClass:(Class)arg1;
- (id)parent;
- (void)removeUnnecessaryOverrides;
- (id)ensureClientDataOfClass:(Class)arg1;
- (id)clientData;
- (void)setParent:(id)arg1;
- (id)drawableProperties;
- (void)setClientData:(id)arg1;
- (void)setParentTextListStyle:(id)arg1;
- (unsigned long)id;
- (void)setId:(unsigned long)arg1;

@end
