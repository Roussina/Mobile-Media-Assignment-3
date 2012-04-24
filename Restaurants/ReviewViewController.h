//
//  ReviewViewController.h
//  Restaurants
//


#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>
#import "Restaurant.h"

@interface ReviewViewController : UITableViewController
{
    Restaurant* restaurant;
}

@property(readwrite, strong) Restaurant* restaurant;


@end
