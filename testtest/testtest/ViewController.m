//
//  ViewController.m
//  testtest
//
//  Created by Mopon on 2016/12/8.
//  Copyright © 2016年 Mopon. All rights reserved.
//

#import "ViewController.h"
#import <MPKit/MPKit.h>

@interface ViewController ()

@end

@implementation ViewController

- (void)viewDidLoad {
    [super viewDidLoad];
    
    MPNetworkTool *tool = [MPNetworkTool new];
    [tool testNetwork];
}


- (void)didReceiveMemoryWarning {
    [super didReceiveMemoryWarning];
    // Dispose of any resources that can be recreated.
}


@end
