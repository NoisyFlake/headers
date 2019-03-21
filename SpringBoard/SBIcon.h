@interface SBIcon : NSObject

@property (nonatomic, retain) UIImage *icon;
@property (nonatomic, retain) NSString *leafIdentifier;
@property (nonatomic, copy, readonly) NSString* displayName NS_AVAILABLE_IOS(9_3_3);

- (BOOL)isFolderIcon;

- (NSInteger)badgeValue;

- (NSString *)applicationBundleID;

- (UIApplication *)application;

@end
