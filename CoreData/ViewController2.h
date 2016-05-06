//
//  ViewController2.h
//  CoreData
//
//  Created by Mahaboobsab Nadaf on 06/05/16.
//  Copyright © 2016 com.NeoRays. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <CoreData/CoreData.h>
#import "AppDelegate.h"
#import "TableViewCell.h"

@interface ViewController2 : UIViewController<UITableViewDelegate, UITableViewDataSource>
@property(strong, nonatomic)NSArray *coreObject;
@end
