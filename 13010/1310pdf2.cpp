// Dzia³anie pêtli for

//#include <iostream>
//using namespace std;
//int main() {
//	for (int i = 0; i < 10; i++ ) {
//		cout << i << "\n";
//	}
//	return 0;
//}

// Dzia³anie pêtli while 

//#include <iostream>
//using namespace std; 
//int main() {
//	int i = 0;
//	while(i < 10){
//		cout << i << "\n";
//		i++;
//	}
//	return 0;
//}

// Dzia³nie pêtli do while

//#include <iostream>
//using namespace std;
//int main() {
//	int i = 0;
//	do {
//		cout << i << "\n";
//		i++;
//	} while (i < 10);
//	return 0;
//}

// instrukcje warunkowe 

//#include <iostream>
//using namespace std;

//int main() { 
//    int liczba;
//    cout << "podaj liczbe: \n";
//    cin >> liczba;
//    if (liczba % 2 == 0) {
//        cout << "liczba " << liczba << " jest parzysta!" << endl;
//    }
//    else {
//        cout << "liczba " << liczba << " jest nieparzysta!" << endl;
//    }
// return 0
//}


// || - OR
// && - and
// != ró¿ne od 


// Zadanie 1

// z1

//#include <iostream>
//using namespace std;
//int main() {
//	int i ;
//	for (i = 0; i <= 10; i++) {
//		cout << i << "\n";
//		}
//	return 0;
//}

//z2
// 
//#include <iostream>
//using namespace std;
//int main() {
//	for (int i = 5; i >= 5 && i <= 7; i++) {
//		cout << i << "\n";
//	}
//	return 0;
//}
 
//z3

//#include <iostream>
//using namespace std;
//int main() {
//	for (int i = 5; i >= 5 && i < 7; i++) {
//		cout << i << "\n";
//	}
//	return 0;
//}

//z4

//#include <iostream>
//using namespace std;
//int main() {
//	for (int i = 0; i <= 10; i+=2) {
//		cout << i << "\n";
//	}
//	return 0;
//}

//z5

//#include <iostream>
//using namespace std;
//int main() {
//	for (int i = 10; i >= 0; i--) {
//		cout << i << "\n";
//	}
//	return 0;
//}

// Zadanie 2 (Analiza kodu)

//#include <iostream>
//using namespace std;
//int main() {
 //   int fahr, celsius; //zmienne typu int 
//   int start, limit, krok; //zmienne typu int 

//    start = 0; //przypisz 0 do start 
//    limit = 200; //przypisz 200 do limit 
//    krok = 20; //przypisz 20 do krok 

//    fahr = start; //przypisz wartosc start do zmiennej fahr, czyli fahr = 0 
//    while (fahr <= limit) { //wykonuj petle dopoki wartosc fahr jest <= od zmiennej limit 
//        celsius = 5 * (fahr - 32) / 9; //oblicz stopnie C i przypisz wynik do celsius 
//        cout << fahr << "\t" << celsius << endl; //wypisz zmienne na ekran
//        fahr = fahr + krok; //zwieksz wartosc zmiennej fahr o wartosc zmiennej krok
//    }
// return 0;
//}

// Zadanie 3 (zamiana while na for)

//#include <iostream>
//using namespace std;
//int main() {

 //   int fahr, celsius; //zmienne typu int 
 //   int start, limit, krok; //zmienne typu int 
 //   start = 0; //przypisz 0 do start 
 //   limit = 200; //przypisz 200 do limit 
 //   krok = 20; //przypisz 20 do krok 
 //   for (fahr = 0.0; fahr <= limit; fahr = fahr + krok)   
 //   {
 //       float celsius = (5.0 / 9.0) * (fahr - 32.0);
 //       cout << fahr << "\t" << celsius << endl;
 //   }

//}

// Zadanie 6

//#include <iostream>
//using namespace std;
//int main() {
//   int fahr, celsius; //zmienne typu int 
//   int start, limit, krok; //zmienne typu int 
//   cout << "Przypisz liczbe do srtat \n";
//   cin >> start;
//    limit = 200; //przypisz 200 do limit 
//    krok = 20; //przypisz 20 do krok 

//    fahr = start; //przypisz wartosc start do zmiennej fahr, czyli fahr = 0 
//    while (fahr <= limit) { //wykonuj petle dopoki wartosc fahr jest <= od zmiennej limit 
//        celsius = 5 * (fahr - 32) / 9; //oblicz stopnie C i przypisz wynik do celsius 
//        cout << fahr << "\t" << celsius << endl; //wypisz zmienne na ekran
//        fahr = fahr + krok; //zwieksz wartosc zmiennej fahr o wartosc zmiennej krok
//    }
// return 0;
//}

