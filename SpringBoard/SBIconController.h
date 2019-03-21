@class SBDockIconListView, SBIcon, SBIconModel, SBIconViewMap, SBRootIconListView, SBRootFolderController;

@interface SBIconController : NSObject

+ (instancetype)sharedInstance;

@property (nonatomic, retain) SBIconModel *model;

@property (nonatomic, retain, readonly) SBRootIconListView *currentRootIconList;
@property (nonatomic, retain, readonly) SBDockIconListView *dockListView;

@property (nonatomic, retain, readonly) SBRootFolderController *_rootFolderController;

- (BOOL)iconAllowsBadging:(SBIcon *)icon;

- (SBIconViewMap *)viewMap;

@end
