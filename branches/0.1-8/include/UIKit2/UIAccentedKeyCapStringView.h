/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import <UIKit/UIView.h>

@class NSArray;

@interface UIAccentedKeyCapStringView : UIView
{
    BOOL m_selectedMode;
    int m_expansion;
    int m_orientation;
    float m_stringWidth;
    NSArray *m_caps;
}

- (void)dealloc;
- (void)setSelectedMode:(BOOL)fp8;
- (void)setCaps:(id)fp8;
- (void)setExpansion:(int)fp8;
- (void)setOrientation:(int)fp8;
- (void)setStringWidth:(float)fp8;
- (void)drawRect:(struct CGRect)fp8;

@end
