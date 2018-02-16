//
//  Copyright (c) 2018 Open Whisper Systems. All rights reserved.
//

NS_ASSUME_NONNULL_BEGIN

@interface NSString (SSK)

- (NSString *)ows_stripped;

- (NSString *)filterStringForDisplay;

@end

NS_ASSUME_NONNULL_END
