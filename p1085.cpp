#include <iostream>
using namespace std;


int main(void) {

		int MAX_day = 1;
			int MAX_hour = 0;
				for (int i = 1; i <= 7; i++) {
							int h1, h2;
									cin >> h1 >> h2;
											if (MAX_hour < (h1 + h2)) {
															MAX_hour = h1 + h2;
																		MAX_day = i;
																				}
												}
					cout << MAX_day << endl;


						return 0;
}
