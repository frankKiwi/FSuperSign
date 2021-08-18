//
//  FNKFileManager.h
//  HuoGameBox
//
//  Created by Frank on 2020/9/7.
//  Copyright © 2020 LWW. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "FNKFile.h"
#include "x509.h"
#import <UIKit/UIKit.h>

@class FNKDocument,ImportManager;


NS_ASSUME_NONNULL_BEGIN

@interface FNKFileManager : NSObject

@property (nonatomic, copy, readonly) NSString *cachePath;
@property (nonatomic, copy, readonly) NSString *downloadPath;
@property (nonatomic, copy, readonly) NSString *originIpaPath;
@property (nonatomic, copy, readonly) NSString *signedIpaPath;
@property (nonatomic, copy, readonly) NSString *certificatePath;
@property (nonatomic, copy, readonly) NSString *mobileProvisionPath;
@property (nonatomic, copy, readonly) NSString *dylibPath;
@property (nonatomic, copy, readonly) NSString *zipPath;
@property (nonatomic, copy, readonly) NSString *unzipPath;
@property (nonatomic, copy, readonly) NSString *tmpPath;
@property (nonatomic, copy, readonly) NSString *installPath;

- (instancetype)init NS_UNAVAILABLE;
+ (instancetype)new NS_UNAVAILABLE;

+ (instancetype)sharedManager;

- (FNKFileType)fileTypeForName:(NSString *)fileName;
- (NSString* _Nullable)localPathForFile:(NSString *)file_path resigned:(BOOL)resigned;
- (BOOL)saveFile:(NSString*)filePath toPath:(NSString *)savePath extendedAttributes:(NSDictionary *_Nullable)attributes;
- (BOOL)saveData:(NSData*)fileData toPath:(NSString *)savePath;
- (NSArray*)allFiles:(NSString *)path;
- (NSArray*)subFiles:(NSString *)path;
- (BOOL)removeAll:(NSString *)path;
- (BOOL)removeFileWithPath:(NSString*)filePath;
- (NSString *_Nullable)getExecutablePathFromFramework:(NSString *)frameworkPath;
- (FNKCertificateFile * _Nullable)getCertificateFileForPath:(NSString *)cer_path getCertificatePsw:(NSString *)psw forceToUpdate:(BOOL)forceToUpdate checkComplete:(void(^_Nullable)(FNKCertificateFile*))checkComplete;
- (FNKMobileProvisionFile * _Nullable)getMobileProvisionFileForPath:(NSString *)prov_path;
- (FNKApplicationFile * _Nullable)getApplicationFileForPath:(NSString *)ipa_path;
- (FNKFile * _Nullable)getFileForPath:(NSString *)file_path;
- (NSDictionary *_Nullable)getInfoAndProfilesInBundle:(FNKApplicationFile *)app;
- (NSDictionary *_Nullable)getPlistInfo:(FNKApplicationFile *)app;
- (NSString *)getExecutablePathFromApp:(NSString *)filePath withExecutableName:(NSString *_Nullable)executableName;
- (void)importFile:(id _Nonnull)object withComplete:(void(^_Nullable)(NSArray<NSString*>* _Nullable savedPath, NSString* _Nullable des))complete;

@end

@interface FNKDocument : UIDocument

@property (nonatomic, strong) NSData *data;

@end

typedef void(^downloadBlock)(id obj);

@interface ImportManager : NSObject

+ (void)downloadWithDocumentURL:(NSURL*)url callBack:(downloadBlock)block;

@end



NS_ASSUME_NONNULL_END
