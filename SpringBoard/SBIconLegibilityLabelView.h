#import <UIKit/_UILegibilityView.h>
#import <SpringBoard/SBIconLabelView.h>

@class SBIconLabelImageParameters, UIImage;

@interface SBIconLegibilityLabelView : _UILegibilityView {

	SBIconLabelImageParameters* _imageParameters;

}

@property (nonatomic,retain) SBIconLabelImageParameters * imageParameters;              //@synthesize imageParameters=_imageParameters - In the implementation block
@property (nonatomic,retain) UIImage * image;
-(void)updateIconLabelWithSettings:(id)arg1 imageParameters:(id)arg2 ;
-(void)_checkInImages;
-(SBIconLabelImageParameters *)imageParameters;
-(void)setImageParameters:(SBIconLabelImageParameters *)arg1 ;
-(void)dealloc;
-(id)initWithSettings:(id)arg1 ;
@end
