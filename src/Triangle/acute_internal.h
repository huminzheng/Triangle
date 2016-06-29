#ifndef ACUTE_INTERNAL_H
#define ACUTE_INTERNAL_H

#include "triangle_config.h"
#include "triangle_core.h"

void findNewSPLocationWithoutMaxAngle(mesh *m, behavior *b,
                      vertex torg, vertex tdest, vertex tapex,
                      vertex circumcenter, REAL *xi, REAL *eta, int offcenter, struct otri badotri);
void findNewSPLocationWithMaxAngle(mesh *m, behavior *b,
                      vertex torg, vertex tdest, vertex tapex,
                      vertex circumcenter, REAL *xi, REAL *eta, int offcenter, struct otri badotri);
int longestShortestEdge(REAL aodist, REAL dadist, REAL dodist);
int doSmoothing(mesh *m, behavior *b, struct otri badotri,
		vertex torg, vertex tdest, vertex tapex, REAL *newloc);
int getStarPoints(mesh *m, struct otri badotri,
			vertex p, vertex q, vertex r, int whichPoint, REAL *points);
int getNeighborsVertex(mesh *m, struct otri badotri,
				REAL first_x, REAL first_y, REAL second_x, REAL second_y, 
				REAL *thirdpoint, struct otri *neighotri);
int getWedgeIntersectionWithoutMaxAngle(mesh *m, behavior *b, 
			                int numpoints, REAL *points, REAL *newloc);
int getWedgeIntersectionWithMaxAngle(mesh *m, behavior *b, 
			             int numpoints, REAL *points, REAL *newloc);
int polygonAngles(mesh *m, behavior *b,int numpoints, REAL *points);
int testPolygonAngle(mesh *m, behavior *b, 
				REAL *x1, REAL *y1, REAL *x2, REAL *y2, REAL *x3, REAL *y3 );
void lineLineIntersection(REAL x1, REAL y1, REAL x2, REAL y2, REAL x3, REAL y3, REAL x4, REAL y4 , REAL *p);
int halfPlaneIntersection(int numvertices, REAL *convexPoly, REAL x1, REAL y1, REAL x2, REAL y2);
int splitConvexPolygon(int numvertices,REAL *convexPoly, REAL x1, REAL y1, REAL x2, REAL y2, REAL *polys[]);
int linePointLocation(REAL x1, REAL y1, REAL x2, REAL y2, REAL x, REAL y);
void lineLineSegmentIntersection(REAL x1, REAL y1, REAL x2, REAL y2, REAL x3, REAL y3, REAL x4, REAL y4 , REAL *p);
void findPolyCentroid(int numpoints, REAL *points, REAL *centroid);
void circleLineIntersection (REAL x1, REAL y1, REAL x2, REAL y2, REAL x3, REAL y3, REAL r , REAL *p);
int chooseCorrectPoint (REAL x1, REAL y1, REAL x2, REAL y2, REAL x3, REAL y3, int isObtuse );
void pointBetweenPoints(REAL x1, REAL y1, REAL x2, REAL y2, REAL x, REAL y, REAL *p);
int testTriangleAngle(mesh *m, behavior *b, REAL *x1, REAL *y1, REAL *x2, REAL *y2, REAL *x3, REAL *y3 );
REAL minDistanceToNeigbor(mesh *m, behavior *b, REAL newlocX, REAL newlocY, struct otri *searchtri);
#ifndef TRILIBRARY
void writeparts(mesh *m, behavior *b, int argc, char **argv);
REAL returnMinAngle(REAL p1x, REAL p1y,REAL p2x, REAL p2y, REAL p3x, REAL p3y);
REAL returnMaxAngle(REAL p1x, REAL p1y,REAL p2x, REAL p2y, REAL p3x, REAL p3y);
void detailedHistogram(mesh *m, behavior *b);
#endif

#endif /* ACUTE_INTERNAL_H */