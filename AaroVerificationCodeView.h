//
//  AaroVerificationCodeView.h
//  登录注册页面
//
//  Created by Lucky on 16/3/11.
//  Copyright © 2016年 AaronTKD_GEELY. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface AaroVerificationCodeView : UIView{
    UITextField *verificationCodeTextField;
    UIButton *codeButton;
}
- (instancetype)initWithFrame:(CGRect)frame UNAVAILABLE_ATTRIBUTE;
- (instancetype)initWithCoder:(NSCoder *)aDecoder UNAVAILABLE_ATTRIBUTE;
+ (instancetype)new  UNAVAILABLE_ATTRIBUTE;
@end
