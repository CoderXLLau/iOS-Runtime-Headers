/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
 */

@class UITableView, EKSource, <EKStyleProvider>, EKEventStore, EKCalendar, <EKCalendarEditorDelegate>, NSArray;

@interface EKCalendarEditor : UIViewController <EKCalendarEditItemDelegate> {
    int _allowedEntityTypes;
    EKCalendar *_calendar;
    <EKCalendarEditorDelegate> *_delegate;
    NSArray *_editItems;
    EKEventStore *_eventStore;
    EKSource *_source;
    <EKStyleProvider> *_styleProvider;
    UITableView *_tableView;
}

@property(retain) EKCalendar * calendar;
@property <EKCalendarEditorDelegate> * delegate;
@property(retain) EKEventStore * eventStore;
@property(retain) <EKStyleProvider> * styleProvider;

- (void)_deleteCalendar;
- (void)_deleteClicked:(id)arg1;
- (id)_editItems;
- (void)_presentValidationAlert:(id)arg1;
- (BOOL)_shouldShowDeleteButton;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(int)arg2;
- (id)calendar;
- (void)calendarChanged:(id)arg1;
- (void)calendarItemStartedEditing:(id)arg1;
- (void)cancel:(id)arg1;
- (struct CGSize { float x1; float x2; })contentSizeForViewInPopover;
- (void)dealloc;
- (id)delegate;
- (void)done:(id)arg1;
- (id)eventStore;
- (id)initWithCalendar:(id)arg1 eventStore:(id)arg2 allowedEntityTypes:(int)arg3;
- (id)initWithSource:(id)arg1 eventStore:(id)arg2 allowedEntityTypes:(int)arg3;
- (void)loadView;
- (int)numberOfSectionsInTableView:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (void)setCalendar:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setEventStore:(id)arg1;
- (void)setStyleProvider:(id)arg1;
- (void)setupForCalendar;
- (id)styleProvider;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2;
- (id)tableView:(id)arg1 titleForHeaderInSection:(int)arg2;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewDidLoad;
- (void)viewDidUnload;

@end