/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/CoreDAV.framework/CoreDAV
 */

@class CoreDAVBulkRequestsItem, NSDictionary;

@interface CoreDAVBulkRequestsSetItem : CoreDAVItem  {
    CoreDAVBulkRequestsItem *_crudItem;
    CoreDAVBulkRequestsItem *_simpleItem;
}

@property(readonly) NSDictionary * dictRepresentation;
@property(retain) CoreDAVBulkRequestsItem * crudItem;
@property(retain) CoreDAVBulkRequestsItem * simpleItem;


- (id)description;
- (id)init;
- (void)dealloc;
- (void)setSimpleItem:(id)arg1;
- (void)setCrudItem:(id)arg1;
- (id)simpleItem;
- (id)crudItem;
- (id)copyParseRules;
- (id)dictRepresentation;

@end
