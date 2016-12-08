//
//  MPNetworkTool.h
//  MPKit
//
//  Created by Mopon on 2016/12/7.
//  Copyright © 2016年 Mopon. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface MPNetworkTool : NSObject

-(void)testNetwork;

- (void)getGithubReposForUser:(NSString*)user withSuccess:(void(^)(id responseObject))success failure:(void(^)(NSError*error))failure;

@end
