/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/CorePDF.framework/CorePDF
 */

@class CPPage, NSMutableArray;

@interface CPZoneBorder : NSObject <NSCopying> {
    struct CGRect { 
        struct CGPoint { 
            float x; 
            float y; 
        } origin; 
        struct CGSize { 
            float width; 
            float height; 
        } size; 
    } bounds;
    CPPage *page;
    NSMutableArray *ownerArray;
    NSMutableArray *graphicObjects;
    NSMutableArray *neighbors;
    NSMutableArray *intersections;
    BOOL isHorizontal;
    BOOL hasForwardVector;
    BOOL hasBackwardVector;
    float overhangMin;
    float overhangMax;
}

+ (void)removeIntersectionBetweenBorder:(id)arg1 andBorder:(id)arg2;
+ (int)clockwiseWindingNumberOfShapeWithBorders:(id)arg1;
+ (void)addIntersectionBetweenBorder:(id)arg1 andBorder:(id)arg2 atRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg3;
+ (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })extendRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
+ (void)outerVertices:(struct CGPoint { float x1; float x2; }*)arg1 fromBorders:(id)arg2 swollenBy:(float)arg3;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)init;
- (void)dealloc;
- (id)initWithGraphicObject:(id)arg1;
- (void)addToArray:(id)arg1 atIndex:(unsigned int)arg2;
- (void)removeFromArrayAtIndex:(unsigned int)arg1;
- (id)ownerArray;
- (void)removeGraphicObjectAtIndex:(unsigned int)arg1;
- (void)removeNeighborAtIndex:(unsigned int)arg1;
- (void)setHasForwardVector:(BOOL)arg1;
- (BOOL)hasForwardVector;
- (void)setHasBackwardVector:(BOOL)arg1;
- (BOOL)hasBackwardVector;
- (void)setSide:(int)arg1 ofPage:(id)arg2;
- (BOOL)intersectsWith:(id)arg1 atRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; }*)arg2;
- (void)instantiateVectors;
- (BOOL)hasVectorGoingForward:(BOOL)arg1 startingAtIndex:(unsigned int*)arg2;
- (BOOL)extractCycleTo:(id)arg1 goingForward:(BOOL)arg2 startingAtIndex:(unsigned int)arg3;
- (BOOL)crosses:(id)arg1;
- (void)combine:(id)arg1;
- (void)addGraphicObject:(id)arg1;
- (unsigned int)intersectionCount;
- (BOOL)windsClockwiseOnto:(id)arg1;
- (BOOL)continues:(id)arg1;
- (BOOL)extractCycleTo:(id)arg1 goingForward:(BOOL)arg2 throughIntersectionIndex:(unsigned int)arg3 returningTo:(id)arg4 atRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; }*)arg5;
- (id)copyWithoutIntersections;
- (BOOL)hasClockwiseVectorAtIndex:(unsigned int)arg1 startingForward:(BOOL)arg2;
- (BOOL)hasCounterclockwiseVectorAtIndex:(unsigned int)arg1 startingForward:(BOOL)arg2;
- (void)addToArray:(id)arg1;
- (void)trimToLastIntersections;
- (void)addNeighbor:(id)arg1;
- (void)removeFromArray;
- (void)removeLooseThreadsStartingFrom:(id)arg1;
- (id)graphicObjects;
- (unsigned int)graphicObjectCount;
- (id)graphicObjectAtIndex:(unsigned int)arg1;
- (BOOL)hasNeighborShape:(id)arg1;
- (unsigned int)indexOfIntersectionWith:(id)arg1;
- (unsigned int)neighborCount;
- (id)neighborAtIndex:(unsigned int)arg1;
- (BOOL)hasNeighborShape:(id)arg1 atSide:(int)arg2;
- (int)compareXBounds:(id)arg1;
- (int)compareYBounds:(id)arg1;
- (long)zOrder;
- (id)page;
- (void)setBounds:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })bounds;
- (BOOL)isHorizontal;
- (BOOL)isVertical;

@end
