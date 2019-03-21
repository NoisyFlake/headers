#import <UIKit/_UILegibilityView.h>

@class SBIconLabelImageParameters, _UILegibilitySettings;

@interface SBIconLabelView : _UILegibilityView

+ (void)updateIconLabelView:(SBIconLabelView *)labelView withSettings:(_UILegibilitySettings *)settings imageParameters:(SBIconLabelImageParameters *)params;
-(void)updateIconLabelWithSettings:(id)arg1 imageParameters:(id)arg2;

- (void)setImageParameters:(SBIconLabelImageParameters *)params;

@end
