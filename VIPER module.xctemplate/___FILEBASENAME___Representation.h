//
//  ___FILENAME___
//  ___PROJECTNAME___
//
//  Created by ___FULLUSERNAME___ on ___DATE___.
//___COPYRIGHT___
//

#import <Foundation/Foundation.h>

/**
 * This interface has to be implemented for configuring modules for one way.
 */
#import "___VARIABLE_routerCustomProtocolName___.h"

@protocol ___FILEBASENAMEASIDENTIFIER___PresenterInterface;
@protocol ___FILEBASENAMEASIDENTIFIER___RouterInterface;

/**
 * View Delegate. Must be supported by Presenter
 */
@protocol ___FILEBASENAMEASIDENTIFIER___ViewDelegate <NSObject>

@end

/**
 * View Interface. Implemented by View, and connected to Presenter Interface.
 */
@protocol ___FILEBASENAMEASIDENTIFIER___ViewInterface <NSObject>

@property (nonatomic, strong) id<___FILEBASENAMEASIDENTIFIER___ViewDelegate> delegate;

@end

/**
 * Interactor Delegate. Must be supported by Presenter.
 */
@protocol ___FILEBASENAMEASIDENTIFIER___InteractorDelegate <NSObject>

@end

/**
 * Interactor Interface. Implemented by Interactor, and connected to Presenter Interface.
 */
@protocol ___FILEBASENAMEASIDENTIFIER___InteractorInterface <NSObject>

@property (nonatomic, weak) id<___FILEBASENAMEASIDENTIFIER___InteractorDelegate> delegate;

@end

/**
 * Presenter Interface. Support transmitting data between Interactor and View.
 */
@protocol ___FILEBASENAMEASIDENTIFIER___PresenterInterface <___FILEBASENAMEASIDENTIFIER___InteractorDelegate, ___FILEBASENAMEASIDENTIFIER___ViewDelegate>

@property (nonatomic, weak) id<___FILEBASENAMEASIDENTIFIER___ViewInterface> viewInterface;

@property (nonatomic, strong) id<___FILEBASENAMEASIDENTIFIER___RouterInterface> routerInterface;
@property (nonatomic, strong) id<___FILEBASENAMEASIDENTIFIER___InteractorInterface> interactorInterface;

@end

/**
 * Router Interface. Implemented by Router, and connected to Presenter Interface.
 */
@protocol ___FILEBASENAMEASIDENTIFIER___RouterInterface <___VARIABLE_routerCustomProtocolName___>

@end

