//
//  MasterViewController.h
//  Swarmify
//
//  Created by RomeoFlauta on 6/10/14.
//  Copyright (c) 2014 CodeMagnus. All rights reserved.
//

#import <UIKit/UIKit.h>

#import <CoreData/CoreData.h>

@interface MasterViewController : UITableViewController <NSFetchedResultsControllerDelegate>

@property (strong, nonatomic) NSFetchedResultsController *fetchedResultsController;
@property (strong, nonatomic) NSManagedObjectContext *managedObjectContext;

@end
