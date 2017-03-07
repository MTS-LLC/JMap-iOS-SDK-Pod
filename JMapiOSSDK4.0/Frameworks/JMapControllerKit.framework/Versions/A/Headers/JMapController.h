//
//  JMapController.h
//  JMapController
//
//  Created by Aaron Wong on 2016-10-21.
//  Copyright © 2016 Jibestream. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <JMapCoreKit/JMapCoreKit.h>
#import <JMapRenderingKit/JMapRenderingKit.h>

@interface JMapController : NSObject

@property(nonatomic, strong, readonly) JMapActiveVenue *_Nullable activeVenue;
@property(nonatomic, strong, readonly) JMapFloor *_Nullable currentFloor;
@property(nonatomic, strong, readonly) JMapMap *_Nullable currentMap;
@property(nonatomic, strong, readonly) JMapBuilding *_Nullable currentBuilding;
@property (nonatomic, weak, nullable) id<JMapRenderingKitDelegate> delegate;
@property (nonatomic, nonnull) JMapUserLocation *userLocation;

#pragma mark - Initializer Methods

typedef void(^_Nullable ErrorCompletion)(JMapError * _Nullable error);

/*!
 Initializes a JMapJCore object along with canvas and activeVenue

 @param canvas A JMapCanvas object that will be used to display the map
 @param activeVenue A JMapActiveVenue object to be loaded
 */
-(nonnull instancetype)initWithCanvas:(nonnull JMapCanvas *)canvas activeVenue:(nonnull JMapActiveVenue *)activeVenue;

#pragma mark - Deallocation Methods

/*!
 * Destroys Active Venue and all associated objects.
 * @discussion Used to release references to the Active Venue and all associated objects in memory in the controller.
 */
- (void)destroyActiveVenue;

/*!
 * Destroys Building and all associated objects.
 * @discussion Used to release references to a Building and all associated objects in memory in the controller.
 */
- (void)destroyBuilding;

/*!
 * Destroys Floor and all associated objects.
 * @discussion Used to release references to a Floor and all associated objects in memory in the controller.
 */
- (void)destroyFloor;

/*!
 * Destroys Map and all associated objects.
 * @discussion Used to release references to a Map and all associated objects in memory in the controller.
 */
- (void)destroyMap;

#pragma mark - Map View Helpers

/*!
 Renders and displays map.
 @discussion This method will also parse the map if needed.

 @param map The JMapMap object to be rendered and displayed.
 */
- (void)showMap:(nonnull JMapMap *)map completionHandler:(__attribute__((noescape)) ErrorCompletion)completion;

/*!
 Renders and displays map with given bounds.
 @discussion This method will also parse the map if needed.
 
 @param map The JMapMap object to be rendered and displayed.
 @param bound CGRect bound of the map to be shown
 */
- (void)showMap:(nonnull JMapMap *)map withBounds:(CGRect)bound completionHandler:(__attribute__((noescape)) ErrorCompletion)completion;

/*!
 Displays the default map.
 */
- (void)showDefaultMapWithCompletionHandler:(__attribute__((noescape)) ErrorCompletion)completion;

/*!
 Parses a map so it is ready to be rendered.

 @param map The JMapMap object to parse.
 */
- (void)parseMap:(nonnull JMapMap *)map completionHandler:(__attribute__((noescape)) ErrorCompletion)completion;

/*!
 * Can be used to parse all maps in the active venue before rendering
 */
- (void)parseAllMapsWithCompletionHandler:(__attribute__((noescape)) ErrorCompletion)completion;

/*!
 Sets the transform of the map canvas displaying the map.

 @param transform The transform that will be set on the map canvas.
 */
- (void)setMapTransform:(nonnull JMapTransform *)transform;

/*!
 Resets the transform of the map canvas displaying the map.
 */
- (void)resetMapTransform;

/*!
 Adjusts the map canvas so it displays the section of the map confined by the provided bounding rectangle.

 @param bounds A CGRect object describing the bounds that the canvas will display.
 */
- (void)fitBoundsInView:(CGRect)bounds;

/*!
 Sets the minimum and maximum scale limits for zooming the map.

 @param min The minimum allowed map scale.
 @param max The maximum allowed map scale.
 */
