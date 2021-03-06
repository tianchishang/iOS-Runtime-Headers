/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
 */

@interface HMDRemovedUser : NSObject <NSSecureCoding> {
    NSDate * _expirationDate;
    HMDUser * _user;
}

@property (nonatomic, readonly) NSDate *expirationDate;
@property (nonatomic, readonly) HMDUser *user;

+ (id)removedUserWithUser:(id)arg1;
+ (BOOL)supportsSecureCoding;

- (void).cxx_destruct;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)expirationDate;
- (id)initWithCoder:(id)arg1;
- (id)initWithUser:(id)arg1 expiration:(id)arg2;
- (BOOL)isEqualToUser:(id)arg1;
- (BOOL)isEqualToUserID:(id)arg1;
- (BOOL)isExpired;
- (id)user;

@end
