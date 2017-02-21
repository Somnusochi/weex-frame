//
//  AppDefine.h
//  HackerNews
//
//  Created by Hanks on 16/12/8.
//  Copyright © 2016年 Weex. All rights reserved.
//

#ifndef AppDefine_h
#define AppDefine_h


#define CURRENT_IP @"192.168.51.175"

#if TARGET_IPHONE_SIMULATOR
#define DEMO_HOST @"127.0.0.1"
#else
#define DEMO_HOST CURRENT_IP
#endif

#define DEMO_URL(path) [NSString stringWithFormat:@"http://%@:8080/%s", DEMO_HOST, #path]

#define HOME_URL [NSString stringWithFormat:@"http://%@:8080/dist/app.weex.js", DEMO_HOST]

#endif /* AppDefine_h */
