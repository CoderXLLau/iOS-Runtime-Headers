/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ToneKit.framework/ToneKit
 */

@interface TKTonePickerController : NSObject {
    BOOL  __behavesAsRingtonePicker;
    NSArray * __classicAlertToneIdentifiers;
    NSArray * __classicRingtoneIdentifiers;
    unsigned int  __selectedClassicAlertToneIndex;
    unsigned int  __selectedClassicRingtoneIndex;
    NSIndexPath * __selectedToneIndexPath;
    int  _alertType;
    NSMutableArray * _cachedClassicAlertTonePickerItems;
    NSMutableArray * _cachedClassicRingtonePickerItems;
    NSMutableArray * _cachedPickerRowItems;
    NSMutableArray * _cachedPickerSectionItems;
    NSString * _defaultToneIdentifier;
    BOOL  _defaultToneIdentifierWasExplicitlySet;
    <TKTonePickerControllerDelegate> * _delegate;
    BOOL  _hasLoadedTonesOnce;
    BOOL  _ignoreMute;
    BOOL  _mediaAtTop;
    BOOL  _noneAtTop;
    NSString * _noneString;
    TLAlert * _playingAlert;
    BOOL  _selectedToneWasExplicitlySetToDefaultTone;
    NSString * _selectedVibrationIdentifier;
    BOOL  _selectedVibrationIdentifierWasExplicitlySet;
    BOOL  _shouldCachePickerItems;
    BOOL  _showsDefault;
    BOOL  _showsIgnoreMute;
    BOOL  _showsNone;
    BOOL  _showsNoneWasExplicitlySet;
    BOOL  _showsNothingSelected;
    BOOL  _showsToneStore;
    BOOL  _showsVibrations;
    NSMutableArray * _toneGroupLists;
    NSMutableArray * _toneGroupNames;
    TLToneManager * _toneManager;
    unsigned int  _toneTypes;
    NSString * _topic;
}

@property (nonatomic, readonly) NSString *_alertTonesPlistName;
@property (setter=_setBehavesAsRingtonePicker:, nonatomic) BOOL _behavesAsRingtonePicker;
@property (setter=_setClassicAlertToneIdentifiers:, nonatomic, retain) NSArray *_classicAlertToneIdentifiers;
@property (setter=_setClassicRingtoneIdentifiers:, nonatomic, retain) NSArray *_classicRingtoneIdentifiers;
@property (nonatomic, readonly) NSIndexPath *_indexPathForDefaultGroup;
@property (nonatomic, readonly) NSIndexPath *_indexPathForFirstToneGroup;
@property (nonatomic, readonly) NSIndexPath *_indexPathForMediaGroup;
@property (nonatomic, readonly) NSIndexPath *_indexPathForNone;
@property (nonatomic, readonly) NSIndexPath *_indexPathForToneStoreGroup;
@property (nonatomic, readonly) NSIndexPath *_indexPathForVibrationGroup;
@property (nonatomic, readonly) NSString *_ringtonesPlistName;
@property (setter=_setSelectedClassicAlertToneIndex:, nonatomic) unsigned int _selectedClassicAlertToneIndex;
@property (setter=_setSelectedClassicRingtoneIndex:, nonatomic) unsigned int _selectedClassicRingtoneIndex;
@property (setter=_setSelectedToneIndexPath:, nonatomic, retain) NSIndexPath *_selectedToneIndexPath;
@property (setter=_setShouldCachePickerItems:, nonatomic) BOOL _shouldCachePickerItems;
@property (setter=_setToneManager:, nonatomic, retain) TLToneManager *_toneManager;
@property (nonatomic, readonly) TKTonePickerItem *_topLevelSelectedTonePickerItem;
@property (nonatomic, readonly) int alertType;
@property (nonatomic, readonly) BOOL canShowStore;
@property (nonatomic, copy) NSString *defaultToneIdentifier;
@property (nonatomic) <TKTonePickerControllerDelegate> *delegate;
@property (nonatomic) BOOL ignoreMute;
@property (nonatomic, readonly) NSIndexPath *indexPathForSelectedTone;
@property (getter=isMediaAtTop, nonatomic) BOOL mediaAtTop;
@property (getter=isNoneAtTop, nonatomic) BOOL noneAtTop;
@property (nonatomic, copy) NSString *noneString;
@property (nonatomic, copy) NSString *selectedToneIdentifier;
@property (nonatomic, readonly) TKTonePickerItem *selectedTonePickerItem;
@property (nonatomic, copy) NSString *selectedVibrationIdentifier;
@property (nonatomic) BOOL showsDefault;
@property (nonatomic) BOOL showsIgnoreMute;
@property (nonatomic) BOOL showsNone;
@property (nonatomic) BOOL showsNothingSelected;
@property (nonatomic) BOOL showsToneStore;
@property (nonatomic) BOOL showsVibrations;
@property (nonatomic, copy) NSString *topic;

