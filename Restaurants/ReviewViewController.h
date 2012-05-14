//
//  ReviewViewController.h
//  Restaurants
//

#import <UIKit/UIKit.h>
#import "Restaurant.h"
#import "REVIEW.H"


@interface ReviewViewController : UITableViewController
{
    Restaurant* restaurant;
    Review* bestReview;
}

@property(readwrite, strong) Restaurant* restaurant;
@property(readwrite, strong) Review* bestReview;


@end
