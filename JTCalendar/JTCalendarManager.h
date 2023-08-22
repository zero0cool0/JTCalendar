//
//  JTCalendarManager.h
//  JTCalendar
//
//  Created by Jonathan Tribouharet
//

#import <UIKit/UIKit.h>

#import <JTCalendar/JTCalendarDelegate.h>

#import <JTCalendar/JTContent.h>
#import <JTCalendar/JTMenu.h>

#import <JTCalendar/JTDateHelper.h>
#import <JTCalendar/JTCalendarSettings.h>

#import <JTCalendar/JTCalendarDelegateManager.h>
#import <JTCalendar/JTCalendarScrollManager.h>

@interface JTCalendarManager : NSObject

@property (nonatomic, weak, nullable) id<JTCalendarDelegate> delegate;

@property (nonatomic, weak) UIView<JTMenu> * _Nullable menuView;
@property (nonatomic, weak) UIScrollView<JTContent> * _Nullable contentView;

@property (nonatomic, readonly) JTDateHelper * _Nullable dateHelper;
@property (nonatomic, readonly) JTCalendarSettings * _Nullable settings;

// Intern methods

@property (nonatomic, readonly) JTCalendarDelegateManager * _Nullable delegateManager;
@property (nonatomic, readonly) JTCalendarScrollManager * _Nullable scrollManager;

- (instancetype _Nullable )initWithLocale:(NSLocale *_Nullable)locale andTimeZone:(NSTimeZone *_Nullable)timeZone;

- (NSDate *_Nonnull)date;
- (void)setDate:(NSDate *_Nullable)date;
- (void)reload;


@end