- (void).cxx_destruct;
- (void)_addRingtonesInDirectory:(id)arg1 toArray:(id)arg2 fileExtension:(id)arg3;
- (id)_alertTonesPlistName;
- (id)_annotatedNameForToneIdentifier:(id)arg1;
- (BOOL)_behavesAsRingtonePicker;
- (void)_cachePickerRowItem:(id)arg1 atIndex:(int)arg2 inSectionForItem:(id)arg3;
- (void)_cachePickerRowItem:(id)arg1 forSection:(int)arg2;
- (void)_cacheToneClassicsPickerItem:(id)arg1 forIndex:(int)arg2 headerKind:(unsigned int)arg3;
- (id)_cachedPickerItemForSection:(int)arg1;
- (id)_cachedPickerRowItemAtIndex:(int)arg1 inSectionForItem:(id)arg2;
- (id)_cachedToneClassicsPickerItemForIndex:(int)arg1 headerKind:(unsigned int)arg2;
- (id)_classicAlertToneIdentifiers;
- (id)_classicRingtoneIdentifiers;
- (void)_didFinishPlayingAlert:(id)arg1;
- (void)_didReloadTones;
- (void)_didSelectMediaItemWithIdentifier:(id)arg1;
- (BOOL)_didSelectToneClassicsPickerItem:(id)arg1;
- (void)_didSelectToneWithIdentifier:(id)arg1;
- (void)_didUpdateCheckedStatus:(BOOL)arg1 ofPickerItemForRowAtIndexPath:(id)arg2;
- (void)_didUpdateCheckedStatus:(BOOL)arg1 ofToneClassicsPickerItem:(id)arg2;
- (void)_didUpdateDetailText:(id)arg1 ofPickerItemForRowAtIndexPath:(id)arg2;
- (void)_goToStore;
- (id)_identifierAtIndexPath:(id)arg1 isMediaItem:(BOOL*)arg2;
- (id)_identifierOfMediaItemAtIndex:(unsigned int)arg1;
- (id)_identifierOfSelectedClassicAlertTone;
- (id)_identifierOfSelectedClassicRingtone;
- (id)_identifierOfToneAtIndexPath:(id)arg1;
- (unsigned int)_indexOfMediaItemWithIdentifier:(id)arg1;
- (id)_indexPathForDefaultGroup;
- (id)_indexPathForFirstToneGroup;
- (id)_indexPathForIgnoreMuteGroup;
- (id)_indexPathForMediaGroup;
- (id)_indexPathForNone;
- (id)_indexPathForToneStoreGroup;
- (id)_indexPathForToneWithIdentifier:(id)arg1;
- (id)_indexPathForVibrationGroup;
- (void)_invalidatePickerItemCaches;
- (BOOL)_isDefaultGroupAtIndexPath:(id)arg1;
- (BOOL)_isDividerAtIndexPath:(id)arg1;
- (BOOL)_isIgnoreMuteGroupAtIndexPath:(id)arg1;
- (BOOL)_isMediaAtTop;
- (BOOL)_isMediaGroupAtIndexPath:(id)arg1;
- (BOOL)_isNoneGroupAtIndexPath:(id)arg1;
- (BOOL)_isToneStoreGroupAtIndexPath:(id)arg1;
- (BOOL)_isVibrationGroupAtIndexPath:(id)arg1;
- (id)_loadAlertTonesFromPlist;
- (id)_loadRingtonesFromPlist;
- (id)_loadTonesFromPlistNamed:(id)arg1;
- (unsigned int)_mediaItemsCount;
- (id)_nameOfSelectedVibrationIdentifier;
- (id)_pickerRowItemAtIndex:(int)arg1 inSectionForItem:(id)arg2;
- (void)_playToneWithIdentifier:(id)arg1;
- (void)_registerForUserGeneratedVibrationsDidChangeNotification;
- (void)_reloadMediaItems;
- (void)_reloadStateForBasicBehavior;
- (void)_reloadTones;
- (void)_reloadTonesForExternalChange:(BOOL)arg1;
- (void)_resetSelectedClassicAlertToneIndex;
- (void)_resetSelectedClassicRingtoneIndex;
- (void)_resetSelectedVibrationIdentifierForcingUpdatingVibrationName:(BOOL)arg1;
- (id)_ringtonesPlistName;
- (id)_sanitizedSelectedVibrationIdentifierAllowingNilForDefault:(BOOL)arg1;
- (unsigned int)_selectedClassicAlertToneIndex;
- (unsigned int)_selectedClassicRingtoneIndex;
- (id)_selectedIdentifier:(BOOL*)arg1;
- (id)_selectedToneIndexPath;
- (void)_setBehavesAsRingtonePicker:(BOOL)arg1;
- (void)_setClassicAlertToneIdentifiers:(id)arg1;
- (void)_setClassicRingtoneIdentifiers:(id)arg1;
- (void)_setSelectedClassicAlertToneIndex:(unsigned int)arg1;
- (void)_setSelectedClassicRingtoneIndex:(unsigned int)arg1;
- (void)_setSelectedToneIdentifier:(id)arg1 currentlyReloadingTones:(BOOL)arg2;
- (void)_setSelectedToneIndexPath:(id)arg1;
- (void)_setSelectedVibrationIdentifier:(id)arg1 explicitlySet:(BOOL)arg2;
- (void)_setSelectedVibrationIdentifier:(id)arg1 forceUpdatingVibrationName:(BOOL)arg2 explicitlySet:(BOOL)arg3;
- (void)_setShouldCachePickerItems:(BOOL)arg1;
- (void)_setToneManager:(id)arg1;
- (BOOL)_shouldCachePickerItems;
- (BOOL)_showsMedia;
- (void)_sortToneIdentifiersArray:(id)arg1;
- (void)_togglePlayForToneWithIdentifier:(id)arg1;
- (id)_toneClassicsPickerItemAtIndex:(int)arg1 belowTonePickerItem:(id)arg2;
- (id)_toneManager;
- (void)_toneManagerContentsChanged:(id)arg1;
- (id)_topLevelSelectedTonePickerItem;
- (void)_unregisterForUserGeneratedVibrationsDidChangeNotification;
- (void)_updateDetailTextOfVibrationItem;
- (int)alertType;
- (BOOL)canShowStore;
- (void)dealloc;
- (id)defaultToneIdentifier;
- (id)delegate;
- (BOOL)didSelectTonePickerItem:(id)arg1;
- (void)finishedWithPicker;
- (BOOL)ignoreMute;
- (id)indexPathForSelectedTone;
- (id)initWithAlertType:(int)arg1;
- (BOOL)isMediaAtTop;
- (BOOL)isNoneAtTop;
- (id)noneString;
- (int)numberOfSections;
- (id)pickerItemForSection:(int)arg1;
- (id)selectedToneIdentifier;
- (id)selectedTonePickerItem;
- (id)selectedVibrationIdentifier;
- (void)setDefaultToneIdentifier:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setIgnoreMute:(BOOL)arg1;
- (void)setMediaAtTop:(BOOL)arg1;
- (void)setNoneAtTop:(BOOL)arg1;
- (void)setNoneString:(id)arg1;
- (void)setSelectedToneIdentifier:(id)arg1;
- (void)setSelectedVibrationIdentifier:(id)arg1;
- (void)setShowsDefault:(BOOL)arg1;
- (void)setShowsIgnoreMute:(BOOL)arg1;
- (void)setShowsNone:(BOOL)arg1;
- (void)setShowsNothingSelected:(BOOL)arg1;
- (void)setShowsToneStore:(BOOL)arg1;
- (void)setShowsVibrations:(BOOL)arg1;
- (void)setTopic:(id)arg1;
- (BOOL)showsDefault;
- (BOOL)showsIgnoreMute;
- (BOOL)showsNone;
- (BOOL)showsNothingSelected;
- (BOOL)showsToneStore;
- (BOOL)showsVibrations;
- (void)stopPlayingWithFadeOut:(BOOL)arg1;
- (id)topic;

@end
