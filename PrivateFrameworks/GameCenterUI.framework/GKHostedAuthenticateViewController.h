/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GameCenterUI.framework/GameCenterUI
 */

@interface GKHostedAuthenticateViewController : UIViewController <GKAuthenticateViewController, GKExtensionParentViewControllerProtocol> {
    id /* block */  _completionHandler;
    BOOL  _disablesSignIn;
    id /* block */  _dismissCompletionHandler;
    NSError * _error;
    GKAuthenticateHostViewController * _extensionHostViewController;
    int  _mode;
    id /* block */  _remoteViewReadyHandler;
    BOOL  _rotationLocked;
}

@property (nonatomic, copy) id /* block */ completionHandler;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) BOOL disablesSignIn;
@property (nonatomic, copy) id /* block */ dismissCompletionHandler;
@property (nonatomic, retain) NSError *error;
@property (nonatomic, retain) GKAuthenticateHostViewController *extensionHostViewController;
@property (readonly) unsigned int hash;
@property (nonatomic) int mode;
@property (nonatomic, copy) id /* block */ remoteViewReadyHandler;
@property (getter=isRotationLocked, nonatomic) BOOL rotationLocked;
@property (readonly) Class superclass;

+ (BOOL)_preventsAppearanceProxyCustomization;

- (void)_setupChildViewController;
- (void)_setupExtensionHostViewController;
- (BOOL)automaticallyForwardAppearanceAndRotationMethodsToChildViewControllers;
- (id /* block */)completionHandler;
- (void)continueWithMode:(int)arg1;
- (void)dealloc;
- (BOOL)disablesSignIn;
- (id /* block */)dismissCompletionHandler;
- (void)dismissViewControllerAnimated:(BOOL)arg1 completion:(id /* block */)arg2;
- (id)error;
- (void)extensionDidFinishWithError:(id)arg1;
- (id)extensionHostViewController;
- (void)finishAuthenticationWithError:(id)arg1;
- (id)init;
- (BOOL)isRotationLocked;
- (int)mode;
- (id /* block */)remoteViewReadyHandler;
- (void)setCompletionHandler:(id /* block */)arg1;
- (void)setDisablesSignIn:(BOOL)arg1;
- (void)setDismissCompletionHandler:(id /* block */)arg1;
- (void)setError:(id)arg1;
- (void)setExtensionHostViewController:(id)arg1;
- (void)setMode:(int)arg1;
- (void)setRemoteViewReadyHandler:(id /* block */)arg1;
- (void)setRotationLocked:(BOOL)arg1;
- (BOOL)shouldAutomaticallyForwardAppearanceMethods;
- (BOOL)shouldAutomaticallyForwardRotationMethods;
- (BOOL)shouldAutorotate;
- (void)showPasswordChangeAlertWithURL:(id)arg1;
- (void)viewWillAppear:(BOOL)arg1;

@end