// Zadanie 7

//#include <iostream>
//using namespace std;
//int main() {
//	int i;
//	int liczba;
//	for (i = 0; i <= 10; i++) {
//		cout << "podaj liczbe: \n";
//		cin >> liczba;
//		if(liczba >0)
//		{
//			cout << liczba << "\n";
//		}
//	}
//	return 0;
//}

//Zadanie 8

//#include <iostream>
//using namespace std;
//int main() {
//	for (int i = 0; i <= 100; i+=2) {
//		cout << i << "\n";
//	}
//	return 0;
//}

// Zadanie 9

//#include <iostream>
//using namespace std;
//int main() {
//    int n;
//    cout << "Podaj liczbe n: ";
//    cin >> n;
//    cout << "Liczby podzielne przez " << n << "\n";
//    for (int i = 0; i <= 100; i++) {
//        if (i % n == 0) {
//            cout << i << " ";
//        }
//    }
//    return 0;
//}

// Zadanie 10

//#include <iostream>
//using namespace std;
//int main() {
//	int n;
//	int hn = -1;
//	cout << "podaj liczbe";
//	cin >> n;
//	cout << "tyle liczb jest podzielnych \n";
//	for (int i = 0; i <= 100; i++) {
//		if (i % n == 0) {
//			hn++;
//			if (i == 100) {
//				cout << hn;
//			}

//		}
//	}

//	return 0;
//}

// Zadanie 11

//#include <iostream>
//using namespace std;
//int main() {
//    int a, b;
//    cout << "Podaj dwie liczby calkowite (a i b): ";
//    cin >> a >> b;
//    int min = (a < b) ? a : b;
//    int max = (a > b) ? a : b;

//    cout << "Liczby z przedzialu [" << min << ", " << max << "] podzielne przez 3:" << endl;

 //   for (int i = min; i <= max; i++) {
 //      if (i % 3 == 0) {
 //           cout << i << " ";
 //       }
 //   }

//    cout << endl;
//    return 0;
//}

//  Zadanie 12

//#include <iostream>
//using namespace std;
//int main()
//{
//	int n;
//	float s = 0;
//	float l, sk;
//	cout << "Podaj ilosc \n";
//	cin >> n;
//	for (int i = 1; i <= n; i++) {
//		cout << "podaj liczbe" << i << "\n";
//		cin >> l;
//		cout << "\n";
//		s += l;
//		if (i == n) {
//			sk = s / n;
//			cout << sk;
//		}

//	}
//	return 0;
//}

// Zadanie 13

//#include <iostream>
//using namespace std;
//int main() {
//	for (int i = 100; i >= 0; i--) {
//		cout << i << "\n";
//	}
//	return 0;
//}

// Zadanie 14

//#include <iostream>
//using namespace std;
//int main() {
//    int a, b, c;
//    cout << "Podaj liczby" << "\n";
//    cin >> a >> b >> c;

//    int najmniejsza = a;

//    if (b < najmniejsza) {
//        najmniejsza = b;
//    }

//    if (c < najmniejsza) {
//        najmniejsza = c;
//    }

//    cout << "Najmniejsza " << najmniejsza << "\n";

//    return 0;
//}

// Zadanie 15

//#include <iostream>
//#include <cstdlib> 
//#include <ctime>
//using namespace std;
//int main() {
//    srand(time(0));
//    int n, m;
//    cout << "Podaj m: ";
//    cin >> m;
//    cout << "Podajn: ";
//    cin >> n;
//
//    for (int i = 0; i < n; i++) {
//        int losowa = rand() % (m + 1); // losuje liczbe z zakresu [0, m]
//        cout << losowa << "\n ";
//    }
//
//    return 0;
//}

// Zadanie 16

//#include <iostream>
//#include <cstdlib> 
//#include <ctime>
//
//using namespace std;
//int main() {
//    int n, l = 0;
//    srand(time(0));
//    cout << "Podaj numer [1,10]: ";
//    cin >> n;
//    cout << "Losowanie" << "\n";
//
//    for (int i = 0; i < 10; i++) {
//        int losowa = rand() % 10 + 1; 
//        cout << losowa << " ";
//        if (losowa == n) {
//            l++;
//        }
//    }
//    cout << "\n numerek pojawil sie " << l << " razy." << endl;
//    return 0;
//}
//
//
