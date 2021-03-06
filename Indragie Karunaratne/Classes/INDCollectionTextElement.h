//
//  INDCollectionTextElement.h
//  Indragie Karunaratne
//
//  Created by Indragie Karunaratne on 2014-04-09.
//  Copyright (c) 2014 Indragie Karunaratne. All rights reserved.
//

#import <Mantle/Mantle.h>

/**
 *  Collection view element model representing text content.
 */
@interface INDCollectionTextElement : MTLModel <MTLJSONSerializing>

/**
 *  Attributed text by parsing the HTML.
 */
@property (nonatomic, copy, readonly) NSAttributedString *attributedText;

/**
 *  Line spacing to be set on the label displaying the text.
 */
@property (nonatomic, assign, readonly) CGFloat lineSpacing;

@end
