//
//  ViewController.h
//  exercise_相册访问_拍照保存
//
//  Created by 弄潮者 on 15/8/4.
//  Copyright (c) 2015年 弄潮者. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface ViewController : UIViewController<UINavigationControllerDelegate,UIImagePickerControllerDelegate>

@property (weak, nonatomic) IBOutlet UIImageView *imageShow;

@end

