//
//  MasterViewController.h
//  Restaurants
//
//

#import "DetailViewController.h"
#import <UIKit/UIKit.h>
#import "Restaurant.h"

@interface MasterViewController : UITableViewController
{
    NSMutableArray *restaurants;
}

@property (readwrite, strong) NSMutableArray* restaurants;

@end
