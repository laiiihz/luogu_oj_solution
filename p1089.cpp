#include <iostream>
using namespace std;

int main(void) {
		int left = 0;
			int save = 0;
				bool isEnough=true;
					for (int i = 1; i <= 12; i++) {
								int cost;
										cin >> cost;
												left = left + 300 - cost;
														if (left < 0) {
																		isEnough = false;
																					cout << "-" << i << endl;
																								return 0;
																										}
																else if (left < 100)save = save;
																		else {
																						int out = left - (left % 100);
																									save = save + out;
																												left = left - out;
																														}
																			}
						if(isEnough==true)
									cout << save*1.2+left<< endl;



							return 0;
}
