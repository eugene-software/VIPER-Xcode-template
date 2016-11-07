//
//  ___FILENAME___
//  ___PROJECTNAME___
//
//  Created by ___FULLUSERNAME___ on ___DATE___.
//___COPYRIGHT___
//

#import "___FILEBASENAMEASIDENTIFIER___Router.h"
#import "___FILEBASENAMEASIDENTIFIER___VC.h"

#import "___FILEBASENAMEASIDENTIFIER___Presenter.h"
#import "___FILEBASENAMEASIDENTIFIER___Interactor.h"

@interface ___FILEBASENAMEASIDENTIFIER___Router ()

@property (weak, nonatomic) IBOutlet ___FILEBASENAMEASIDENTIFIER___VC *___FILEBASENAMEASIDENTIFIER___VC;

@end

@implementation ___FILEBASENAMEASIDENTIFIER___Router


- (void)awakeFromNib
{
    [super awakeFromNib];
    
    [self configureModule];
}

- (UIViewController *)moduleController
{
    return ____FILEBASENAMEASIDENTIFIER___VC;
}

- (instancetype)configureModule
{
    id<___FILEBASENAMEASIDENTIFIER___InteractorInterface> interactor = [___FILEBASENAMEASIDENTIFIER___Interactor new];
    id<___FILEBASENAMEASIDENTIFIER___PresenterInterface> presenter   = [___FILEBASENAMEASIDENTIFIER___Presenter new];
    
    // Prepare view
    [____FILEBASENAMEASIDENTIFIER___VC setDelegate:presenter];
    
    // Prepare interactor
    [interactor setDelegate:presenter];
    
    // Prepare presenter
    [presenter setInteractorInterface:interactor];
    [presenter setRouterInterface:self];
    [presenter setViewInterface:____FILEBASENAMEASIDENTIFIER___VC];
    
    return self;
}

@end
