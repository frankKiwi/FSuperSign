//
//  
//  fsign.h
//
//  Created by Frank on 2021/7/3.
//  Copyright © 2020 LWW. All rights reserved.
//

#import <Foundation/Foundation.h>

//v2.0.4 ios15.0  修复
//v2.0.5 p12  修复
//v2.0.6 sign 优化
//v2.0.7 sign 优化一波
//v2.0.8 优化签名 
//v2.0.9 更新绑定
//v2.0.10 更新绑定
//2021.8.12
//v2.0.11 确保包的唯一性

NS_ASSUME_NONNULL_BEGIN

@interface fsign : NSObject

+ (int)signIPA:(NSString *)ipa_path
           size:(NSString*)size
            cer:(NSString *)cer_path
            pwd:(NSString *_Nullable)pwd
           prov:(NSString *)prov_path
       bundleID:(NSString *_Nullable)bundleID
     bundleName:(NSString *_Nullable)bundleName
  bundleVersion:(NSString *_Nullable)bundleVersion
       zipLevel:(NSInteger)zipLevel
         output:(NSString *)output_path;

@end

NS_ASSUME_NONNULL_END
