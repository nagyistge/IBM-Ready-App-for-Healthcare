/*
 Licensed Materials - Property of IBM
 © Copyright IBM Corporation 2014. All Rights Reserved.
 This sample program is provided AS IS and may be used, executed, copied and modified without royalty payment by customer
 (a) for its own instruction and study, (b) in order to develop applications designed to run with an IBM product,
 either for customer's own internal use or for redistribution by customer, as part of such an application, in customer's
 own products.
 */

#import <Foundation/Foundation.h>

#import "RNEncryptor.h"

@interface MyCrypt : RNEncryptor

+ (NSData *)encryptData:(NSData *)data password:(NSString *)password error:(NSError **)error;
+ (NSString *)stringFromData:(NSData *)data;

@end