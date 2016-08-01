//
//  AddItemViewController.h
//  Recipes++
//
//  Created by Mark Meritt on 2016-07-21.
//  Copyright © 2016 Apptist. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface AddItemViewController : UIViewController <UITableViewDataSource, UITableViewDelegate>

@property (weak, nonatomic) IBOutlet UITableView *tableView;
@property (nonatomic, strong) NSArray* tags;
@property (nonatomic) NSManagedObjectContext* context;


@end
