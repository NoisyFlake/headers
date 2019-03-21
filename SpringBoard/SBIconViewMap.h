#import <SpringBoard/SBReusableViewMap.h>

@class SBIcon, SBIconView;

@interface SBIconViewMap : SBReusableViewMap

+ (SBIconViewMap *)homescreenMap;

- (SBIconView *)mappedIconViewForIcon:(SBIcon *)icon;
- (SBIconView *)iconViewForIcon:(SBIcon *)icon;

@end
