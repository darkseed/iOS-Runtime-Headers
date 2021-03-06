/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@class NSArray, NSString, UIKeyboardCandidateSortSelectionBar, UIKeyboardCandidateScrollViewController, <UIKeyboardCandidateListDelegate>, UIKeyboardCandidateInlinePadBottomShadowView;

@interface UIKeyboardCandidateInlineFloatingView : UIView <UIKeyboardCandidateList, UIKeyboardCandidateListDelegate, UIKeyboardCandidateScrollViewControllerDelegate> {
    NSArray *_candidates;
    NSString *_inlineText;
    struct CGRect { 
        struct CGPoint { 
            float x; 
            float y; 
        } origin; 
        struct CGSize { 
            float width; 
            float height; 
        } size; 
    } _inlineRect;
    float _maxX;
    BOOL _expanded;
    UIKeyboardCandidateScrollViewController *_scrollViewController;
    <UIKeyboardCandidateListDelegate> *_candidateListDelegate;
    UIKeyboardCandidateInlinePadBottomShadowView *_shadowView;
    UIKeyboardCandidateSortSelectionBar *_sortSelectionBar;
    int _position;
    BOOL _reducedWidth;
    struct CGRect { 
        struct CGPoint { 
            float x; 
            float y; 
        } origin; 
        struct CGSize { 
            float width; 
            float height; 
        } size; 
    } _previousCollapsedFrame;
}

@property(retain) NSArray * candidates;
@property(copy) NSString * inlineText;
@property struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; } inlineRect;
@property float maxX;
@property BOOL expanded;
@property(readonly) UIKeyboardCandidateScrollViewController * scrollViewController;
@property <UIKeyboardCandidateListDelegate> * candidateListDelegate;
@property(retain) UIKeyboardCandidateInlinePadBottomShadowView * shadowView;
@property(readonly) UIKeyboardCandidateSortSelectionBar * sortSelectionBar;
@property int position;
@property BOOL reducedWidth;
@property(readonly) struct CGSize { float x1; float x2; } collapsedSize;
@property(readonly) struct CGSize { float x1; float x2; } expandedSize;
@property struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; } previousCollapsedFrame;


- (unsigned int)count;
- (id)candidates;
- (void)dealloc;
- (void)padInlineFloatingViewExpand:(id)arg1;
- (BOOL)padInlineFloatingViewIsExpanded:(id)arg1;
- (void)sortSelectionBarAction;
- (void)expand;
- (id)candidateListDelegate;
- (void)setShadowView:(id)arg1;
- (id)shadowView;
- (void)adjustFrameForInlineText:(id)arg1 inlineRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg2 maxX:(float)arg3;
- (float)maxX;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })inlineRect;
- (id)inlineText;
- (void)collapse;
- (void)setMaxX:(float)arg1;
- (void)setInlineRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)setInlineText:(id)arg1;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })adjustedFrameFromDesiredFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 textHeight:(float)arg2;
- (void)setReducedWidth:(BOOL)arg1;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })adjustedInlineRectFromInlineText:(id)arg1 inlineRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg2;
- (BOOL)isAcceptableFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 afterScrollBy:(float)arg2;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })previousCollapsedFrame;
- (void)layoutShadow;
- (struct CGSize { float x1; float x2; })expandedSize;
- (void)setPreviousCollapsedFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (id)sortSelectionBar;
- (id)scrollViewController;
- (void)setExpanded:(BOOL)arg1;
- (BOOL)expanded;
- (BOOL)reducedWidth;
- (void)setCandidateListDelegate:(id)arg1;
- (struct CGSize { float x1; float x2; })collapsedSize;
- (void)configureKeyboard:(id)arg1;
- (id)candidateAtIndex:(unsigned int)arg1;
- (id)currentCandidate;
- (void)showPageAtIndex:(unsigned int)arg1;
- (void)candidateListShouldBeDismissed:(id)arg1;
- (void)candidateListSelectionDidChange:(id)arg1;
- (void)candidateListAcceptCandidate:(id)arg1;
- (void)showCandidateAtIndex:(unsigned int)arg1;
- (void)setCandidates:(id)arg1 inlineText:(id)arg2 inlineRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg3 maxX:(float)arg4 layout:(BOOL)arg5;
- (void)setCandidates:(id)arg1 type:(int)arg2 inlineText:(id)arg3 inlineRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg4 maxX:(float)arg5 layout:(BOOL)arg6;
- (void)setUIKeyboardCandidateListDelegate:(id)arg1;
- (void)candidateAcceptedAtIndex:(unsigned int)arg1;
- (void)setCandidates:(id)arg1;
- (unsigned int)currentIndex;
- (BOOL)handleNumberKey:(unsigned int)arg1;
- (BOOL)handleTabKeyWithShift:(BOOL)arg1;
- (void)showPreviousPage;
- (void)showNextPage;
- (void)showPreviousCandidate;
- (void)showNextCandidate;
- (void)layout;
- (int)position;
- (void)setPosition:(int)arg1;
- (void)setFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;

@end