- (void)setMinScale:(CGFloat)min andMaxScale:(CGFloat)max;


#pragma mark - Amenity Icon Helpers

/*!
 Shows all amenities of a given type.

 @param amenity A JMapAmenity which will be used to determine which type of amenities to show.
 */
- (void)showAmenity:(nonnull JMapAmenity *)amenity;


/*!
 Shows all amenities of a given type that are placed on a certain waypoint.

 @param amenity A JMapAmenity which will be used to determine which type of amenities to show.
 @param waypoint The waypoint that is associated with the amenities to be shown.
 */
- (void)showAmenity:(nonnull JMapAmenity *)amenity atWaypoint:(nonnull JMapWaypoint*)waypoint;

/*!
 Hides all amenities of a given type.
 
 @param amenity A JMapAmenity which will be used to determine which type of amenities to hide.
 */
- (void)hideAmenity:(nonnull JMapAmenity *)amenity;

/*!
 Hides all amenities of a given type that are placed on a certain waypoint.
 
 @param amenity A JMapAmenity which will be used to determine which type of amenities to hide.
 @param waypoint The waypoint that is associated with the amenities to be hidden.
 */
- (void)hideAmenity:(nonnull JMapAmenity *)amenity atWaypoint:(nonnull JMapWaypoint*)waypoint;

/*!
 Shows all amenities.
 */
- (void)showAllAmenities;

/*!
 Hides all amenities.
 */
- (void)hideAllAmenities;

/*!
 Applies a style to all amenities.

 @param style A JMapIconStyle object that defines the style to be used for all amenities.
 */
- (void)styleAmenities:(nullable JMapIconStyle*)style;

/*!
 Applies a style to all amenities that are of the provided type.

 @param amenity A JMapAmenity which will determine which type of amenities to style.
 @param style A JMapIconStyle object that defines the style that will be applied to the amenities.
 */
- (void)styleAmenity:(nullable JMapAmenity*)amenity withStyling:(nonnull JMapIconStyle*)style;

/*!
 Applies a style to all amenities that are of the provided type and placed at a given waypoint.
 
 @param amenity A JMapAmenity which will determine which type of amenities to style.
 @param waypoint The JMapWaypoint that is associated with the amenities to be styled.
 @param style A JMapIconStyle object that defines the style that will be applied to the amenities.
 */
- (void)styleAmenity:(nonnull JMapAmenity*)amenity atWaypoint:(nonnull JMapWaypoint*)waypoint withStyling:(nonnull JMapIconStyle*)style;

/*!
 Resets the style of all amenities to their defaults.
 */
- (void)resetAmenityStyle;

/*!
 Resets the style of all amenities that are of the provided type.

 @param amenity A JMapAmenity which will determine which type of amenities will have their styling reset.
 */
- (void)resetAmenityStyle:(nullable JMapAmenity*)amenity;

/*!
 Resets the style of all amenities that are of the provided type and placed at a given waypoint.

 @param amenity A JMapAmenity which will determine which type of amenities will have their styling reset.
 @param waypoint The JMapWaypoint that is associated with the amenities that will have their styling reset.
 */
- (void)resetAmenityStyle:(nullable JMapAmenity*)amenity atWaypoint:(nullable JMapWaypoint*)waypoint;

#pragma mark - Path Type Icon Helpers

/*!
 Shows all path types of a given type.
 
 @param pathType A JMapAmenity which will be used to determine which type of amenities to show.
 */
- (void)showPathType:(nonnull JMapPathType*)pathType;

/*!
 Shows all path types of a given type that are placed on a certain waypoint.
 
 @param pathType A JMapPathType which will be used to determine which type of path types to show.
 @param waypoint The waypoint that is associated with the path types to be shown.
 */
- (void)showPathType:(nonnull JMapPathType*)pathType atWaypoint:(nullable JMapWaypoint*)waypoint;

/*!
 Shows all path types on map.
 */
- (void)showAllPathTypes;

/*!
 Hide all path types on map.
 */
- (void)hideAllPathTypes;

/*!
 Hides all path types of a given type.
 
 @param pathType A JMapPathType which will be used to determine which type of path types to hide.
 */
