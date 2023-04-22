#include <stdio.h>
const int king = 1;
const int queen = 1;
const int rook = 2;
const int bishop = 2;
const int knight = 2;
const int pawn = 8;

int main(void)
{
	int king_s, queen_s, rook_s, bishop_s, knight_s, pawn_s;
	scanf("%d %d %d %d %d %d", &king_s, &queen_s, &rook_s, &bishop_s, &knight_s, &pawn_s);
	printf("%d %d %d %d %d %d", king - king_s, queen - queen_s, rook - rook_s, bishop - bishop_s, knight - knight_s, pawn - pawn_s);
	return 0;
}