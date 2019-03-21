#import <MobileIcons/MobileIcons.h>
#import <SpringBoard/SBLeafIcon.h>

@class SBApplication;

@interface SBApplicationIcon : SBLeafIcon

- (instancetype)initWithApplication:(SBApplication *)application;

- (UIImage *)getIconImage:(MIIconVariant)image;

@property (nonatomic, retain, readonly) SBApplication *application;

@end
