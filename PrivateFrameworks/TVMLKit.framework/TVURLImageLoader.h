/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/TVMLKit.framework/TVMLKit
 */

@interface TVURLImageLoader : NSObject <ISURLOperationDelegate, TVImageLoader> {
    BOOL  _imageRotationEnabled;
    ISOperationQueue * imageLoadQueue;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (getter=isImageRotationEnabled, nonatomic) BOOL imageRotationEnabled;
@property (readonly) Class superclass;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (void)cancelLoad:(id)arg1;
- (id)imageKeyForObject:(id)arg1;
- (id)init;
- (BOOL)isImageRotationEnabled;
- (id)loadImageForObject:(id)arg1 scaleToSize:(struct CGSize { float x1; float x2; })arg2 cropToFit:(BOOL)arg3 completionHandler:(id /* block */)arg4;
- (void)operation:(id)arg1 failedWithError:(id)arg2;
- (void)operation:(id)arg1 finishedWithOutput:(id)arg2;
- (void)setImageRotationEnabled:(BOOL)arg1;

@end
