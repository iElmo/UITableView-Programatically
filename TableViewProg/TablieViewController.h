//
//  TablieViewController.h
//  TableViewProg
//
//  Created by Dan on 15/02/2012.
//  Copyright (c) 2012 __MyCompanyName__. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface TablieViewController : UIViewController <UITableViewDataSource, UITableViewDelegate>

@property (nonatomic, retain) NSArray *theArray;
@property (nonatomic, retain) UITableView *theTableView;

@end
