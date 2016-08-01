//
//  AddItemViewController.m
//  Recipes++
//
//  Created by Mark Meritt on 2016-07-21.
//  Copyright © 2016 Apptist. All rights reserved.
//

#import "AddItemViewController.h"
#import "AppDelegate.h"
#import "TagCell.h"
#import "Tag.h"

@interface AddItemViewController ()

@end

@implementation AddItemViewController

NSFetchRequest* request;

- (void)viewDidLoad {
    [super viewDidLoad];
    
    
    self.tableView.dataSource = self;
    self.tableView.delegate = self;
    
    self.context = ((AppDelegate*)[[UIApplication sharedApplication] delegate]).managedObjectContext;
    // core data fetch and populate your array with the returned data
    
    request = [[NSFetchRequest alloc] init];
    [self.context executeRequest:request error:nil];
    
    
}

-(NSInteger)numberOfSectionsInTableView:(UITableView *)tableView{
    return 1;
}

-(NSInteger)tableView:(UITableView *)tableView numberOfRowsInSection:(NSInteger)section{
    return _tags.count;
}

-(UITableViewCell *)tableView:(UITableView *)tableView cellForRowAtIndexPath:(NSIndexPath *)indexPath{
    TagCell *cell = [tableView dequeueReusableCellWithIdentifier:@"TagCell" forIndexPath:indexPath];
    
    NSArray *array = [_tags allObjects];
    
    Tag *tag = [array objectAtIndex:indexPath.row];
    
    cell.titleLbl.text = tag.tagName;
    
    return cell;
}

/*
#pragma mark - Navigation

// In a storyboard-based application, you will often want to do a little preparation before navigation
- (void)prepareForSegue:(UIStoryboardSegue *)segue sender:(id)sender {
    // Get the new view controller using [segue destinationViewController].
    // Pass the selected object to the new view controller.
}
*/

@end
