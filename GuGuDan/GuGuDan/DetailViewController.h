//
//  DetailViewController.h
//  GuGuDan
//
//  Created by hdk on 2014. 7. 17..
//  Copyright (c) 2014년 Kevin Kwon. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface DetailViewController : UIViewController

@property (strong, nonatomic) id detailItem;

@property (weak, nonatomic) IBOutlet UILabel *detailDescriptionLabel;
@end
