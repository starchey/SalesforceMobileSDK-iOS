/*
 SFAppStyler.h
 SalesforceSDKCore
 
 Created by Kunal Chitalia on 1/22/16.
 Copyright (c) 2016, salesforce.com, inc. All rights reserved.
 
 Redistribution and use of this software in source and binary forms, with or without modification,
 are permitted provided that the following conditions are met:
 * Redistributions of source code must retain the above copyright notice, this list of conditions
 and the following disclaimer.
 * Redistributions in binary form must reproduce the above copyright notice, this list of
 conditions and the following disclaimer in the documentation and/or other materials provided
 with the distribution.
 * Neither the name of salesforce.com, inc. nor the names of its contributors may be used to
 endorse or promote products derived from this software without specific prior written
 permission of salesforce.com, inc.
 
 THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS" AND ANY EXPRESS OR
 IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND
 FITNESS FOR A PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT OWNER OR
 CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL
 DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE,
 DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY,
 WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY
 WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
 */

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

typedef NS_ENUM(NSUInteger, SFAppStylerFontStyle)  {
    SFAppStylerFontStyleRegular = 0,
    SFAppStylerFontStyleBold
};

/** Class responsible for app to set overall app style. All UI classes use this class
 to style relevant UI elementes
 */
@interface SFAppStyler : NSObject

/** Get a shared singleton of `SFAppStyler` class
 */
+(_Nonnull instancetype)sharedInstance;

/** Specify the font to use for navigation bar header text*/
@property (nonatomic, strong, nullable) UIFont * navBarFont;

/** Specify the text color to use for navigation bar header text */
@property (nonatomic, strong, nullable) UIColor * navBarTextColor;

/** Specify navigation bar color. This color will be used by
 - login view header
 */
@property (nonatomic, strong, nullable) UIColor *navBarColor;

/** Apply style to navigation bar */
- (void)styleNavigationBar:(nullable UINavigationBar *)navigationBar;

/** Apply style to bar button items
 
 @param barItems array of `UIBarButtonItem` to apply style to
 */
- (void)styleBarButtonItems:(nullable NSArray<UIBarButtonItem *> *)barItems;

/** Specify the font to use for the toolbar text*/
@property (nonatomic, strong, nullable) UIFont *toolBarFont;

/** Specify the color to use for the toolbar text */
@property (nonatomic, strong, nullable) UIColor *toolBarTextColor;

@end

