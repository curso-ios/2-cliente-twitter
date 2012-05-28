//
//  TimelineTableController.h
//  twitter-client
//
//  Created by Endika Gutiérrez Salas on 5/27/12.
//  Copyright (c) 2012 __MyCompanyName__. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface TimelineTableController : UITableViewController <NSURLConnectionDelegate, NSURLConnectionDataDelegate> {
    NSArray *_timeline;
}

@end
