/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "NSObject.h"

@protocol MessageList <NSObject>
@property(readonly, nonatomic) __weak id <MessageListDelegate> delegate;
- (unsigned long long)filteredMessagesCount;
- (id)copyOfFilteredMessages;
- (unsigned long long)adjustedIndexOfMessage:(id)arg1;
- (id)filterOutMessages:(id)arg1 andReplaceMessages:(id)arg2;
- (id)filterInMessages:(id)arg1 secondaryMessages:(id)arg2;
- (void)updateMessages:(id)arg1;
- (void)invert;
- (void)resort;
@end
