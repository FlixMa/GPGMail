//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

//#import "NSObject.h"

#import "MCBodyFetchContext.h"

@class MFEWSAccountTaskManager, MFEWSVisibleBodyFetchTask, NSString;

@interface MFEWSBodyFetchContext : NSObject <MCBodyFetchContext>
{
    MFEWSVisibleBodyFetchTask *_bodyFetchTask;	// 8 = 0x8
    MFEWSAccountTaskManager *_manager;	// 16 = 0x10
}

@property(readonly, nonatomic) MFEWSAccountTaskManager *manager; // @synthesize manager=_manager;
- (void).cxx_destruct;	// IMP=0x00000000000728f6
- (void)cacheBodiesForMessages:(id)arg1;	// IMP=0x00000000000726ba
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;	// IMP=0x000000000007255a
- (void)setBodyFetchTask:(id)arg1;	// IMP=0x00000000000724b9
@property(readonly, nonatomic) MFEWSVisibleBodyFetchTask *bodyFetchTask;
- (void)dealloc;	// IMP=0x000000000007235d
- (id)init;	// IMP=0x000000000007228e
- (id)initWithTaskManager:(id)arg1;	// IMP=0x0000000000072216

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
