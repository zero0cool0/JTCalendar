//
//  JTHorizontalCalendar.h
//  JTCalendar
//
//  Created by Jonathan Tribouharet
//

#import <UIKit/UIKit.h>

#import <JTCalendar/JTContent.h>

@interface JTHorizontalCalendarView : UIScrollView<JTContent>

@property (nonatomic, weak) JTCalendarManager *manager;

@property (nonatomic) NSDate *date;

/*!
 * Must be call if override the class
 */
- (void)commonInit;

@end
