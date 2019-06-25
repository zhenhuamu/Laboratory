//
//  Observable+Binding.h
//  KVODataBinding
//
//  Created by tripleCC on 6/25/19.
//  Copyright © 2019 tripleCC. All rights reserved.
//

#import "Observable.h"
#import "Protocols.h"
NS_ASSUME_NONNULL_BEGIN

@interface Observable (Binding)
- (Disposable *)bindTo:(id <ObserverProtocol>)observer;
@end

NS_ASSUME_NONNULL_END
