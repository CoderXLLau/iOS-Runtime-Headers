/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/UIAccessibility.framework/UIAccessibility
 */

@interface UIAccessibilityOpaqueFocusState : NSObject {
    id  _element;
    BOOL  _hasBeenReused;
    BOOL  _hasFocus;
    UIView * _reusableView;
    struct CGRect { 
        struct CGPoint { 
            float x; 
            float y; 
        } origin; 
        struct CGSize { 
            float width; 
            float height; 
        } size; 
    }  _sceneRelativeFrame;
}

@property (nonatomic) id element;
@property (nonatomic) BOOL hasBeenReused;
@property (nonatomic) BOOL hasFocus;
@property (nonatomic, retain) UIView *reusableView;
@property (nonatomic) struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; } sceneRelativeFrame;

- (void)dealloc;
- (id)description;
- (id)element;
- (BOOL)hasBeenReused;
- (BOOL)hasFocus;
- (id)reusableView;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })sceneRelativeFrame;
- (void)setElement:(id)arg1;
- (void)setHasBeenReused:(BOOL)arg1;
- (void)setHasFocus:(BOOL)arg1;
- (void)setReusableView:(id)arg1;
- (void)setSceneRelativeFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;

@end
