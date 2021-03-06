#ifndef _INC_HYPATIA_INTERNAL
#define _INC_HYPATIA_INTERNAL


#include <stdio.h>
#include <memory.h>
#include <math.h>

HYPAPI void _matrix3_print_with_columnrow_indexer(matrix3 *self);
HYPAPI void _matrix3_print_with_rowcolumn_indexer(matrix3 *self);
HYPAPI matrix3 *_matrix3_set_random(matrix3 *self);

HYPAPI void _matrix4_print_with_columnrow_indexer(matrix4 *self);
HYPAPI void _matrix4_print_with_rowcolumn_indexer(matrix4 *self);
HYPAPI matrix4 *_matrix4_set_random(matrix4 *self);

HYPAPI void _quaternion_print(const quaternion *self);
HYPAPI quaternion *_quaternion_set_random(quaternion *self);

HYPAPI void _vector3_print(const vector3 *self);
HYPAPI vector3 *_vector3_set_random(vector3 *self);

HYPAPI void _vector2_print(const vector2 *self);
HYPAPI vector2 *_vector2_set_random(vector2 *self);

HYPAPI void _vector4_print(const vector4 *self);
HYPAPI vector4 *_vector4_set_random(vector4 *self);


#define HYP_SIN(x) ((HYP_FLOAT)sin(x))
#define HYP_COS(x) ((HYP_FLOAT)cos(x))
#define HYP_TAN(x) ((HYP_FLOAT)tan(x))
#define HYP_ASIN(x) ((HYP_FLOAT)asin(x))
#define HYP_ACOS(x) ((HYP_FLOAT)acos(x))
#define HYP_ATAN2(y,x) ((HYP_FLOAT)atan2(y,x))


/** @brief A macro that returns the cotangent of \a a.
 * The angle is in radians.
 * */
#define HYP_COT(a) (1.0f / HYP_TAN(a))

#define UNUSED_VARIABLE(x) (void)(x)

#define _SWAP(x, y) do { tmp = x; x = y; y = tmp; } while (0)


#endif /* _INC_HYPATIA_INTERNAL */
