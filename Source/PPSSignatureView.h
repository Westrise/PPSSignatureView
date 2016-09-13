#import <UIKit/UIKit.h>
#import <GLKit/GLKit.h>

@protocol PPSSignatureViewDelegate <NSObject>

@optional
-(void)signatureHasBeenChanged;

@end

@interface PPSSignatureView : GLKView

@property (assign, nonatomic) IBInspectable UIColor *strokeColor;
@property (assign, nonatomic) BOOL hasSignature;
@property (strong, nonatomic) UIImage *signatureImage;

@property (nonatomic) IBInspectable BOOL longPressEraseEnabled;
@property (nonatomic) IBInspectable CGFloat minimumStrokeWidth;
@property (nonatomic) IBInspectable CGFloat maximumStrokeWidth;

@property (nonatomic, weak) id<PPSSignatureViewDelegate> delegate;

- (void)erase;

@end
