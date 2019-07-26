//
//  LGDefines.h
//  HBDJProj
//
//  Created by Peanut Lee on 2018/4/2.
//  Copyright © 2018年 Lee. All rights reserved.
//


/// MARK:屏幕宽度的16分之9，常用图片比例的高度
#define kLGHeigh_ScreedWidth9_16 ([UIScreen mainScreen].bounds.size.width)*9/16.f
/** App单利对象 */
#define kLGApplication [UIApplication sharedApplication]
/** 主窗口 keyWindow */
#define kLGKeyWindow [UIApplication sharedApplication].keyWindow
/** App单利对象的代理 */
#define kLGAppDelegate [UIApplication sharedApplication].delegate
/** 用户偏好 */
#define kLGUserDefaults [NSUserDefaults standardUserDefaults]
/** 通知中心 */
#define kLGNotificationCenter [NSNotificationCenter defaultCenter]
/** 设备的UUID 唯一标识 */
#define kLGUUID [[UIDevice currentDevice] identifierForVendor].UUIDString

/** 屏幕宽度 */
#define kLGScreenWidth ([UIScreen mainScreen].bounds.size.width)
/** 屏幕高度 */
#define kLGScreenHeight ([UIScreen mainScreen].bounds.size.height)
/** 屏幕bounds */
#define kLGScreenBounds ([UIScreen mainScreen].bounds)
/** 导航栏高度(包括状态栏) */
#define kLGNavHeight (([[UIScreen mainScreen] bounds].size.height == 812) ? 88 : 64)
/** 导航栏高度(不包括状态栏) */
#define kLGNavSingleBarHeight 44
/** 状态栏高度 */
#define kLGStatusBarHeight (([[UIScreen mainScreen] bounds].size.height == 812) ? 44 : 20)
/** tabBar 高度 */
#define kLGTabBarHeight (([[UIScreen mainScreen] bounds].size.height == 812) ? 83 : 49)

// MARK: 判空操作
#define objIsNull(obj)       (obj == nil || [obj isKindOfClass:[NSNull class]])
#define stringIsNull(string) (string == nil|| [string isKindOfClass:[NSNull class]] || [string isEqualToString:@""])

/** 导航栏返回箭头按钮图标 */
#define kLGNavArrowLeft      @"arrow_left"
#define kLGNavArrowLeftWhite @"arrow_left_white"

/** 默认占位图片 */
#define LGDefaultPHImg [UIImage imageNamed:@""]

/** 发送上传文件时的 fileType */
#define LGFileTypeImageJpeg            @"image/jpeg"
#define LGFileTypeVidepMp4             @"video/mp4"

// MARK:提示语
#define kNoticeWordNoData            @"暂无数据"
#define kNoticeWordNoMoreData        @"暂无更多数据"
#define kNoticeWordLoadDone          @"加载完成"

