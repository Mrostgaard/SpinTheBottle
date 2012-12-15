//
//  ViewController.m
//  SpinTheBottle
//
//  Created by Mark Mortensen on 29/10/12.
//  Copyright (c) No Copyright, use it for education purpose og sell it if you want to!
//  WheelControl folder found at http://www.walnutlabs.com/blog/?p=9  Only my way to implement it!
//  
//

#import "SpinTheBottle.h"

@implementation SpinTheBottle

-(void)viewDidLoad
{
    WheelControl *wheelControl = [[WheelControl alloc] initWithFrame:CGRectMake(0, 0, 150, 300)];
	wheelControl.image = [UIImage imageNamed:@"1.png"];
	wheelControl.center = self.view.center;
	wheelControl.refPoint = CGPointMake(298, 136);
	wheelControl.delegate = self;
	[self.view addSubview:wheelControl];
}



@end