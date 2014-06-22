//
//  NearbyVenuesViewController.h
//  Foursquare2-iOS
//
//  Created by Constantine Fry on 1/20/13.
//
//

#import <UIKit/UIKit.h>

@class NearbyVenuesViewController;
@class FSVenue;

@protocol NearbyVenuesViewControllerDelegate <NSObject>

- (void)nearbyVenuesViewController:(NearbyVenuesViewController *)nearbyVenuesViewController didSelectVenue:(FSVenue *)venue;
- (void)dismissNearbyVenuesViewController:(NearbyVenuesViewController *)nearbyVenuesViewController;

@end

@interface NearbyVenuesViewController :UITableViewController

@property (weak, nonatomic) id <NearbyVenuesViewControllerDelegate> venueDelegate;

@end
