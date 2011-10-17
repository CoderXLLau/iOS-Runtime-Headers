/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

@class NSURLRequest, <SSDownloadManifestRequestDelegate>;

@interface SSDownloadManifestRequest : SSRequest <SSCoding> {
    int _manifestFormat;
    BOOL _shouldHideUserPrompts;
    NSURLRequest *_urlRequest;
}

@property(readonly) NSURLRequest * URLRequest;
@property <SSDownloadManifestRequestDelegate> * delegate;
@property BOOL shouldHideUserPrompts;
@property int manifestFormat;


- (void)setShouldHideUserPrompts:(BOOL)arg1;
- (BOOL)shouldHideUserPrompts;
- (int)manifestFormat;
- (BOOL)issueRequestForIdentifier:(id)arg1 error:(id*)arg2;
- (BOOL)handleFinishResponse:(id)arg1 error:(id*)arg2;
- (void)_sendResponseToDelegate:(id)arg1;
- (void*)copyXPCEncoding;
- (id)initWithXPCEncoding:(void*)arg1;
- (id)copyPropertyListEncoding;
- (id)initWithPropertyListEncoding:(id)arg1;
- (id)initWithURLRequest:(id)arg1;
- (id)init;
- (void)dealloc;
- (void)setManifestFormat:(int)arg1;
- (id)URLRequest;

@end