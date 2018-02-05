#include <iostream>
#include <iomanip>
using namespace std;

int main(void) {
		double power;
			cin >> power;
				double cost=0;
					if (power <= 150)cost = power * 0.4463;
						else if (power <= 400)cost = 150 * 0.4463 + (power - 150)*0.4663;
							else if (power > 400)cost = 150 * 0.4463 + 250 * 0.4663 + (power - 400)*0.5663;
								cout << setprecision(1);
									cout << setiosflags(ios::fixed);
										cout<< cost << endl;
}
