/*
* Licensed Materials - Property of IBM
* 5725-I43 (C) Copyright IBM Corp. 2006, 2013. All Rights Reserved.
* US Government Users Restricted Rights - Use, duplication or
* disclosure restricted by GSA ADP Schedule Contract with IBM Corp.
*/

#define _AcquisitionCallback_H_
#import <Foundation/Foundation.h>

/** */
@protocol AcquisitionCallback <NSObject> 

- (void) execute : (id) pos ;

@end

