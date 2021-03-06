//******************************************************************************
//
// Copyright (c) 2016 Microsoft Corporation. All rights reserved.
//
// This code is licensed under the MIT License (MIT).
//
// THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
// IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
// FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
// AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
// LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
// OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
// THE SOFTWARE.
//
//******************************************************************************

#pragma once

#import <CloudKit/CloudKitExport.h>
#import <CloudKit/CKOperation.h>

@class CKServerChangeToken;
@class CKNotification;
@class NSError;

CLOUDKIT_EXPORT_CLASS
@interface CKFetchNotificationChangesOperation : CKOperation
- (instancetype)initWithPreviousServerChangeToken:(CKServerChangeToken*)previousServerChangeToken STUB_METHOD;
@property (copy, nonatomic) CKServerChangeToken* previousServerChangeToken STUB_PROPERTY;
@property (assign, nonatomic) NSUInteger resultsLimit STUB_PROPERTY;
@property (readonly, nonatomic) BOOL moreComing STUB_PROPERTY;
@property (copy, nonatomic, nonnull) void (^notificationChangedBlock)(CKNotification*) STUB_PROPERTY;
@property (copy, nonatomic, nullable) void (^fetchNotificationChangesCompletionBlock)(CKServerChangeToken*, NSError*) STUB_PROPERTY;
@end