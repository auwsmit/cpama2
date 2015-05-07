/* (a) Each square of a chessboard can hold one piece--a pawn, knight, bishop,
 *     rook, queen, or king--or it may be empty. Each piece is either black or
 *     white. Define two enumerated types: Piece, which has seven possible
 *     values (one of which is "empty"), and Color, which has two.
 *
 * (b) Using the types from part (a), define a structure type named Square that
 *     can store both the type of the piece and its color.
 *
 * (c) Using the Square type from part (b), declare an 8 x 8 array named board
 *     that can store the entire contents of a chessboard.
 *
 * (d) Add an initializer to the declaration in part (c) so that board's initial
 *     value corresponds to the usual arrangement of pieces at the start of
 *     a chess game. A square that's not occupied by a piece should have an
 *     "empty" piece value and the color black.
 */

/* Answer:
 * A: */
typedef enum { EMPTY, PAWN, KNIGHT, BISHOP, ROOK, QUEEN, KING } Piece;
typedef enum { W, B } Color;

/* B: */
typedef struct {
    Piece p;
    Color c;
} Square;

/* C: */
Square board[8][8];

/* D: */
Square board[8][8] =
{{{ ROOK,  W }, { KNIGHT, B }, { BISHOP, W }, { KING,  B }, /* row 1 */
  { QUEEN, B }, { BISHOP, W }, { KNIGHT, B }, { ROOK,  W }},
 {{ PAWN,  W }, { PAWN,   B }, { PAWN,   W }, { PAWN,  B }, /* row 2 */
  { PAWN,  B }, { PAWN,   W }, { PAWN,   B }, { PAWN,  W }},
 {{ EMPTY, B }, { EMPTY,  W }, { EMPTY,  B }, { EMPTY, W }, /* row 3 */
  { EMPTY, W }, { EMPTY,  B }, { EMPTY,  W }, { EMPTY, B }},
 {{ EMPTY, B }, { EMPTY,  W }, { EMPTY,  B }, { EMPTY, W }, /* row 4 */
  { EMPTY, W }, { EMPTY,  B }, { EMPTY,  W }, { EMPTY, B }},
 {{ EMPTY, B }, { EMPTY,  W }, { EMPTY,  B }, { EMPTY, W }, /* row 5 */
  { EMPTY, W }, { EMPTY,  B }, { EMPTY,  W }, { EMPTY, B }},
 {{ EMPTY, B }, { EMPTY,  W }, { EMPTY,  B }, { EMPTY, W }, /* row 6 */
  { EMPTY, W }, { EMPTY,  B }, { EMPTY,  W }, { EMPTY, B }},
 {{ PAWN,  W }, { PAWN,   B }, { PAWN,   W }, { PAWN,  B }, /* row 7 */
  { PAWN,  B }, { PAWN,   W }, { PAWN,   B }, { PAWN,  W }},
 {{ ROOK,  W }, { KNIGHT, B }, { BISHOP, W }, { KING,  B }, /* row 8 */
  { QUEEN, B }, { BISHOP, W }, { KNIGHT, B }, { ROOK,  W }}};
