/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

@class CADisplayLink, NSArray;

@interface CKTranscriptCollectionViewLayout : UICollectionViewLayout {
    struct CGPoint { 
        double x; 
        double y; 
    struct CGSize { 
        double width; 
        double height; 
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    double _anchorYPosition;
    } _contentSize;
    CADisplayLink *_displayLink;
    NSArray *_layoutAttributes;
    double _prevTimestamp;
    } _targetContentOffset;
    } _visibleBounds;
    bool_easingUp;
    bool_holdingBoundsInvalidation;
    bool_isResting;
    bool_shouldDisplayLinkInvalidateLayout;
    bool_useInitialLayoutAttributesForRotation;
}

@property double anchorYPosition;
@property struct CGSize { double x1; double x2; } contentSize;
@property(retain) CADisplayLink * displayLink;
@property bool easingUp;
@property(getter=isHoldingBoundsInvalidation) bool holdingBoundsInvalidation;
@property bool isResting;
@property(copy) NSArray * layoutAttributes;
@property double prevTimestamp;
@property bool shouldDisplayLinkInvalidateLayout;
@property struct CGPoint { double x1; double x2; } targetContentOffset;
@property(getter=isUsingInitialLayoutAttributesForRotation) bool useInitialLayoutAttributesForRotation;
@property struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } visibleBounds;

+ (Class)layoutAttributesClass;

- (double)anchorYPosition;
- (double)bezierPointForPercentage:(double)arg1 anchor1:(double)arg2 anchor2:(double)arg3 control1:(double)arg4 control2:(double)arg5;
- (struct CGSize { double x1; double x2; })collectionViewContentSize;
- (struct CGSize { double x1; double x2; })contentSize;
- (void)dealloc;
- (id)displayLink;
- (void)displayLinkFired:(id)arg1;
- (bool)easingUp;
- (id)finalLayoutAttributesForDisappearingItemAtIndexPath:(id)arg1;
- (id)init;
- (id)initialLayoutAttributesForAppearingItemAtIndexPath:(id)arg1;
- (void)invalidateDisplayLink;
- (bool)isHoldingBoundsInvalidation;
- (bool)isResting;
- (bool)isUsingInitialLayoutAttributesForRotation;
- (id)layoutAttributes;
- (id)layoutAttributesForDecorationViewOfKind:(id)arg1 atIndexPath:(id)arg2;
- (id)layoutAttributesForElementsInRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)layoutAttributesForItemAtIndexPath:(id)arg1;
- (id)layoutAttributesForSupplementaryViewOfKind:(id)arg1 atIndexPath:(id)arg2;
- (void)prepareLayout;
- (double)prevTimestamp;
- (void)reloadData;
- (void)setAnchorYPosition:(double)arg1;
- (void)setContentSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setDisplayLink:(id)arg1;
- (void)setEasingUp:(bool)arg1;
- (void)setHoldingBoundsInvalidation:(bool)arg1;
- (void)setIsResting:(bool)arg1;
- (void)setLayoutAttributes:(id)arg1;
- (void)setPrevTimestamp:(double)arg1;
- (void)setShouldDisplayLinkInvalidateLayout:(bool)arg1;
- (void)setTargetContentOffset:(struct CGPoint { double x1; double x2; })arg1;
- (void)setUseInitialLayoutAttributesForRotation:(bool)arg1;
- (void)setVisibleBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (bool)shouldDisplayLinkInvalidateLayout;
- (bool)shouldInvalidateLayoutForBoundsChange:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (struct CGPoint { double x1; double x2; })targetContentOffset;
- (void)updateContentSize;
- (void)updateFrames;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })visibleBounds;

@end