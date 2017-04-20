/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/TVMLKit.framework/TVMLKit
 */

@interface TVApplicationController : NSObject <IKAppContextDelegate, IKAppDeviceConfig, _TVAppNavigationControllerDelegate> {
    IKAppContext * _appContext;
    IKAppDataStorage * _appLocalStorage;
    _TVMLKitApplication * _application;
    TVApplicationControllerContext * _context;
    <TVApplicationControllerDelegate> * _delegate;
    BOOL  _doLaunchOpenURLHandling;
    int  _interfaceOrientation;
    NSDictionary * _launchOpenURLOptions;
    _TVRootMenuBarController * _menuBarController;
    _TVAppNavigationController * _navigationController;
    NSDictionary * _openURLReloadOptions;
    NSDictionary * _openURLResumeOptions;
    BOOL  _popViewControllerOnBackground;
    BOOL  _reloadInProgress;
    BOOL  _reloadOnResume;
    NSDate * _reloadOnResumeBackgroundedDate;
    double  _reloadOnResumeMinInterval;
    NSXPCListener * _serviceListener;
    BOOL  _suspended;
    IKAppTabBar * _tabBar;
    UIWindow * _window;
}

@property (nonatomic, readonly) UINavigationController *_currentNavigationController;
@property (nonatomic, readonly) TVApplicationControllerContext *context;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, readonly) <TVApplicationControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (nonatomic, readonly) UINavigationController *navigationController;
@property (nonatomic, readonly) UIViewController *rootViewController;
@property (readonly) Class superclass;
@property (nonatomic, readonly) UIWindow *window;

+ (id)_jsLaunchOptionsWithApplicationOptions:(id)arg1;
+ (void)initialize;

- (void).cxx_destruct;
- (void)_applicationDidBecomeActiveNotification:(id)arg1;
- (void)_applicationDidEnterBackgroundNotification:(id)arg1;
- (void)_applicationWillResignActiveNotification:(id)arg1;
- (void)_applicationWillTerminateNotification:(id)arg1;
- (id)_currentNavigationController;
- (BOOL)_hasReloadOnResumeMinIntervalPassed;
- (void)_launchApp;
- (void)_openURLControllerDidDisplay:(id)arg1;
- (void)_openURLControllerHandler:(BOOL)arg1;
- (void)_openURLOnAppLaunchControllerDidDisplay:(id)arg1;
- (void)_reloadControllerDidDisplay:(id)arg1;
- (BOOL)_shouldReloadOnResume;
- (void)_statusBarOrientationDidChange:(id)arg1;
- (void)appContext:(id)arg1 didFailWithError:(id)arg2;
- (void)appContext:(id)arg1 didStartWithOptions:(id)arg2;
- (void)appContext:(id)arg1 didStopWithOptions:(id)arg2;
- (void)appContext:(id)arg1 evaluateAppJavaScriptInContext:(id)arg2;
- (void)appContext:(id)arg1 needsReloadWithUrgency:(unsigned int)arg2 options:(id)arg3;
- (BOOL)appContext:(id)arg1 validateDOMDocument:(id)arg2 inContext:(id)arg3 error:(id*)arg4;
- (BOOL)appNavigationController:(id)arg1 shouldDismissShroudForDocument:(id)arg2;
- (BOOL)appNavigationController:(id)arg1 shouldIgnoreDismissalForViewController:(id)arg2;
- (BOOL)appNavigationController:(id)arg1 shouldOverrideModalBehaviorForDocument:(id)arg2 andExistingDocument:(id)arg3;
- (id)context;
- (void)dealloc;
- (id)delegate;
- (id)deviceConfigForContext:(id)arg1;
- (void)evaluateInJavaScriptContext:(id /* block */)arg1 completion:(id /* block */)arg2;
- (id)init;
- (id)initWithContext:(id)arg1 window:(id)arg2 delegate:(id)arg3;
- (BOOL)isTimeZoneSet;
- (BOOL)jsOpenURL:(id)arg1 options:(id)arg2;
- (id)modalControllerForContext:(id)arg1;
- (id)navigationController;
- (id)navigationControllerForContext:(id)arg1;
- (BOOL)openURL:(id)arg1 options:(id)arg2;
- (unsigned int)preferredVideoFormat;
- (unsigned int)preferredVideoPreviewFormat;
- (void)reload;
- (id)rootViewController;
- (struct CGSize { float x1; float x2; })screenSize;
- (void)stop;
- (id)storeFrontCountryCode;
- (id)systemLanguage;
- (id)tabBarForContext:(id)arg1;
- (id)timeZone;
- (id)window;

@end