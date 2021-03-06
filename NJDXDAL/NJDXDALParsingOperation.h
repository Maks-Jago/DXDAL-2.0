//
//  NJDXDALParsingOperation.h
//  NJDXDAL
//
//  Created by LimeStore on 10.07.12.
//  Copyright (c) 2012 __MyCompanyName__. All rights reserved.
//

#import <Foundation/Foundation.h>

@class NJDXDALParsingOperation;
@class NJDXDALHTTPOperation;

@protocol NJDXDALParsingOperationDelegate <NSObject>

-(void)didFinishParsing:(NJDXDALParsingOperation*)parsOp;

@end


@interface NJDXDALParsingOperation : NSOperation

@property (nonatomic,strong) id<NJDXDALParsingOperationDelegate> delegate; //for informing when data's parsed

@property (nonatomic,readonly) BOOL isExecuting;
@property (nonatomic,assign) BOOL isFinished; 
@property (nonatomic,readonly) BOOL isCancelled;

-(NJDXDALParsingOperation*)initWithParentURLOperation:(NJDXDALHTTPOperation*)parentOp;
-(NJDXDALHTTPOperation*)parentURLOperation;
-(BOOL)isConcurrent;
-(void)cancel;

@end
