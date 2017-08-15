

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

@interface UIColor (Utils)
+ (UIColor *)dy_orangeColor;

+ (UIColor *)dy_orangeHLColor;

/**
 *  RGB值转换为UIColor对象
 *
 *  @param inColorString RGB值，如“＃808080”这里只需要传入“808080”
 *
 *  @return UIColor对象
 */
+ (UIColor *)colorFromHexRGB:(NSString *)inColorString;

+ (UIColor *)colorFromHexRGB:(NSString *)inColorString alpha:(CGFloat)alpha;

+ (UIColor *)colorFromHexRGB:(NSString *)inColorString andOpacity:(float) alpha;

@end
