/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/FrontBoard.framework/FrontBoard
 */

@class NSMutableSet, NSObject<OS_dispatch_queue>;

@interface FBPreferences : NSObject {
    NSMutableSet *_enabledLogNames;
    NSObject<OS_dispatch_queue> *_queue;
}

+ (id)sharedInstance;

- (id)_extractEnabledLoggersFromPreferenceDomain:(id)arg1;
- (void)_queue_reload;
- (void)dealloc;
- (id)description;
- (id)enabledLogNames;
- (id)init;
- (BOOL)isLogEnabled:(id)arg1;
- (void)reload;

@end