- (void)hidePathType:(nonnull JMapPathType*)pathType;

/*!
 Hides all path types of a given type that are placed on a certain waypoint.
 
 @param pathType A JMapPathType which will be used to determine which type of path types to hide.
 @param waypoint The waypoint that is associated with the path types to be hidden.
 */
- (void)hidePathType:(nonnull JMapPathType*)pathType atWaypoint:(nullable JMapWaypoint*)waypoint;

/*!
 Applies a style to all path types.
 
 @param style A JMapPathType object that defines the style to be used for all path types.
 */
- (void)stylePathTypes:(nullable JMapIconStyle*)style;

/*!
 Applies a style to all path types that are of the provided type.
 
 @param pathType A JMapPathType which will determine which type of path types to style.
 @param style A JMapIconStyle object that defines the style that will be applied to the path types.
 */
- (void)stylePathType:(nullable JMapPathType*)pathType withStyling:(nonnull JMapIconStyle*)style;

/*!
 Applies a style to all path types that are of the provided type and placed at a given waypoint.
 
 @param pathType A JMapPathType which will determine which type of path types to style.
 @param waypoint The JMapWaypoint that is associated with the path types to be styled.
 @param style A JMapIconStyle object that defines the style that will be applied to the path types.
 */
- (void)stylePathType:(nonnull JMapPathType*)pathType atWaypoint:(nonnull JMapWaypoint*)waypoint withStyling:(nonnull JMapIconStyle*)style;


/*!
 Resets the style of all path types to their defaults.
 */
- (void)resetPathTypeStyle;


/*!
 Resets the style of all path types that are of the provided type.
 
 @param pathType A JMapPathType which will determine which type of path types will have their styling reset.
 */
- (void)resetPathTypeStyle:(nullable JMapPathType*)pathType;

/*!
 Resets the style of all path types that are of the provided type and placed at a given waypoint.
 
 @param pathType A JMapPathType which will determine which type of path types will have their styling reset.
 @param waypoint The JMapWaypoint that is associated with the path types that will have their styling reset.
 */
- (void)resetPathTypeStyle:(nullable JMapPathType*)pathType atWaypoint:(nullable JMapWaypoint*)waypoint;

#pragma mark - Image Map Label Helpers


/*!
 Shows all map labels with images.
 */
- (void) showAllImageMapLabels;


/*!
 Hides all map labels with images.
 */
- (void) hideAllImageMapLabels;

#pragma mark - Text Map Label Helpers


/*!
 Shows all textual map labels.
 */
- (void) showAllTextMapLabels;


/*!
 Hides all textual map labels.
 */
- (void) hideAllTextMapLabels;


/*!
 Sets the font for textual map labels.

 @param font The font to be used for the text in labels.
 */
- (void) setMapLabelFont:(nonnull UIFont*)font;


#pragma mark - Unit Helpers


/*!
 Retrieves all units from a map.
 
 @param map The JMapMap that the units will be retrieved from.
 @param completion A callback with array of Shapes from the map's unit layer and JMapError.
 */
-(void)getUnitsFromMap:(nonnull JMapMap*)map completionHandler:(nonnull __attribute__((noescape)) void(^)(NSArray <Shape*>* _Nonnull shapes, JMapError * _Nullable error))completion;


/*!
 Adds text to a unit on the map.

 @param text A string with the text to be added to the unit.
 @param unit A shape representing the unit on the map that the text will be added to.
 @param font A UIFont object to edit the text font for unit labels.
 */
- (void)addText:(nonnull NSString*)text toUnit:(nonnull Shape*)unit withFont:(nullable UIFont *)font;

/*!
 Adds an image to a unit on the map.
 
 @param uri A NSString with the uri to be added to the unit.
 @param unit A shape representing the unit on the map that the image will be added to.
*/
-(void) addImage:(nonnull NSString*)uri toUnit:(nonnull Shape*)unit;

/*!
 Hides the contents of a unit.

 @param unit A shape representing the unit on the map which will have its text and image contents hidden.
 */
-(void) hideUnitContents:(nonnull Shape*)unit;

/*!
 Shows the contents of a unit.
 
 @param unit A shape representing the unit on the map which will have its text and image contents shown.
 */
