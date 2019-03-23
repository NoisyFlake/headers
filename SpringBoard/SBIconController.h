@class SBIconListView, SBDockIconListView, SBIcon, SBIconModel, SBIconViewMap, SBRootIconListView, SBRootFolderController;

@interface SBIconController : NSObject

+ (instancetype)sharedInstance;

@property (nonatomic, retain) SBIconModel *model;

@property (nonatomic, retain, readonly) SBRootIconListView *currentRootIconList;
@property (nonatomic, retain, readonly) SBDockIconListView *dockListView;
@property (nonatomic,readonly) SBIconListView * effectiveDockListView;

@property (nonatomic, retain, readonly) SBRootFolderController *_rootFolderController;

- (BOOL)iconAllowsBadging:(SBIcon *)icon;
- (BOOL)isEditing;
-(BOOL)isIconDragging;

- (SBIconViewMap *)viewMap;
- (SBIconListView *)effectiveDockListView;
- (SBIconListView *)floatingDockListView;
-(SBIconListView *)floatingDockSuggestionsListView;

@end
