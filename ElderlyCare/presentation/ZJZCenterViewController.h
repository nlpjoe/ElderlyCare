//
//  CenterViewController.h
//  CareElder
//
//  Created by Jzzhou on 16/3/3.
//
//

#import <UIKit/UIKit.h>

@interface ZJZCenterViewController : UIViewController <UITableViewDataSource, UITableViewDelegate>

@property (nonatomic, strong) UITableView *tableView;

@end