-(void) showUnitContents:(nonnull Shape*)unit;

/*!
 Get Unit From Waypoint
 
 @param waypoint A JMapWaypoint object used to search for unit
 @return A Shape object that is associated with the provided JMapWaypoint object.
 */
 - (nullable Shape *)getUnitFromWaypoint:(nonnull JMapWaypoint *)waypoint;

/*!
 Get Units From Destination
 
 @param destination A JMapDestination object used to search for unit
 @return A Shape object that is associated with the provided JMapDestination object.
 */
- (nullable NSArray <Shape *>*)getUnitsFromDestination:(nonnull JMapDestination *)destination;

#pragma mark - Component/Popup Helpers


/*!
 Adds a UIView to the map at a specified position.

 @param component The UIView that will be added to the map.
 @param map The JMapMap object that the UIView will be added to.
 @param point The point on the map that the UIView will be placed at.
 */
-(void)addComponent:(nonnull UIView*)component toMap:(nonnull JMapMap*)map atPoint:(CGPoint)point;


/*!
 Removes a UIView that has been added to the map.

 @param component The UIView which was provided when it was initially added to the map.
 @param map The map on which the component exists;
 */
- (void)removeComponent:(nonnull UIView *)component onMap:(nonnull JMapMap*)map;

#pragma mark - Map Styling Helpers


/*!
 Resets the styling for the map to its default state.
 */
-(void)resetMapStyle;

/*
 Applies custom styling using a json config file
 
 @param styleSheet NSString containing styles info
 */
- (void)useCustomStyleSheet:(nonnull NSString *)stylesheet;


#pragma mark - Shape/Layer Helpers

/*!
 Retrieves the shape objects in a map layer.
 
 @param name The name of the layer that the shapes should be retrieved from.
 @param map The map that the layer is associated with.
 @param completion Callback for getting shapes in layer with name
 */
-(void)getShapesInLayerWithName:(nonnull NSString*)name fromMap:(nonnull JMapMap*)map completionHandler:(nonnull __attribute__((noescape)) void(^)(NSArray <Shape*>* _Nonnull shapes, JMapError * _Nullable error))completion;


/*!
 Retrieves the bounds of a rectangle containing all the provided shapes.

 @param shapes An array of Shape objects.
 @return A CGRect which is large enough to contain all the provided shapes.
 */
-(CGRect)getBoundsFromShapes:(nonnull NSArray<Shape*>*)shapes;


/*!
 Applies styling to a shape.

 @param shapes An array of Shape objects that styling will be applied to.
 @param style A JMapStyle
 */
-(void)styleShapes:(nonnull NSArray <Shape*>*)shapes withStyling:(nonnull JMapStyle*)style;

/*!
 Resets the styling for all shapes.
 
 @discussion Resets all shape styles to default styles
 */
-(void)resetShapeStyles:(nonnull NSArray <Shape*>*)shapes;

/*!
 Hides the layer with the specified name.

 @param name The name of the layer to be hidden.
 */
-(void)hideLayer:(nonnull NSString*)name;

/*!
 Shows the layer with the specified name.
 
 @param name The name of the layer to be shown.
 */
-(void)showLayer:(nonnull NSString*)name;

/*!
 Set Layer Interactivity By Layer Name
 
 @discussion Sets all elements within a layer to be interactive
 
 @param layerName string of the desired layer to be set interactive.
 */
- (void)enableLayerInteractivityForLayerName:(nonnull NSString *)layerName;

/*!
 Remove Layer Interactivity By Layer Name
 
 @discussion Sets all elements within a layer to be non-interactive

 @param layerName string of the desired layer to be set non-interactive.
 */
- (void)disableLayerInteractivityForLayerName:(nonnull NSString *)layerName;

/*!
 Get All Layer Names in Map
 
 @discussion Used to retrieve all layer names for a particular map
 
 @param map desired map to retrieve all layer names
 
 @return Array of layer name strings
 */
- (nonnull NSArray <NSString *>*)getAllLayerNamesInMap:(nonnull JMapMap *)map;

