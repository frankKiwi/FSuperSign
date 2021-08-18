//
//  p12checker.hpp
//  HuoGameBox
//
//  Created by Frank on 2020/9/12.
//  Copyright © 2020 LWW. All rights reserved.
//
#include <openssl/x509.h>

bool isP12Revoked(X509 * x509, bool g3);
