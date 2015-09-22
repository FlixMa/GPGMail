/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import <Mail/MFEWSNetworkTaskOperation.h>

@class NSArray, NSMutableDictionary;

@interface MFEWSBodyFetchOperation : MFEWSNetworkTaskOperation
{
    NSMutableDictionary *_messagesByRemoteID;
    id <MFEWSBodyFetchOperationDelegate> _delegate;
    NSArray *_messages;
}

@property(readonly, copy, nonatomic) NSArray *messages; // @synthesize messages=_messages;
@property(nonatomic) __weak id <MFEWSBodyFetchOperationDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (id)_bodyRequestShape;
- (id)_calendarItemShape;
- (id)_meetingCancellationShape;
- (id)_meetingRequestShape;
- (id)_fetchBodyDataForItemIdTypes:(id)arg1;
- (id)_fetchMeetingCancellationsForItemIdTypes:(id)arg1;
- (id)_fetchMeetingRequestsForItemIdTypes:(id)arg1;
- (void)main;
- (id)init;
- (id)initWithMessages:(id)arg1;

@end
