@class CAKeyframeAnimation, SBIcon, SBIconLabelView, SBIconLabelImageParameters, _UILegibilitySettings;

@interface SBIconView : UIView

+(id)_jitterXTranslationAnimation;
+(id)_jitterYTranslationAnimation;
+(id)_jitterRotationAnimation;

@property (nonatomic, readonly) long long currentLabelAccessoryType;

- (SBIcon *)icon;

- (SBIconLabelImageParameters *)_labelImageParameters;

- (SBIconLabelView *)labelView;
- (long long)location;
- (void)prepareDropGlow;
- (void)removeAllIconAnimations;
- (void)removeDropGlow;
- (void)setIsEditing:(BOOL)editing;
- (void)setIsGrabbed:(BOOL)grabbed;
- (void)setLabelHidden:(BOOL)hide;
- (void)showDropGlow:(BOOL)show;

- (void)_updateAccessoryViewWithAnimation:(BOOL)animated;
- (void)_updateLabel;

- (_UILegibilitySettings *)legibilitySettings;

@end
