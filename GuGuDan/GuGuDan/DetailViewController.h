//
//  DetailViewController.h
//  GuGuDan
//
//  Created by hdk on 2014. 7. 17..
//  Copyright (c) 2014년 Kevin Kwon. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface DetailViewController : UIViewController

@property (assign, nonatomic) NSInteger dan;
@property (weak, nonatomic) IBOutlet UITableView *tableView;
@end
