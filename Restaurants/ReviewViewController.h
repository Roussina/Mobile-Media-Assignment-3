//
//  ReviewViewController.h
//  Restaurants
//
//  Created by Roussina Valkova on 4/16/12.
//  Copyright (c) 2012 __MyCompanyName__. All rights reserved.
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