/*!
 Get All Visible Layer Names in Map
 
 @discussion Used to retrieve all layer names for layers that are currently visible on a particular map
 
 @param map desired map to retrieve all currently visible layer's names
 
 @return Array of layer name strings
 */
- (nonnull NSArray <NSString *>*)getAllVisibleLayerNamesInMap:(nonnull JMapMap *)map;

/*!
 Returns a list of layer names that are hidden on the map
 
 @param map JMapMap object for retrieving layer names
 
 @return Array of layer names that are hidden
 */
- (nonnull NSArray <NSString *>*)getAllHiddenLayerNamesInMap:(nonnull JMapMap *)map;

/*!
 Get Waypoints From Shape
 
 @param shape A Shape object to search JMapWaypoints with
 
 @return Array of JMapWaypoint objects associated with the provided Shape object
 */
 - (nonnull NSArray <JMapWaypoint *>*)getWaypointsFromShape:(nonnull Shape *)shape;

/*
 Get Destinations From Shape

 @param shape A Shape object to search JMapDestinations with

 @return Array of JMapDestination objects associated with the provided Shape object
 */
- (nonnull NSArray <JMapDestination *>*)getDestinationsFromShape:(nonnull Shape *)shape;

#pragma mark - Gesture Helpers


/*!
 Enables rotation gestures on the map.
 */
-(void)enableRotationGesture;


/*!
 Disables rotation gestures on the map.
 */
-(void)disableRotationGesture;


/*!
 Enables pan (swipe) gestures on the map.
 */
-(void)enablePanGesture;


/*!
 Disables pan (swipe) gestures on the map.
 */
-(void)disablePanGesture;


/*!
 Enables scale (pinch zoom) gestures on the map.
 */
-(void)enableScaleGesture;


/*!
 Disables scale (pinch zoom) gestures on the map.
 */
-(void)disableScaleGesture;

#pragma mark - Wayfinding Helpers

/*!
 Generate a NSDictionary containing path shapes on floors and path per floor data.
 
 @param waypointStart A JMapWaypoint object as starting point
 @param waypointEnd A JMapWaypoint object as ending point
 @param accessibility A NSInteger value between 0-100 to indicate accessibility level; 0 - Not accessible, 100 - accessible path
 @return An NSArray of JMapPathPerFloor objects
 */
-(nonnull NSArray <JMapPathPerFloor *>*)wayfindBetweenWaypoint:(nonnull JMapWaypoint *)waypointStart andWaypoint:(nonnull JMapWaypoint *)waypointEnd withAccessibility:(NSInteger)accessibility;

/*!
 Draw the wayfind path on the map.
 
 @param wayfindPath A JMapPathPerFloor object returned in the method wayfindBetweenWaypoint:andWaypoint:withAccessibility
 */
-(void)drawWayfindingPath:(nonnull JMapPathPerFloor*)wayfindPath;

/*!
 Draw the wayfind path on the map with custom styling.
 
 @param wayfindPath A JMapPathPerFloor object returned in the of method wayfindBetweenWaypoint:andWaypoint:withAccessibility
 @param style A JMapSVGStyle object containing styling information
 */
-(void)drawWayfindingPath:(nonnull JMapPathPerFloor*)wayfindPath withStyle:(nonnull JMapStyle*)style;

/*!
 Removes all wayfind paths on all floors
 */
-(void)clearWayfindingPath;

//#pragma mark - User Location

/*!
 Update method for refreshing user's location
 
 @param position A CGPoint indicating user's location in x,y coordinates
 @param map A JMapMap object that the location is currently on
 @param orientation A NSInteger float value to determine the icon's angle relative to the map's true north (degrees)
 @param confidence A NSInteger integer value indicating the radius of confidence measured in pixels
 */
- (void)updateUserLocation:(CGPoint)position floorMap:(nonnull JMapMap *)map orientation:(nullable NSNumber *)orientation confidenceRadius:(nullable NSNumber *)confidence;

/*!
 Get the nearest JMapWaypoint to JMapPoint
 
 @param point A JMapPoint object consisting of x,y,z where x,y are the coordinates and z is the mapId
 @return A JMapWaypoint object
 */
- (nullable JMapWaypoint *)getNearestWaypointWithJMapPoint:(nonnull JMapPoint *)point;

@end
