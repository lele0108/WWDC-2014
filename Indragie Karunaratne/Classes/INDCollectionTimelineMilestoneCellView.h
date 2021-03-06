//
//  INDCollectionTimelineMilestoneCellView.h
//  Indragie Karunaratne
//
//  Created by Indragie Karunaratne on 2014-04-09.
//  Copyright (c) 2014 Indragie Karunaratne. All rights reserved.
//

#import "INDCollectionTextCellView.h"

/**
 *  Content view for a collection view cell that shows a milestone in a timeline.
 */
@interface INDCollectionTimelineMilestoneCellView : INDCollectionTextCellView

/**
 *  Image view that shows an image representing the milestone.
 */
@property (nonatomic, weak) IBOutlet UIImageView *imageView;

@end
