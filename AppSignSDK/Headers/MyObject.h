//
//  MyObject.h
//  Ruby
//
//  Created by Ruby on 2019/6/26.
//  Copyright © 2019 Ruby. All rights reserved.
//

#import <Foundation/Foundation.h>
#include "x509.h"

NS_ASSUME_NONNULL_BEGIN
@class FNKApplicationFile;
@interface MyObject : NSObject

@property (nonatomic)NSString*status;

- (char *) getAppCachePath:(char* )filePath;
- (char *) getAppExecutablePath:(char *)appPath withExecutableName:(char *_Nullable)executableName;
- (char *) getFrameworkExecutablePath:(char* )filePath;
- (bool) unzip:(char *)zipPath toPath:(char *)outPath;
- (bool) zip:(char *)filePath toPath:(char *)zipPath level:(int)level;
- (bool)moveFileFrom:(char *)fromPath to:(char *)toPath withCer:(char *)cer_name;
- (void)signDoneToCheck;

- (NSString *)createInstallPlistForApp:(FNKApplicationFile *)app;

- (NSArray <NSString*> *)checkLibsFromExecutable:(NSString *)path;

@end

NS_ASSUME_NONNULL_END
