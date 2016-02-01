/**
 * Copyright (c) 2015-present, Parse, LLC.
 * All rights reserved.
 *
 * This source code is licensed under the BSD-style license found in the
 * LICENSE file in the root directory of this source tree. An additional grant
 * of patent rights can be found in the PATENTS file in the same directory.
 */

#import <Foundation/Foundation.h>


///--------------------------------------
/// @name Errors
///--------------------------------------

#define UAPUnlimAppsErrorDomain @"com.unlimapps.error"

/**
 `PFErrorCode` enum contains all custom error codes that are used as `code` for `NSError` for callbacks on all classes.

 These codes are used when `domain` of `NSError` that you receive is set to `PFParseErrorDomain`.
 */
typedef NS_ENUM(NSInteger, UAPErrorCode) {
    /**
     Internal server error. No information available.
     */
    kUAPErrorInternalServer = 1,
    /**
     The connection to the Parse servers failed.
     */
    kUAPErrorConnectionFailed = 100,
    /**
     Object doesn't exist, or has an incorrect password.
     */
    kUAPErrorObjectNotFound = 101,
    /**
     You tried to find values matching a datatype that doesn't
     support exact database matching, like an array or a dictionary.
     */
    kUAPErrorInvalidQuery = 102,
    /**
     Missing or invalid classname. Classnames are case-sensitive.
     They must start with a letter, and `a-zA-Z0-9_` are the only valid characters.
     */
    kUAPErrorInvalidClassName = 103,
    /**
     Missing object id.
     */
    kUAPErrorMissingObjectId = 104,
    /**
     Invalid key name. Keys are case-sensitive.
     They must start with a letter, and `a-zA-Z0-9_` are the only valid characters.
     */
    kUAPErrorInvalidKeyName = 105,
    /**
     Malformed pointer. Pointers must be arrays of a classname and an object id.
     */
    kUAPErrorInvalidPointer = 106,
    /**
     Malformed json object. A json dictionary is expected.
     */
    kUAPErrorInvalidJSON = 107,
    /**
     Tried to access a feature only available internally.
     */
    kUAPErrorCommandUnavailable = 108,
    /**
     Field set to incorrect type.
     */
    kUAPErrorIncorrectType = 111,
    /**
     Invalid channel name. A channel name is either an empty string (the broadcast channel)
     or contains only `a-zA-Z0-9_` characters and starts with a letter.
     */
    kUAPErrorInvalidChannelName = 112,
    /**
     Invalid device token.
     */
    kUAPErrorInvalidDeviceToken = 114,
    /**
     Push is misconfigured. See details to find out how.
     */
    kUAPErrorPushMisconfigured = 115,
    /**
     The object is too large.
     */
    kUAPErrorObjectTooLarge = 116,
    /**
     That operation isn't allowed for clients.
     */
    kUAPErrorOperationForbidden = 119,
    /**
     The results were not found in the cache.
     */
    kUAPErrorCacheMiss = 120,
    /**
     Keys in `NSDictionary` values may not include `$` or `.`.
     */
    kUAPErrorInvalidNestedKey = 121,
    /**
     Invalid file name.
     A file name can contain only `a-zA-Z0-9_.` characters and should be between 1 and 36 characters.
     */
    kUAPErrorInvalidFileName = 122,
    /**
     Invalid ACL. An ACL with an invalid format was saved. This should not happen if you use `PFACL`.
     */
    kUAPErrorInvalidACL = 123,
    /**
     The request timed out on the server. Typically this indicates the request is too expensive.
     */
    kUAPErrorTimeout = 124,
    /**
     The email address was invalid.
     */
    kUAPErrorInvalidEmailAddress = 125,
    /**
     A unique field was given a value that is already taken.
     */
    kUAPErrorDuplicateValue = 137,
    /**
     Role's name is invalid.
     */
    kUAPErrorInvalidRoleName = 139,
    /**
     Exceeded an application quota. Upgrade to resolve.
     */
    kUAPErrorExceededQuota = 140,
    /**
     Cloud Code script had an error.
     */
    kUAPScriptError = 141,
    /**
     Cloud Code validation failed.
     */
    kUAPValidationError = 142,
    /**
     Product purchase receipt is missing.
     */
    kUAPErrorReceiptMissing = 143,
    /**
     Product purchase receipt is invalid.
     */
    kUAPErrorInvalidPurchaseReceipt = 144,
    /**
     Payment is disabled on this device.
     */
    kUAPErrorPaymentDisabled = 145,
    /**
     The product identifier is invalid.
     */
    kUAPErrorInvalidProductIdentifier = 146,
    /**
     The product is not found in the App Store.
     */
    kUAPErrorProductNotFoundInAppStore = 147,
    /**
     The Apple server response is not valid.
     */
    kUAPErrorInvalidServerResponse = 148,
    /**
     Product fails to download due to file system error.
     */
    kUAPErrorProductDownloadFileSystemFailure = 149,
    /**
     Fail to convert data to image.
     */
    kUAPErrorInvalidImageData = 150,
    /**
     Unsaved file.
     */
    kUAPErrorUnsavedFile = 151,
    /**
     Fail to delete file.
     */
    kUAPErrorFileDeleteFailure = 153,
    /**
     Application has exceeded its request limit.
     */
    kUAPErrorRequestLimitExceeded = 155,
    /**
     Invalid event name.
     */
    kUAPErrorInvalidEventName = 160,
    /**
     Username is missing or empty.
     */
    kUAPErrorUsernameMissing = 200,
    /**
     Password is missing or empty.
     */
    kUAPErrorUserPasswordMissing = 201,
    /**
     Username has already been taken.
     */
    kUAPErrorUsernameTaken = 202,
    /**
     Email has already been taken.
     */
    kUAPErrorUserEmailTaken = 203,
    /**
     The email is missing, and must be specified.
     */
    kUAPErrorUserEmailMissing = 204,
    /**
     A user with the specified email was not found.
     */
    kUAPErrorUserWithEmailNotFound = 205,
    /**
     The user cannot be altered by a client without the session.
     */
    kUAPErrorUserCannotBeAlteredWithoutSession = 206,
    /**
     Users can only be created through sign up.
     */
    kUAPErrorUserCanOnlyBeCreatedThroughSignUp = 207,
    /**
     An existing Facebook account already linked to another user.
     */
    kUAPErrorFacebookAccountAlreadyLinked = 208,
    /**
     An existing account already linked to another user.
     */
    kUAPErrorAccountAlreadyLinked = 208,
    /**
     Error code indicating that the current session token is invalid.
     */
    kUAPErrorInvalidSessionToken = 209,
    kUAPErrorUserIdMismatch = 209,
    /**
     Facebook id missing from request.
     */
    kUAPErrorFacebookIdMissing = 250,
    /**
     Linked id missing from request.
     */
    kUAPErrorLinkedIdMissing = 250,
    /**
     Invalid Facebook session.
     */
    kUAPErrorFacebookInvalidSession = 251,
    /**
     Invalid linked session.
     */
    kUAPErrorInvalidLinkedSession = 251,
};

///--------------------------------------
/// @name Blocks
///--------------------------------------

@class UAPUser;

typedef void (^UAPBooleanResultBlock)(BOOL succeeded, NSError * error);
typedef void (^UAPIntegerResultBlock)(int number, NSError * error);
typedef void (^UAPArrayResultBlock)(NSArray * objects, NSError * error);
typedef void (^UAPSetResultBlock)(NSSet * channels, NSError * error);
typedef void (^UAPUserResultBlock)(UAPUser * user, NSError * error);
typedef void (^UAPDataResultBlock)(NSData * data, NSError * error);
typedef void (^UAPDataStreamResultBlock)(NSInputStream * stream, NSError * error);
typedef void (^UAPFilePathResultBlock)(NSString * filePath, NSError * error);
typedef void (^UAPStringResultBlock)(NSString * string, NSError * error);
typedef void (^UAPIdResultBlock)(id object, NSError * error);
typedef void (^UAPProgressBlock)(int percentDone);




