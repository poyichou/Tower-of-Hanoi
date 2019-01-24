#include <stdio.h>

void hanoi(int top_disk_idx, int number_of_disk, char A, char B, char C) {
	if (number_of_disk <= 0) return;
	else if (number_of_disk == 1) {
		printf("move %d from %c to %c\n", top_disk_idx,  A, C);
	} else {
		// move number_of_disk - 1 disks from A to B
		hanoi(top_disk_idx, number_of_disk - 1, A, C, B);
		// move 1 disks (nth) from A to C
		hanoi(number_of_disk, 1, A, B, C);
		// move number_of_disk - 1 disks from B to C
		hanoi(top_disk_idx, number_of_disk - 1, B, A, C);
	}
}

int main() {
	hanoi(1, 10, 'A', 'B', 'C');
	return 0;
}
