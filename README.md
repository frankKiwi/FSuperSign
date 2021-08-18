# FSuperSign
超级签 服务端和APP端签名

#AppSignSDK

App端签名

环境配置:
openssl 1.1.1 主要用来证书校验
SSZipArchive SDK 里面已经打进去了.主要用来解压app和压缩app

添加系统库:
libiconv.tbd
libxml2.tbd
liblzma.tbd
libiconv.2.4.0.tbd
libstdc++.tbd
Security.framework
MobileCoreServices.framework
CoreServices.framework
libz.1.2.8.tbd

接口:

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

ipa_path: -----  ipa的沙盒路径
size: ------ ipa的大小
cer_path: ----- 证书的沙盒路径
pwd: ------ 证书的密码
prov_path: ---- 描述文件地址
bundleID: ---- 应用的bundleID 可以修改
bundleName: ---- app的名字
bundleVersion: ---- 版本
zipLevel: ---- 压缩层级
output_path: ---- 输出路径










