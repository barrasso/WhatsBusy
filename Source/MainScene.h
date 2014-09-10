//
//  MainScene.h
//  WHATS BUSY
//
//  Created by Mrk on 09/01/14.
//  Copyright (c) 2014 Mark Barrasso. All rights reserved.
//

#import "CCNode.h"

@interface MainScene : CCNode <CCTableViewDataSource>

// Boolean flag to check if popup is open
@property (nonatomic, assign) BOOL isPopupOpen;

// Toggle boolean flag
- (void)togglePopupBool;

@end
