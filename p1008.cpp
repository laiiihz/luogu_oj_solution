#include <iostream>
using namespace std;
int main(void) {
		for (int i = 1; i <= 9; i++) {
					for (int j = 1; j <= 9; j++) {
									if (j == i)continue;
												for (int k = 1; k <= 9; k++) {
																	if (k == j&&k==i )continue;
																					int num1 = i * 100 + j * 10 + k;
																									int num2 = num1 * 2;
																													int num3 = num1 * 3;
																																	if (
																																								(i + j + k + num2 / 100 + num2 % 10 + num2 % 100 / 10 + num3 / 100 + num3 % 10 + num3 % 100 / 10) == 45
																																													&& (i * j * k * (num2 / 100 )* (num2 % 10 )*( num2 % 100 / 10 )*( num3 / 100 )* (num3 % 10 )*( num3 % 100 / 10)) == 362880
																																																	)
																																							cout << num1 << " " << num2 << " " << num3 << endl;
																																				}
														}
						}
			return 0;
}
