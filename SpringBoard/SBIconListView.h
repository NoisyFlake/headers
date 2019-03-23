@interface SBIconListView : UIView
-(id)icons;
-(SBIconViewMap *)viewMap;
-(id)iconAtPoint:(CGPoint)arg1 index:(unsigned long long*)arg2 ;
-(CGPoint)originForIconAtCoordinate:(SBIconCoordinate)arg1;
-(void)layoutIconsNow;
-(unsigned long long)indexOfIcon:(id)arg1 ;
-(void)layoutIconsIfNeeded:(double)arg1 ;
@end
