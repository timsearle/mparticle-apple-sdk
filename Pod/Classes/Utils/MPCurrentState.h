//
//  MPCurrentState.h
//
//  Copyright 2015 mParticle, Inc.
//
//  Licensed under the Apache License, Version 2.0 (the "License");
//  you may not use this file except in compliance with the License.
//  You may obtain a copy of the License at
//
//      http://www.apache.org/licenses/LICENSE-2.0
//
//  Unless required by applicable law or agreed to in writing, software
//  distributed under the License is distributed on an "AS IS" BASIS,
//  WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
//  See the License for the specific language governing permissions and
//  limitations under the License.
//

#import <Foundation/Foundation.h>

extern NSString *const kMPStateInformationKey;

@interface MPCurrentState : NSObject

@property (nonatomic, strong, readonly) NSNumber *applicationMemory;
@property (nonatomic, strong, readonly) NSNumber *batteryLevel;
@property (nonatomic, strong, readonly) NSDictionary *cpuUsageInfo;
@property (nonatomic, strong, readonly) NSString *dataConnectionStatus;
@property (nonatomic, strong, readonly) NSNumber *deviceOrientation;
@property (nonatomic, strong, readonly) NSDictionary *diskSpaceInfo;
@property (nonatomic, strong, readonly) NSNumber *gpsState;
@property (nonatomic, strong, readonly) NSNumber *statusBarOrientation;
@property (nonatomic, strong, readonly) NSDictionary *systemMemoryInfo;
@property (nonatomic, strong, readonly) NSNumber *timeSinceStart;

- (NSDictionary *)dictionaryRepresentation;

@end
