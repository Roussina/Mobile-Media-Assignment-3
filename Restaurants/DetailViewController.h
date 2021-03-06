//
//  DetailViewController.h
//  Restaurants
//
//

#import <UIKit/UIKit.h>
#import "Restaurant.h"
#import "Review.h"
#import "ReviewViewController.h"

@interface DetailViewController : UIViewController
{
    Restaurant* restaurant;
    Review* bestReview;
}


@property (weak, nonatomic) IBOutlet UILabel *addressLabel;
@property (weak, nonatomic) IBOutlet UINavigationItem *navigationHeader;
@property (weak, nonatomic) IBOutlet UILabel *cuisineLabel;
@property (weak, nonatomic) IBOutlet UILabel *ageLabel;
@property (weak, nonatomic) IBOutlet UILabel *helpfulReviewPercentageLabel;
@property (weak, nonatomic) IBOutlet UILabel *helpfulReviewLabel;

@property (weak, nonatomic) IBOutlet UIImageView *star1;
@property (weak, nonatomic) IBOutlet UIImageView *star2;
@property (weak, nonatomic) IBOutlet UIImageView *star3;
@property (weak, nonatomic) IBOutlet UIImageView *star4;
@property (weak, nonatomic) IBOutlet UIImageView *star5;
@property (weak, nonatomic) IBOutlet UILabel *reviewLabel;
@property (readwrite, strong) Restaurant* restaurant;
@property (readwrite, strong) Review* bestReview;
@property (weak, nonatomic) IBOutlet UIButton *showAllReviews;
@property (weak, nonatomic) IBOutlet UIBarButtonItem *favoriteButton;
- (IBAction)markAsFavorite:(id)sender;


@end
