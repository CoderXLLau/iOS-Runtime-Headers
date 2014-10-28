/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

@class HDSQLiteDatabase, HDSQLiteQueryDescriptor;

@interface HDSQLiteQuery : NSObject {
    HDSQLiteDatabase *_database;
    HDSQLiteQueryDescriptor *_descriptor;
}

@property(readonly) int countOfEntities;
@property(readonly) HDSQLiteDatabase * database;
@property(readonly) HDSQLiteQueryDescriptor * queryDescriptor;

- (id)_newSelectSQLWithProperties:(id)arg1;
- (void)bindToSelectStatement:(struct sqlite3_stmt { }*)arg1 bindingIndex:(inout int*)arg2;
- (id)copyEntityIdentifiers;
- (id)copySelectSQLWithProperties:(id)arg1;
- (int)countOfEntities;
- (BOOL)createTemporaryTableWithName:(id)arg1 properties:(id)arg2;
- (id)database;
- (void)dealloc;
- (BOOL)deleteAllEntities;
- (void)enumerateEntitiesUsingBlock:(id)arg1;
- (void)enumeratePersistentIDsAndProperties:(id)arg1 usingBlock:(id)arg2;
- (void)enumeratePersistentIDsUsingBlock:(id)arg1;
- (id)initWithDatabase:(id)arg1 descriptor:(id)arg2;
- (id)queryDescriptor;
- (BOOL)setValuesForAllEntitiesWithDictionary:(id)arg1;

@end