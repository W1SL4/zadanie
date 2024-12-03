#include <iostream>
using namespace std;

bool czy_pierwsza(int liczba) {
	    if (liczba < 2) return false;
	        for (int i = 2; i * i <= liczba; ++i) {
			        if (liczba % i == 0) return false;
				    }
		    return true;
}

int main() {
	    int liczba;
	        cout << "Podaj liczbe calkowita: ";
		    cin >> liczba;
		        cout << "Podana liczba: " << liczba;
			    if (czy_pierwsza(liczba)) {
				            cout << " - liczba pierwsza" << endl;
					        } else {
							        cout << " - nie jest liczba pierwsza" << endl;
								    }
			        return 0}
