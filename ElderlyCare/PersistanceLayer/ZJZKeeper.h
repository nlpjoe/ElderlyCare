//
//  ZJZUserAccount.h
//  ElderlyCare
//
//  Created by Jzzhou on 16/3/10.
//
//

#import <Foundation/Foundation.h>

@interface ZJZKeeper : NSObject <NSCoding, NSCopying>

// 请求参数
/** 账号 */
@property (nonatomic, copy) NSString *account;
/** 密码 */
@property (nonatomic, copy) NSString *password;

// 返回值
/** 看护人ID */
@property (nonatomic, copy) NSString *keeperID;
/** 昵称 */
@property (nonatomic, copy) NSString *nickName;
/** 电话号码 */
@property (nonatomic, copy) NSString *tel;

- (instancetype)initWithAccount:(NSString *)account password:(NSString *)password;

@end
