@class UIColor;

@interface SBIconLabelImageParameters : NSObject <NSCopying, NSMutableCopying>

@property (nonatomic, readonly) UIColor *focusHighlightColor;
@property (nonatomic, readonly) UIFont *font;
@property (nonatomic, copy, readonly) NSString *text;
@property (nonatomic, readonly) UIColor *textColor;

- (instancetype)initWithParameters:(SBIconLabelImageParameters *)params;

- (BOOL)colorspaceIsGrayscale;

- (NSString *)text;

- (UIColor *)focusHighlightColor;
- (UIColor *)textColor;

- (UIFont *)font;

@end
