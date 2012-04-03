//
//  Restaurant.m
//  Restaurants
//

#import "Restaurant.h"


@implementation Restaurant
@synthesize address, name, cuisineType, yearOpened, reviewerName, score, text, numberOfHelpfulRatings, numberOfUnhelpfulRatings;


-(int)age
{
    return 2012 - yearOpened;
}

@end
