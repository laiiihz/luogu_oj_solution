#include <iostream>
#include <string>
using namespace std;

int main() {
		string a;
			cin >> a;
				string b="";

					for (int i = a.size()-1; i >-1; i--) {
								b = b + a[i];
									}
						bool ac = false;
							if (b[b.size() - 1] == '-') { b = b.substr(0, b.size() - 1); ac = true; }
								for (int i = 0; i < b.size(); i++) {
											if (b[i] != '0') {
															if (ac == true)cout << "-" << b.substr(i) << endl;
																		else cout << b.substr(i) << endl;
																					break;
																							}
												}
									return 0;
}
