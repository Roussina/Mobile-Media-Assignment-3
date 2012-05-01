//
//  Restaurant.h
//  Restaurants
//

#import <UIKit/UIKit.h>
#import <Foundation/Foundation.h>
#import "Review.h"

@interface Restaurant : NSObject
{
    
    NSString* address;
    NSString* name;
    NSString* cuisineType;
    NSString* reviewerName;
    NSString* text;
    int yearOpened;
    int score; 
    int numberOfHelpfulRatings;
    int numberOfUnhelpfulRatings;
    int bestReview;
    
    NSArray* reviews;
    
    
}

@property(readwrite, strong) NSString* address;
@property(readwrite, strong) NSString* name;
@property(readwrite, strong) NSString* cuisineType;
@property(readwrite, strong) NSString* reviewerName;
@property(readwrite, strong) NSString* text;
@property(readwrite) int yearOpened;
@property(readwrite) int score;
@property(readwrite) int numberOfHelpfulRatings;
@property(readwrite) int numberOfUnhelpfulRatings;
@property(readwrite) int bestReview;

@property(readwrite, strong) NSArray* reviews;

-(int)age;
-(Review*) mostHelpfulReview;
-(float) averageCustomerReview;
-(BOOL) isFavorite;


@end
