//
//  AALineStyle.h
//  AAChartKitDemo
//
//  Created by AnAn on 2020/8/27.
//  Copyright © 2020 AnAn. All rights reserved.
//*************** ...... SOURCE CODE ...... ***************
//***...................................................***
//*** https://github.com/AAChartModel/AAChartKit        ***
//*** https://github.com/AAChartModel/AAChartKit-Swift  ***
//***...................................................***
//*************** ...... SOURCE CODE ...... ***************

/*
 
 * -------------------------------------------------------------------------------
 *
 * 🌕 🌖 🌗 🌘  ❀❀❀   WARM TIPS!!!   ❀❀❀ 🌑 🌒 🌓 🌔
 *
 * Please contact me on GitHub,if there are any problems encountered in use.
 * GitHub Issues : https://github.com/AAChartModel/AAChartKit/issues
 * -------------------------------------------------------------------------------
 * And if you want to contribute for this project, please contact me as well
 * GitHub        : https://github.com/AAChartModel
 * StackOverflow : https://stackoverflow.com/users/7842508/codeforu
 * JianShu       : https://www.jianshu.com/u/f1e6753d4254
 * SegmentFault  : https://segmentfault.com/u/huanghunbieguan
 *
 * -------------------------------------------------------------------------------
 
 */

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface AALineStyle : NSObject

AAPropStatementAndPropSetFuncStatement(copy,   AALineStyle, NSString *, dashStyle)  //准星线样式
AAPropStatementAndPropSetFuncStatement(copy,   AALineStyle, NSString *, color)  //准星线颜色
AAPropStatementAndPropSetFuncStatement(strong, AALineStyle, NSNumber *, width)  //准星线宽度
AAPropStatementAndPropSetFuncStatement(strong, AALineStyle, NSNumber *, zIndex)  //准星线的层叠值,

@end

NS_ASSUME_NONNULL_END
