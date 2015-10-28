/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/MapKit.framework/MapKit
 */

@interface _MKGradientView : UIView {
    CAGradientLayer *_gradient;
}

@property (copy) NSArray *gradientColors;
@property struct CGPoint { float x1; float x2; } gradientEndPoint;
@property (copy) NSArray *gradientLocations;
@property struct CGPoint { float x1; float x2; } gradientStartPoint;
@property (copy) NSString *gradientType;

+ (Class)layerClass;

- (void).cxx_destruct;
- (id)gradientColors;
- (struct CGPoint { float x1; float x2; })gradientEndPoint;
- (id)gradientLocations;
- (struct CGPoint { float x1; float x2; })gradientStartPoint;
- (id)gradientType;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)setGradientColors:(id)arg1;
- (void)setGradientEndPoint:(struct CGPoint { float x1; float x2; })arg1;
- (void)setGradientLocations:(id)arg1;
- (void)setGradientStartPoint:(struct CGPoint { float x1; float x2; })arg1;
- (void)setGradientType:(id)arg1;

@end