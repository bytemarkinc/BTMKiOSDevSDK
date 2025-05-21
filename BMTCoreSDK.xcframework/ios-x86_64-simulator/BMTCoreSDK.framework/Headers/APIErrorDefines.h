//
//  APIErrorDefines.h
//  BMPassSDK
//
//  Created by Kevin Rejko on 5/17/13.
//  Copyright (c) 2013 Bytemark. All rights reserved.
//

#ifndef BMPassSDK_APIErrorDefines_h
#define BMPassSDK_APIErrorDefines_h

#define kERROR_MISSING_CVV 24001
#define kERROR_USER_NOT_REGISTERED 400104

#define kERROR_NETWORK_OPERATION_NOT_COMPLETED -999
#define kERROR_NETWORK_TIME_OUT -1001
#define kERROR_NETOWRK_HOSTNAME_NOT_FOUND -1003
#define kERROR_NETWORK_CONNECTION_LOST -1005
#define kERROR_NETWORK_UNAVAILABLE -1009
#define kERROR_SERVER_FAILURE -1011


#define kKEY_ERRORS @"errors"
#define kKEY_ERROR_CODE @"code"
#define kKEY_ERROR_MESSAGE @"message"
#define kERROR_DOMAIN_API @"API Error"

#endif
